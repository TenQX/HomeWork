namespace PSbFM
{
    partial class Form2
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
            addExpense = new Button();
            SummaExpense = new Label();
            SpentOnF2 = new Label();
            CategoryExpense = new Label();
            SummaEx = new TextBox();
            SpentOnEx = new TextBox();
            CameFromIn = new TextBox();
            SummaIn = new TextBox();
            CategoryIncome = new Label();
            CamrFromF2 = new Label();
            SummaIncome = new Label();
            AddIncome = new Button();
            Massege = new Label();
            dateTimeExpense = new DateTimePicker();
            dateTimeIncome = new DateTimePicker();
            Category1 = new DomainUpDown();
            Category2 = new DomainUpDown();
            dataExpense = new Label();
            dataIncome = new Label();
            SuspendLayout();
            // 
            // addExpense
            // 
            addExpense.Location = new Point(250, 202);
            addExpense.Name = "addExpense";
            addExpense.Size = new Size(137, 48);
            addExpense.TabIndex = 1;
            addExpense.Text = "Add expense to the list";
            addExpense.UseVisualStyleBackColor = true;
            addExpense.Click += addExpenseClick;
            // 
            // SummaExpense
            // 
            SummaExpense.AutoSize = true;
            SummaExpense.Location = new Point(179, 35);
            SummaExpense.Name = "SummaExpense";
            SummaExpense.Size = new Size(48, 15);
            SummaExpense.TabIndex = 2;
            SummaExpense.Text = "Summa";
            // 
            // SpentOnF2
            // 
            SpentOnF2.AutoSize = true;
            SpentOnF2.Location = new Point(179, 75);
            SpentOnF2.Name = "SpentOnF2";
            SpentOnF2.Size = new Size(54, 15);
            SpentOnF2.TabIndex = 3;
            SpentOnF2.Text = "Spent on";
            // 
            // CategoryExpense
            // 
            CategoryExpense.AutoSize = true;
            CategoryExpense.Location = new Point(172, 117);
            CategoryExpense.Name = "CategoryExpense";
            CategoryExpense.Size = new Size(55, 15);
            CategoryExpense.TabIndex = 5;
            CategoryExpense.Text = "Category";
            // 
            // SummaEx
            // 
            SummaEx.Location = new Point(250, 32);
            SummaEx.Name = "SummaEx";
            SummaEx.Size = new Size(100, 23);
            SummaEx.TabIndex = 6;
            // 
            // SpentOnEx
            // 
            SpentOnEx.Location = new Point(250, 75);
            SpentOnEx.Name = "SpentOnEx";
            SpentOnEx.Size = new Size(100, 23);
            SpentOnEx.TabIndex = 7;
            // 
            // CameFromIn
            // 
            CameFromIn.Location = new Point(543, 75);
            CameFromIn.Name = "CameFromIn";
            CameFromIn.Size = new Size(100, 23);
            CameFromIn.TabIndex = 18;
            // 
            // SummaIn
            // 
            SummaIn.Location = new Point(543, 32);
            SummaIn.Name = "SummaIn";
            SummaIn.Size = new Size(100, 23);
            SummaIn.TabIndex = 17;
            // 
            // CategoryIncome
            // 
            CategoryIncome.AutoSize = true;
            CategoryIncome.Location = new Point(472, 117);
            CategoryIncome.Name = "CategoryIncome";
            CategoryIncome.Size = new Size(55, 15);
            CategoryIncome.TabIndex = 16;
            CategoryIncome.Text = "Category";
            // 
            // CamrFromF2
            // 
            CamrFromF2.AutoSize = true;
            CamrFromF2.Location = new Point(460, 75);
            CamrFromF2.Name = "CamrFromF2";
            CamrFromF2.Size = new Size(67, 15);
            CamrFromF2.TabIndex = 14;
            CamrFromF2.Text = "Came from";
            // 
            // SummaIncome
            // 
            SummaIncome.AutoSize = true;
            SummaIncome.Location = new Point(479, 35);
            SummaIncome.Name = "SummaIncome";
            SummaIncome.Size = new Size(48, 15);
            SummaIncome.TabIndex = 13;
            SummaIncome.Text = "Summa";
            // 
            // AddIncome
            // 
            AddIncome.Location = new Point(545, 202);
            AddIncome.Name = "AddIncome";
            AddIncome.Size = new Size(137, 48);
            AddIncome.TabIndex = 12;
            AddIncome.Text = "Add income to the list";
            AddIncome.UseVisualStyleBackColor = true;
            AddIncome.Click += AddIncomeClick;
            // 
            // Massege
            // 
            Massege.AutoSize = true;
            Massege.Location = new Point(430, 320);
            Massege.Name = "Massege";
            Massege.Size = new Size(53, 15);
            Massege.TabIndex = 21;
            Massege.Text = "massage";
            // 
            // dateTimeExpense
            // 
            dateTimeExpense.Location = new Point(250, 155);
            dateTimeExpense.Name = "dateTimeExpense";
            dateTimeExpense.Size = new Size(200, 23);
            dateTimeExpense.TabIndex = 22;
            // 
            // dateTimeIncome
            // 
            dateTimeIncome.Location = new Point(543, 155);
            dateTimeIncome.Name = "dateTimeIncome";
            dateTimeIncome.Size = new Size(200, 23);
            dateTimeIncome.TabIndex = 23;
            // 
            // Category1
            // 
            Category1.Location = new Point(250, 115);
            Category1.Name = "Category1";
            Category1.Size = new Size(200, 23);
            Category1.TabIndex = 24;
            // 
            // Category2
            // 
            Category2.Location = new Point(543, 115);
            Category2.Name = "Category2";
            Category2.Size = new Size(200, 23);
            Category2.TabIndex = 25;
            // 
            // dataExpense
            // 
            dataExpense.AutoSize = true;
            dataExpense.Location = new Point(195, 163);
            dataExpense.Name = "dataExpense";
            dataExpense.Size = new Size(31, 15);
            dataExpense.TabIndex = 26;
            dataExpense.Text = "Data";
            // 
            // dataIncome
            // 
            dataIncome.AutoSize = true;
            dataIncome.Location = new Point(496, 163);
            dataIncome.Name = "dataIncome";
            dataIncome.Size = new Size(31, 15);
            dataIncome.TabIndex = 27;
            dataIncome.Text = "Data";
            // 
            // Form2
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1023, 552);
            Controls.Add(dataIncome);
            Controls.Add(dataExpense);
            Controls.Add(Category2);
            Controls.Add(Category1);
            Controls.Add(dateTimeIncome);
            Controls.Add(dateTimeExpense);
            Controls.Add(Massege);
            Controls.Add(CameFromIn);
            Controls.Add(SummaIn);
            Controls.Add(CategoryIncome);
            Controls.Add(CamrFromF2);
            Controls.Add(SummaIncome);
            Controls.Add(AddIncome);
            Controls.Add(SpentOnEx);
            Controls.Add(SummaEx);
            Controls.Add(CategoryExpense);
            Controls.Add(SpentOnF2);
            Controls.Add(SummaExpense);
            Controls.Add(addExpense);
            Name = "Form2";
            Text = "Form2";
            Load += Form2_Load;
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion
        private Label SummaExpense;
        private Label SpentOnF2;
        private Label CategoryExpense;
        private TextBox SummaEx;
        private TextBox SpentOnEx;
        private TextBox CameFromIn;
        private TextBox SummaIn;
        private Label CategoryIncome;
        private Label CamrFromF2;
        private Label SummaIncome;
        private Button AddIncome;
        private Label Massege;
        private Button addExpense;
        private DateTimePicker dateTimeExpense;
        private DateTimePicker dateTimeIncome;
        private DomainUpDown Category1;
        private DomainUpDown Category2;
        private Label dataExpense;
        private Label dataIncome;
    }
}