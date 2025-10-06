namespace PSbFM
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            addTransaction = new Button();
            dataGridView1 = new DataGridView();
            Delete = new Button();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // addTransaction
            // 
            addTransaction.Location = new Point(610, 33);
            addTransaction.Name = "addTransaction";
            addTransaction.Size = new Size(75, 23);
            addTransaction.TabIndex = 0;
            addTransaction.Text = "add transaction";
            addTransaction.UseVisualStyleBackColor = true;
            addTransaction.Click += AddTransaction;
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(45, 12);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.Size = new Size(451, 166);
            dataGridView1.TabIndex = 2;
            // 
            // Delete
            // 
            Delete.Location = new Point(610, 118);
            Delete.Name = "Delete";
            Delete.Size = new Size(75, 23);
            Delete.TabIndex = 3;
            Delete.Text = "delete";
            Delete.UseVisualStyleBackColor = true;
            Delete.Click += DeleteTransaction;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1229, 626);
            Controls.Add(Delete);
            Controls.Add(dataGridView1);
            Controls.Add(addTransaction);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ((System.ComponentModel.ISupportInitialize)dataGridView1).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private Button addTransaction;
        private DataGridView dataGridView1;
        private Button Delete;
    }
}
