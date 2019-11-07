namespace DudasMarius
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.label1 = new System.Windows.Forms.Label();
            this.studnume = new System.Windows.Forms.TextBox();
            this.studprenume = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.studid = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.profprenume = new System.Windows.Forms.TextBox();
            this.profnume = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.profmaterie = new System.Windows.Forms.ComboBox();
            this.studlist = new System.Windows.Forms.ListView();
            this.studcol1 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.studcol2 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.studcol3 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.proflist = new System.Windows.Forms.ListView();
            this.profcol1 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.profcol2 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.profcol3 = ((System.Windows.Forms.ColumnHeader)(new System.Windows.Forms.ColumnHeader()));
            this.saveprof = new System.Windows.Forms.Button();
            this.loadprof = new System.Windows.Forms.Button();
            this.loadstud = new System.Windows.Forms.Button();
            this.savestud = new System.Windows.Forms.Button();
            this.clearstudbuton = new System.Windows.Forms.Button();
            this.clearprofbuton = new System.Windows.Forms.Button();
            this.toolTip1 = new System.Windows.Forms.ToolTip(this.components);
            this.cestud = new System.Windows.Forms.TextBox();
            this.ceprof = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 33);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Nume";
            // 
            // studnume
            // 
            this.studnume.Location = new System.Drawing.Point(124, 30);
            this.studnume.Name = "studnume";
            this.studnume.Size = new System.Drawing.Size(100, 20);
            this.studnume.TabIndex = 1;
            // 
            // studprenume
            // 
            this.studprenume.Location = new System.Drawing.Point(124, 59);
            this.studprenume.Name = "studprenume";
            this.studprenume.Size = new System.Drawing.Size(100, 20);
            this.studprenume.TabIndex = 2;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 62);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(49, 13);
            this.label2.TabIndex = 4;
            this.label2.Text = "Prenume";
            // 
            // studid
            // 
            this.studid.Location = new System.Drawing.Point(124, 87);
            this.studid.Name = "studid";
            this.studid.Size = new System.Drawing.Size(100, 20);
            this.studid.TabIndex = 3;
            this.studid.KeyDown += new System.Windows.Forms.KeyEventHandler(this.studid_KeyDown);
            this.studid.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.studid_KeyPress);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(12, 90);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(78, 13);
            this.label3.TabIndex = 6;
            this.label3.Text = "Numar Matricol";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(121, 9);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(46, 13);
            this.label5.TabIndex = 13;
            this.label5.Text = "Studenti";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(459, 9);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(48, 13);
            this.label6.TabIndex = 14;
            this.label6.Text = "Profesori";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(363, 90);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(42, 13);
            this.label8.TabIndex = 19;
            this.label8.Text = "Materie";
            // 
            // profprenume
            // 
            this.profprenume.Location = new System.Drawing.Point(462, 59);
            this.profprenume.Name = "profprenume";
            this.profprenume.Size = new System.Drawing.Size(100, 20);
            this.profprenume.TabIndex = 12;
            // 
            // profnume
            // 
            this.profnume.Location = new System.Drawing.Point(462, 30);
            this.profnume.Name = "profnume";
            this.profnume.Size = new System.Drawing.Size(100, 20);
            this.profnume.TabIndex = 11;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(363, 62);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(49, 13);
            this.label4.TabIndex = 25;
            this.label4.Text = "Prenume";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(363, 33);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(35, 13);
            this.label9.TabIndex = 24;
            this.label9.Text = "Nume";
            // 
            // profmaterie
            // 
            this.profmaterie.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.profmaterie.FormattingEnabled = true;
            this.profmaterie.Items.AddRange(new object[] {
            "Limba Romana",
            "Limba Engleza",
            "Limba Franceza",
            "Matematica",
            "Programare",
            "Istorie",
            "Geografie",
            "Sport"});
            this.profmaterie.Location = new System.Drawing.Point(462, 90);
            this.profmaterie.Name = "profmaterie";
            this.profmaterie.Size = new System.Drawing.Size(100, 21);
            this.profmaterie.TabIndex = 13;
            this.profmaterie.KeyDown += new System.Windows.Forms.KeyEventHandler(this.profmaterie_KeyDown);
            // 
            // studlist
            // 
            this.studlist.Anchor = System.Windows.Forms.AnchorStyles.Left;
            this.studlist.AutoArrange = false;
            this.studlist.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.studcol1,
            this.studcol2,
            this.studcol3});
            this.studlist.FullRowSelect = true;
            this.studlist.GridLines = true;
            this.studlist.Location = new System.Drawing.Point(12, 169);
            this.studlist.Name = "studlist";
            this.studlist.Size = new System.Drawing.Size(288, 253);
            this.studlist.TabIndex = 6;
            this.studlist.UseCompatibleStateImageBehavior = false;
            this.studlist.View = System.Windows.Forms.View.Details;
            this.studlist.KeyDown += new System.Windows.Forms.KeyEventHandler(this.studlist_KeyDown);
            // 
            // studcol1
            // 
            this.studcol1.Text = "Nume";
            this.studcol1.Width = 90;
            // 
            // studcol2
            // 
            this.studcol2.Text = "Prenume";
            this.studcol2.Width = 90;
            // 
            // studcol3
            // 
            this.studcol3.Text = "Nr.Matricol";
            this.studcol3.Width = 85;
            // 
            // proflist
            // 
            this.proflist.Anchor = System.Windows.Forms.AnchorStyles.Left;
            this.proflist.AutoArrange = false;
            this.proflist.Columns.AddRange(new System.Windows.Forms.ColumnHeader[] {
            this.profcol1,
            this.profcol2,
            this.profcol3});
            this.proflist.FullRowSelect = true;
            this.proflist.GridLines = true;
            this.proflist.Location = new System.Drawing.Point(352, 169);
            this.proflist.Name = "proflist";
            this.proflist.Size = new System.Drawing.Size(287, 253);
            this.proflist.TabIndex = 16;
            this.proflist.UseCompatibleStateImageBehavior = false;
            this.proflist.View = System.Windows.Forms.View.Details;
            this.proflist.KeyDown += new System.Windows.Forms.KeyEventHandler(this.proflist_KeyDown);
            // 
            // profcol1
            // 
            this.profcol1.Text = "Nume";
            this.profcol1.Width = 90;
            // 
            // profcol2
            // 
            this.profcol2.Text = "Prenume";
            this.profcol2.Width = 90;
            // 
            // profcol3
            // 
            this.profcol3.Text = "Materie";
            this.profcol3.Width = 85;
            // 
            // saveprof
            // 
            this.saveprof.BackColor = System.Drawing.SystemColors.Control;
            this.saveprof.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.saveprof.Image = ((System.Drawing.Image)(resources.GetObject("saveprof.Image")));
            this.saveprof.Location = new System.Drawing.Point(592, 76);
            this.saveprof.Name = "saveprof";
            this.saveprof.Size = new System.Drawing.Size(38, 35);
            this.saveprof.TabIndex = 20;
            this.toolTip1.SetToolTip(this.saveprof, "Salveaza Profesori");
            this.saveprof.UseVisualStyleBackColor = false;
            this.saveprof.Click += new System.EventHandler(this.saveprof_Click);
            // 
            // loadprof
            // 
            this.loadprof.BackColor = System.Drawing.SystemColors.Control;
            this.loadprof.Image = ((System.Drawing.Image)(resources.GetObject("loadprof.Image")));
            this.loadprof.Location = new System.Drawing.Point(592, 30);
            this.loadprof.Name = "loadprof";
            this.loadprof.Size = new System.Drawing.Size(38, 37);
            this.loadprof.TabIndex = 19;
            this.toolTip1.SetToolTip(this.loadprof, "Incarca Profesori");
            this.loadprof.UseVisualStyleBackColor = false;
            this.loadprof.Click += new System.EventHandler(this.loadprof_Click);
            // 
            // loadstud
            // 
            this.loadstud.Image = ((System.Drawing.Image)(resources.GetObject("loadstud.Image")));
            this.loadstud.Location = new System.Drawing.Point(254, 29);
            this.loadstud.Name = "loadstud";
            this.loadstud.Size = new System.Drawing.Size(38, 37);
            this.loadstud.TabIndex = 9;
            this.toolTip1.SetToolTip(this.loadstud, "Incarca Studenti");
            this.loadstud.UseVisualStyleBackColor = true;
            this.loadstud.Click += new System.EventHandler(this.loadstud_Click);
            // 
            // savestud
            // 
            this.savestud.Image = ((System.Drawing.Image)(resources.GetObject("savestud.Image")));
            this.savestud.Location = new System.Drawing.Point(254, 72);
            this.savestud.Name = "savestud";
            this.savestud.Size = new System.Drawing.Size(38, 35);
            this.savestud.TabIndex = 10;
            this.toolTip1.SetToolTip(this.savestud, "Salveaza Studenti");
            this.savestud.UseVisualStyleBackColor = true;
            this.savestud.Click += new System.EventHandler(this.savestud_Click);
            // 
            // clearstudbuton
            // 
            this.clearstudbuton.Location = new System.Drawing.Point(124, 124);
            this.clearstudbuton.Name = "clearstudbuton";
            this.clearstudbuton.Size = new System.Drawing.Size(168, 23);
            this.clearstudbuton.TabIndex = 4;
            this.clearstudbuton.Text = "Elimina tot";
            this.clearstudbuton.UseVisualStyleBackColor = true;
            this.clearstudbuton.Click += new System.EventHandler(this.stud_clear_click);
            // 
            // clearprofbuton
            // 
            this.clearprofbuton.Location = new System.Drawing.Point(462, 124);
            this.clearprofbuton.Name = "clearprofbuton";
            this.clearprofbuton.Size = new System.Drawing.Size(168, 23);
            this.clearprofbuton.TabIndex = 14;
            this.clearprofbuton.Text = "Elimina tot";
            this.clearprofbuton.UseVisualStyleBackColor = true;
            this.clearprofbuton.Click += new System.EventHandler(this.prof_clear_click);
            // 
            // cestud
            // 
            this.cestud.Location = new System.Drawing.Point(12, 445);
            this.cestud.Name = "cestud";
            this.cestud.Size = new System.Drawing.Size(288, 20);
            this.cestud.TabIndex = 28;
            this.cestud.TextChanged += new System.EventHandler(this.cestud_TextChanged);
            this.cestud.Enter += new System.EventHandler(this.cestud_Enter);
            this.cestud.Leave += new System.EventHandler(this.cestud_Leave);
            // 
            // ceprof
            // 
            this.ceprof.Location = new System.Drawing.Point(352, 445);
            this.ceprof.Name = "ceprof";
            this.ceprof.Size = new System.Drawing.Size(287, 20);
            this.ceprof.TabIndex = 29;
            this.ceprof.TextChanged += new System.EventHandler(this.ceprof_TextChanged);
            this.ceprof.Enter += new System.EventHandler(this.ceprof_Enter);
            this.ceprof.Leave += new System.EventHandler(this.ceprof_Leave);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(651, 485);
            this.Controls.Add(this.ceprof);
            this.Controls.Add(this.cestud);
            this.Controls.Add(this.clearprofbuton);
            this.Controls.Add(this.clearstudbuton);
            this.Controls.Add(this.savestud);
            this.Controls.Add(this.loadstud);
            this.Controls.Add(this.loadprof);
            this.Controls.Add(this.saveprof);
            this.Controls.Add(this.proflist);
            this.Controls.Add(this.studlist);
            this.Controls.Add(this.profmaterie);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.profprenume);
            this.Controls.Add(this.profnume);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.studid);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.studprenume);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.studnume);
            this.Controls.Add(this.label1);
            this.ForeColor = System.Drawing.SystemColors.ControlText;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "Form1";
            this.Text = "Examen P.O.O. Dudas Marius";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox studnume;
        private System.Windows.Forms.TextBox studprenume;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox studid;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox profprenume;
        private System.Windows.Forms.TextBox profnume;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.ComboBox profmaterie;
        private System.Windows.Forms.ListView studlist;
        private System.Windows.Forms.ColumnHeader studcol1;
        private System.Windows.Forms.ColumnHeader studcol2;
        private System.Windows.Forms.ColumnHeader studcol3;
        private System.Windows.Forms.ListView proflist;
        private System.Windows.Forms.ColumnHeader profcol1;
        private System.Windows.Forms.ColumnHeader profcol2;
        private System.Windows.Forms.ColumnHeader profcol3;
        private System.Windows.Forms.Button saveprof;
        private System.Windows.Forms.Button loadprof;
        private System.Windows.Forms.Button loadstud;
        private System.Windows.Forms.Button savestud;
        private System.Windows.Forms.Button clearstudbuton;
        private System.Windows.Forms.Button clearprofbuton;
        private System.Windows.Forms.ToolTip toolTip1;
        private System.Windows.Forms.TextBox cestud;
        private System.Windows.Forms.TextBox ceprof;
    }
}

