namespace PSbFM
{
    public partial class Form1 : Form
    {
        public List<Transaction> transactionsList = new List<Transaction>();
        public string puth = "DataBaseOfTransaction.csv";

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {


        }

        private void AddTransaction(object sender, EventArgs e)
        {
            Form2 form23 = new Form2();
            form23.Show();
            form23.transactionsList += Forma2Transaction;
            form23.transactionsList += Forma2Transaction;

        }
        public void Forma2Transaction(Transaction obj)
        {
            transactionsList.Add(obj);
        }

        private void DeleteTransaction(object sender, EventArgs e)
        {
            Form3 form34 = new Form3();
            form34.ShowDialog();

        }
    }
}
