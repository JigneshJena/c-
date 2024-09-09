
        cout << "Balance: " << balance << endl;
    }

    void Deposit() {
        long amt;
        cout << "Enter Amount U want to deposit: ";
        cin >> amt;
        balance += amt;
    }

    void Withdrawal() {
        long amt;
        cout << "Enter Amount U want to withdraw: ";
        cin >> amt;
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Less Balance..." << endl;
    }