#include <iostream>
#include<fstream>
#include<limits>
using namespace std;

class Manager
{
public:
    int index = 0, arrSize = 0;
    string todo[20];
    char choice;
    virtual void execution() = 0;
public:

    Manager()
    {
        ifstream read;
        read.open("Data.txt");
        if(read)
        {
            int i=0;
            while(read.eof() == 0)
            {
                getline(read,todo[i]);
                i++;
            }
        }
        else
        {
            ofstream write("Data.txt");
        }
        read.close();
    }

    void writeData()
    {
        ofstream write("Data.txt");
        int k=0;
        while(todo[k] != "")
        {
            write<<todo[k]<<endl;
            k++;
        }
        write.close();
    }

    void checkSize()
    {
        int i=0;
        while(todo[i] != "")
        {
            arrSize++;
            i++;
        }
    }

    void display()
    {
        int i=0;
        while(todo[i] != "")
        {
            cout<<i+1<<": "<<todo[i]<<endl;
            i++;
        }
    }
};

class createTodo : public Manager
{
public:
    char choice;
    void execution()
    {
        if(todo[0] == "")
        {
            cout<<"There is no any todo task found"<<endl;
        }
        checkSize();
        int i = arrSize;
        do
        {
            cout<<"Enter your todo task: ";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,todo[i]);
            i++;
            cout<<"Do you want to enter more todo's (y to enter more any other character to skip): ";
            cin>>choice;

        }
        while(choice == 'y');
        writeData();
    }
};

class updateTodo : public Manager
{
public:
    void execution()
    {
        if(todo[0] == "")
        {
            cout<<"There is no any Todo task found to update"<<endl;
        }
        else
        {
            display();
            cout<<"Which one you want to update:";
            cin>>index;
            index--;
            cout<<"Enter the updated task:";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,todo[index]);
            writeData();
        }
    }
};

class delTodo : public Manager
{
public:
    void execution()
    {
        if(todo[0] == "")
        {
            cout<<"There is no any Todo task found to delete"<<endl;
        }
        else
        {
            checkSize();
            display();
            cout<<"Which one you want to delete:";
            cin>>index;
            index--;
            while(index < arrSize) //index = 0
            {
                todo[index] = todo[index+1];
                index++;
            }
            writeData();
        }
    }
};

class readTodo : public Manager
{
    void execution()
    {
        if(todo[0] == "")
        {
            cout<<"There is no any Todo task found to read"<<endl;
        }
        else
        {

            display();
        }
    }
};

int main()
{
    int options;
    char again;
    Manager* m;
    do
    {
        cout<<"[1] Create Todos\n[2] Update Todos\n[3] Delete Todos\n[4] Read All Todos\n[5] Exit"<<endl;
        cout<<"\nEnter your choice:";
        cin>>options;

        if(options < 1 || options > 5)
        {
            while(options < 1 || options > 5)
            {
                cout<<"You entered a invalid operation"<<endl;
                cout<<"Enter your choice:";
                cin>>options;
            }
        }

        if (options == 1)
        {
            createTodo ct;
            m = &ct;
            m->execution();
        }

        else if (options == 2)
        {
            updateTodo upd;
            m = &upd;
            m->execution();
        }

        else if (options == 3)
        {
            delTodo dto;
            m = &dto;
            m->execution();
        }

        else if (options == 3)
        {
            delTodo dto;
            m = &dto;
            m->execution();
        }

        else if (options == 4)
        {
            readTodo rto;
            m = &rto;
            m->execution();
        }

        else if (options == 5)
        {
            system("CLS");
            cout<<"Thank you for using our services";
            break;
        }

        cout<<"Enter c to continue..... ";
        cin>>again;
        if(again != 'c')
        {
            while(again != 'c')
            {
                cout<<"Invalid input"<<endl;
                cout<<"Enter c to continue.....";
                cin>>again;
            }
        }
        system("CLS");
    }
    while(again == 'c');
    return 0;
}
