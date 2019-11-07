using System;
using System.IO;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DudasMarius
{
    public partial class Form1 : Form
    {
        int studisloadingfft = 1;
        int profisloadingfft = 1;
        int studhasloaded = 0;
        int profhasloaded = 0;
        string studlocation;
        string proflocation;

        public Form1()
        {
            InitializeComponent();
            studenti.Studlist = new List<studenti>();
            profesori.Proflist = new List<profesori>();
        }
        
        private void Form1_Load(object sender, EventArgs e)
        {
            
            cestud.ForeColor = Color.Gray;
            ceprof.ForeColor = Color.Gray;
            cestud.Font = new Font(this.Font, FontStyle.Italic);
            ceprof.Font = new Font(this.Font, FontStyle.Italic);
            cestud.Text = "Cauta studenti ...";
            ceprof.Text = "Cauta profesori ...";
        }

        //------------------------------------------------------------------- | Studenti | -----------------------------------------------------------------//

        private void studid_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                studenti s = new studenti(studnume.Text, studprenume.Text, int.Parse(studid.Text));
                if (!string.IsNullOrEmpty(s.Nume) && !string.IsNullOrEmpty(s.Prenume) && !string.IsNullOrEmpty(s.Numarmat.ToString()))
                {
                    string[] row = { s.Nume, s.Prenume, s.Numarmat.ToString() };
                    var listViewItem = new ListViewItem(row);
                    studlist.Items.Add(listViewItem);
                    studnume.Text = null; studprenume.Text = null; studid.Text = null;
                    studnume.Focus();
                }
            }
        }

        private void studlist_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Delete)
            {
                for (int i = studlist.SelectedItems.Count - 1; i >= 0; i--)
                {
                    studlist.Items.Remove(studlist.SelectedItems[i]);
                    studnume.Focus();
                }
            }
        }

        private void studid_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar) && (e.KeyChar != '.'))
            {
                e.Handled = true;
            }
        }

        private void savestud_Click(object sender, EventArgs e)
        {
            SaveFileDialog sfd = new SaveFileDialog
            {
                Title = "Choose file to save to",
                FileName = "Studenti.csv",
                Filter = "CSV (*.csv)|*.csv",
                FilterIndex = 0,
                InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.Desktop)
            };

            if (sfd.ShowDialog() == DialogResult.OK)
            {
                string[] headersstud = studlist.Columns
                           .OfType<ColumnHeader>()
                           .Select(header => header.Text.Trim())
                           .ToArray();

                string[][] itemsstud = studlist.Items
                            .OfType<ListViewItem>()
                            .Select(lvi => lvi.SubItems
                                .OfType<ListViewItem.ListViewSubItem>()
                                .Select(si => si.Text).ToArray()).ToArray();

                string table = string.Join(",", headersstud) + Environment.NewLine;

                foreach (string[] a in itemsstud)
                {
                    table += string.Join(",", a) + Environment.NewLine;
                }

                table = table.TrimEnd('\r', '\n');
                System.IO.File.WriteAllText(sfd.FileName, table);
            }
        }

        private void loadstud_Click(object sender, EventArgs e)
        {
            if (studisloadingfft == 1)
            {
                OpenFileDialog lfd = new OpenFileDialog
                {
                    Title = "Choose file to load data from",
                    FileName = "Studenti.csv",
                    Filter = "CSV (*.csv)|*.csv",
                    FilterIndex = 0,
                    InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.Desktop)
                };

                if (lfd.ShowDialog() == DialogResult.OK)
                {
                    studisloadingfft = 0;
                    studlocation = lfd.FileName;
                    studhasloaded = 1;
                    studlist.Items.Clear();

                    using (var reader = new System.IO.StreamReader(lfd.FileName))
                    {
                        reader.ReadLine(); // skip first

                        string line;
                        while ((line = reader.ReadLine()) != null)
                        {
                            string[] data = line.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
                            ListViewItem lvi = new ListViewItem();
                            lvi.Text = data[0];
                            lvi.SubItems.Add(data[1]);
                            lvi.SubItems.Add(data[2]);
                            studlist.Items.Add(lvi);
                        }
                    }
                }
            }
            else
            {
                studhasloaded = 1;
                studlist.Items.Clear();

                using (var reader = new System.IO.StreamReader(studlocation))
                {
                    reader.ReadLine(); // skip first

                    string line;
                    while ((line = reader.ReadLine()) != null)
                    {
                        string[] data = line.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
                        ListViewItem lvi = new ListViewItem();
                        lvi.Text = data[0];
                        lvi.SubItems.Add(data[1]);
                        lvi.SubItems.Add(data[2]);
                        studlist.Items.Add(lvi);
                    }
                }
            }
        }

        private void stud_clear_click(object sender, EventArgs e)
        {
            studlist.Items.Clear();
            studhasloaded = 0;
        }

        private void cestud_TextChanged(object sender, EventArgs e)
        {
            if (studhasloaded == 1)
            {
                if (cestud.Text != "Cauta studenti ...")
                {
                    loadstud_Click(sender, EventArgs.Empty);

                    foreach (ListViewItem item in studlist.Items)
                    {
                        if (item.Text.ToString().ToLower().StartsWith(cestud.Text.ToLower())) { }
                        else
                        {
                            studlist.Items.Remove(item);
                        }
                    }
                }
            }
        }
        
        private void cestud_Enter(object sender, EventArgs e)
        {
            if (cestud.Text == "Cauta studenti ...")
            {
                cestud.Font = new Font(this.Font, FontStyle.Regular);
                cestud.ForeColor = Color.Black;
                cestud.Text = "";
            }
        }

        private void cestud_Leave(object sender, EventArgs e)
        {
            if (cestud.Text == "")
            {
                cestud.Text = "Cauta studenti ...";
                cestud.Font = new Font(this.Font, FontStyle.Italic);
                cestud.ForeColor = Color.Gray;
            }
        }

        //------------------------------------------------------------------- | Profesori | -----------------------------------------------------------------//

        private void profmaterie_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                profesori p = new profesori(profnume.Text, profprenume.Text, profmaterie.SelectedItem.ToString());
                if (!string.IsNullOrEmpty(p.Nume) && !string.IsNullOrEmpty(p.Prenume) && !string.IsNullOrEmpty(p.Materie))
                {
                    string[] row = { p.Nume, p.Prenume, p.Materie };
                    var listViewItem = new ListViewItem(row);
                    proflist.Items.Add(listViewItem);
                    profnume.Text = null; profprenume.Text = null; profmaterie.Text = null;
                    profnume.Focus();
                }
            }
        }
        
        private void proflist_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Delete)
            {
                for (int i = proflist.SelectedItems.Count - 1; i >= 0; i--)
                {
                    proflist.Items.Remove(proflist.SelectedItems[i]);
                    profnume.Focus();
                }
            }
        }

        private void saveprof_Click(object sender, EventArgs e)
        {
            SaveFileDialog sfd = new SaveFileDialog
            {
                Title = "Choose file to save to",
                FileName = "Profesori.csv",
                Filter = "CSV (*.csv)|*.csv",
                FilterIndex = 0,
                InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.Desktop)
            };

            if (sfd.ShowDialog() == DialogResult.OK)
            {
                string[] headersprof = proflist.Columns
                           .OfType<ColumnHeader>()
                           .Select(header => header.Text.Trim())
                           .ToArray();

                string[][] itemsprof = proflist.Items
                            .OfType<ListViewItem>()
                            .Select(lvi => lvi.SubItems
                                .OfType<ListViewItem.ListViewSubItem>()
                                .Select(si => si.Text).ToArray()).ToArray();

                string table = string.Join(",", headersprof) + Environment.NewLine;

                foreach (string[] b in itemsprof)
                {
                    table += string.Join(",", b) + Environment.NewLine;
                }

                table = table.TrimEnd('\r', '\n');
                System.IO.File.WriteAllText(sfd.FileName, table);
            }
        }

        private void loadprof_Click(object sender, EventArgs e)
        {
            if (profisloadingfft == 1)
            {
                OpenFileDialog lfd = new OpenFileDialog
                {
                    Title = "Choose file to load data from",
                    FileName = "Profesori.csv",
                    Filter = "CSV (*.csv)|*.csv",
                    FilterIndex = 0,
                    InitialDirectory = Environment.GetFolderPath(Environment.SpecialFolder.Desktop)
                };

                if (lfd.ShowDialog() == DialogResult.OK)
                {
                    profisloadingfft = 0;
                    proflocation = lfd.FileName;
                    profhasloaded = 1;
                    proflist.Items.Clear();

                    using (var reader = new System.IO.StreamReader(lfd.FileName))
                    {
                        reader.ReadLine(); // skip first

                        string line;
                        while ((line = reader.ReadLine()) != null)
                        {
                            string[] data = line.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
                            ListViewItem lvi = new ListViewItem();
                            lvi.Text = data[0];
                            lvi.SubItems.Add(data[1]);
                            lvi.SubItems.Add(data[2]);
                            proflist.Items.Add(lvi);
                        }
                    }
                }
            }
            else
            {
                profhasloaded = 1;
                proflist.Items.Clear();

                using (var reader = new System.IO.StreamReader(proflocation))
                {
                    reader.ReadLine(); // skip first

                    string line;
                    while ((line = reader.ReadLine()) != null)
                    {
                        string[] data = line.Split(new char[] { ',' }, StringSplitOptions.RemoveEmptyEntries);
                        ListViewItem lvi = new ListViewItem();
                        lvi.Text = data[0];
                        lvi.SubItems.Add(data[1]);
                        lvi.SubItems.Add(data[2]);
                        proflist.Items.Add(lvi);
                    }
                }
            }
        }

        private void prof_clear_click(object sender, EventArgs e)
        {
            proflist.Items.Clear();
            profhasloaded = 0;
        }

        private void ceprof_TextChanged(object sender, EventArgs e)
        {
            if (profhasloaded == 1)
            {
                if (ceprof.Text != "Cauta profesori ...")
                {
                    loadprof_Click(sender, EventArgs.Empty);

                    foreach (ListViewItem item in proflist.Items)
                    {
                        if (item.Text.ToString().ToLower().StartsWith(ceprof.Text.ToLower())) { }
                        else
                        {
                            proflist.Items.Remove(item);
                        }
                    }
                }
            }
        }

        private void ceprof_Enter(object sender, EventArgs e)
        {
            if (ceprof.Text == "Cauta profesori ...")
            {
                ceprof.Font = new Font(this.Font, FontStyle.Regular);
                ceprof.ForeColor = Color.Black;
                ceprof.Text = "";
            }
        }

        private void ceprof_Leave(object sender, EventArgs e)
        {
            if (ceprof.Text == "")
            {
                ceprof.Text = "Cauta profesori ...";
                ceprof.Font = new Font(this.Font, FontStyle.Italic);
                ceprof.ForeColor = Color.Gray;
            }
        }
    }
}