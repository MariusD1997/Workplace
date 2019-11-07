using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DudasMarius
{
    class profesori
    {
        private string nume;
        private string prenume;
        private string materie;
        public static List<profesori> Proflist { get; set; } 

        public profesori(string nume, string prenume, string materie)
        {
            this.nume = nume;
            this.prenume = prenume;
            this.materie = materie;
        }

        public string Nume
        {
            get { return nume; }
            set { nume = value; }
        }

        public string Prenume
        {
            get { return prenume; }
            set { prenume = value; }
        }

        public string Materie
        {
            get { return materie; }
            set { materie = value; }
        }

    }
}
