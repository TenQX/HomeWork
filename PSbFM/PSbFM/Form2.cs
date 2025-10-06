using Microsoft.VisualBasic.ApplicationServices;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace PSbFM
{
    public partial class Form2 : Form
    {
        public event Action<Transaction> transactionsList;
        public List<string> CategoryList = new List<string>();
       
        public Form2()
        {   InitializeComponent();
            CategoryList.Add("Food");
            CategoryList.Add($"Transport");
            CategoryList.Add($"Money transfer");
            CategoryList.Add($"Shopping");
            CategoryList.Add($"Sub");
            CategoryList.Add($"Health");
            CategoryList.Add($"Entertainment and relaxation");
           
            Category1.Items.AddRange(CategoryList);
            Category2.Items.AddRange(CategoryList); 
        }

        public void Form2_Load(object sender, EventArgs e)
        {

        }

        public void addExpenseClick(object sender, EventArgs e)
        {
            DateTime date = dateTimeExpense.Value;
            int summa = int.Parse(SummaEx.Text);

            Transaction transaction = new Transaction("", SpentOnEx.Text, summa, date, Category1.Text);

            transactionsList.Invoke(transaction);
            SummaEx.Clear();
            SpentOnEx.Clear();

        }

        public void AddIncomeClick(object sender, EventArgs e)
        {
            DateTime date = dateTimeIncome.Value;
            int summa = int.Parse(SummaIn.Text);

            Transaction transaction = new Transaction(CameFromIn.Text, "", summa, date, Category2.Text);
            transactionsList.Invoke(transaction);
            SummaIn.Clear();
            CameFromIn.Clear();
        }

       
    }
}
