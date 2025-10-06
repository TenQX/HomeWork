using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PSbFM
{
    public   class Transaction 
    {
        public string cameFrom;
        public string spentOn;
        public int summa;
        public DateTime data;
        public string category;
        


        public Transaction(string camefromn,string spenton ,int summan, DateTime daten, string Category)
        {
            cameFrom = camefromn;
            spentOn = spenton;
            summa = summan;
            data = daten;
            category = Category;
            
        }
        public string Camefrom { 
            get {
                return cameFrom; 
            }
            set {
                if (cameFrom != value && value != string.Empty)
                {
                    cameFrom = value;
                }
            }
        }
        public int Summa { 
            get {
                return summa;
            } 
            set {
                if (summa != value && summa < 0)
                {
                    summa = value;
                }
            }
        }
        public DateTime Data {
            get{
                return data; 
            }
            set {
                if (data != value)
                {
                    data = value;
                }
            } 
        }
        public string SpentOn
        {
            get {
                return spentOn;
            }
            set {
                if (spentOn != value && value != string.Empty)
                {
                    spentOn = value;
                }
            }
        }





    }
}
