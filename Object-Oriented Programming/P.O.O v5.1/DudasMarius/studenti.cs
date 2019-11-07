using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DudasMarius
{
    class studenti
    {
        private string nume;
        private string prenume;
        private int numarmat;
        public static List<studenti> Studlist { get; set; }

        public studenti(string nume, string prenume, int numarmat)
        {
            this.nume = nume;
            this.prenume = prenume;
            this.numarmat = numarmat;
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

        public int Numarmat
        {
            get { return numarmat; }
            set { numarmat = value; }
        }


    }
}
