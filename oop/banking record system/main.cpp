#include <iostream>
#include <fstream>

using std::cout;
using std::cin;

class account_query
{
    char account_number[20];
    char firstName[10];
    char lastName[10];
    float total_balance;
public:
    void read_data();
    void show_data();
    void write_rec();
    void read_rec();
    void search_rec();
    void edit_rec();
    void delete_rec();
};


void account_query::read_data()
{
    cout << "\nEnter Account Number: ";
    cin >> account_number;
    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter Last Name: ";
    cin >> lastName;
    cout << "Enter Balance: ";
    cin >> total_balance;
    cout << '\n';
}

void account_query::write_rec()
{
    std::ofstream outfile;
    outfile.open("record.bank", std::ios::binary|std::ios::app);
    read_data();
    outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
    outfile.close();
}

void account_query::read_rec()
{

}

int main() 
{
    account_query A;
    int choice;
    std::cout << "***Account Information System***\n";
    while(true)
    {
        std::cout << "Select one option below";
        std::cout << "\n\t1-->Add record to file";
        std::cout << "\n\t2-->Show record to file";
        std::cout << "\n\t3-->Search record from file";
        std::cout << "\n\t4-->Update record";
        std::cout << "\n\t5-->Delete record";
        std::cout << "\n\t6-->Quit";
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;
        switch(choice)
        {
            case 1:
                A.write_rec();
                break;
            case 2:
                A.read_rec();
                break;
            default:
                std::cout << "\nEnter correct choice please.";
                exit(0);
        }
    }
    system("pause");
    return 0;
}
