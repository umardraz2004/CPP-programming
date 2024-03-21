#include<iostream>
using namespace std;

struct student
{
    string Name, Branch;
    int Reg;
    float CGPA;
};

student s[50];

void insertData(string name, int reg, string branch, float cgpa, int index)
{
    s[index].Name = name;
    s[index].Reg = reg;
    s[index].Branch = branch;
    s[index].CGPA = cgpa;
}

void linearSearch()
{
    int reg;
    cout<<"Enter student reg you want to search:";
    cin>>reg;
    for(int i=0; i<50; i++)
    {
        if(s[i].Reg == reg)
        {
            cout<<"Student name:"<<s[i].Name<<endl;
            cout<<"Student Reg:"<<s[i].Reg<<endl;
            cout<<"Student branch:"<<s[i].Branch<<endl;
            cout<<"Student CGPA:"<<s[i].CGPA<<endl;
        }
    }
}

void bubbleSort()
{
    int tempReg;
    string tempName, tempBranch;
    float tempCGPA;
    for(int i=0; i<50; i++)
    {
        for(int j=0; j<50-1; j++)
        {
            if(s[j].Reg > s[j+1].Reg)
            {
                tempReg = s[j+1].Reg;
                s[j+1].Reg = s[j].Reg;
                s[j].Reg = tempReg;

                tempName = s[j+1].Name;
                s[j+1].Name = s[j].Name;
                s[j].Name = tempName;

                tempBranch = s[j+1].Branch;
                s[j+1].Branch = s[j].Branch;
                s[j].Branch = tempBranch;

                tempCGPA = s[j+1].CGPA;
                s[j+1].CGPA = s[j].CGPA;
                s[j].CGPA = tempCGPA;
            }
        }
    }
}


void binarySearch()
{
    int sear_val, start = 0, last = 50-1, mid;
    cout<<"Enter registartion to be searched:";
    cin>>sear_val;
    while(start <= last)
    {
        mid = (start + last) / 2;
        if(sear_val == s[mid].Reg)
        {
            cout<<"Student name:"<<s[mid].Name<<endl;
            cout<<"Student Reg:"<<s[mid].Reg<<endl;
            cout<<"Student branch:"<<s[mid].Branch<<endl;
            cout<<"Student CGPA:"<<s[mid].CGPA<<endl;
            break;
        }
        else if(s[mid].Reg < sear_val)
        {
            start = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
}

void insertionSort()
{
    for(int i=1; i<50; i++)
    {
        float cgpa = s[i].CGPA;
        string name = s[i].Name;
        string branch = s[i].Branch;
        int regNo = s[i].Reg;
        int j = i-1;
        while(j>=0 && cgpa > s[j].CGPA)
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1].CGPA = cgpa;
        s[j+1].Name = name;
        s[j+1].Branch = branch;
        s[j+1].Reg = regNo;
    }
}


void display()
{
    for(int i=0; i<50; i++)
    {

        cout<<"Student name:"<<s[i].Name<<endl;
        cout<<"Student Reg:"<<s[i].Reg<<endl;
        cout<<"Student branch:"<<s[i].Branch<<endl;
        cout<<"Student CGPA:"<<s[i].CGPA<<endl;
    }
}

int main()
{
    cout<<"Insert data:"<<endl;
    insertData("Umar",1,"bscs",4,0);
    insertData("kamran",10,"bscs",3.9,1);
    insertData("Ali",20,"bscs",3.8,2);
    insertData("Ahmad",30,"bscs",3.7,3);
    insertData("Abrahim",40,"bscs",3.6,4);
    insertData("Hassan",50,"bscs",3.5,5);
    insertData("Muhannad",11,"bscs",3.4,6);
    insertData("Bilal",12,"bscs",3.3,7);
    insertData("Hussain",13,"bscs",3.2,8);
    insertData("Afzal",14,"bscs",3.1,9);
    insertData("Faisal",16,"bscs",2,10);
    insertData("Fakhir",22,"bscs",2.9,11);
    insertData("Mubashar",72,"bscs",2.8,12);
    insertData("Sohaib",63,"bscs",2.7,13);
    insertData("Shahzaz",64,"bscs",2.6,14);
    insertData("farooq",7,"bscs",2.5,15);
    insertData("Abdullah",8,"bscs",2.4,16);
    insertData("Asim",37,"bscs",2.3,17);
    insertData("Bashir",33,"bscs",2.2,18);
    insertData("Luqman",35,"bscs",2.1,19);
    insertData("Humair",18,"bscs",1,20);
    insertData("Umair",97,"bscs",3.2,21);
    insertData("Hassam",66,"bscs",3.3,22);
    insertData("Zain",9,"bscs",3.5,23);
    insertData("Tabish",190,"bscs",3.6,24);
    insertData("Iqbal",167,"bscs",3.7,25);
    insertData("Saad",108,"bscs",3.8,26);
    insertData("Ateeb",109,"bscs",3.9,27);
    insertData("Adeel",99,"bscs",4,28);
    insertData("Waseem",89,"bscs",4,29);
    insertData("Subhan",56,"bscs",4,30);
    insertData("Ayan",31,"bscs",4,31);
    insertData("Abdul rehman",41,"bscs",4,32);
    insertData("Ramish",49,"bscs",4,33);
    insertData("Najam",48,"bscs",3.2,34);
    insertData("Faizan",47,"bscs",3.1,35);
    insertData("Shakeel",46,"bscs",3.1,36);
    insertData("Asad",67,"bscs",3.1,37);
    insertData("Zaid",78,"bscs",3.4,38);
    insertData("Nabeel",91,"bscs",3.7,39);
    insertData("Shahzaib",138,"bscs",3.8,40);
    insertData("Nawaz",167,"bscs",3.9,41);
    insertData("Muhammad",154,"bscs",3.1,42);
    insertData("Zaryab",45,"bscs",4,43);
    insertData("Asif",143,"bscs",2,44);
    insertData("Atif",132,"bscs",2.5,45);
    insertData("Ahtesham",100,"bscs",2.6,46);
    insertData("Masood",44,"bscs",2.7,47);
    insertData("Imran",43,"bscs",2.8,48);
    insertData("Rashid",42,"bscs",4,49);
    cout<<"\nlinear search:"<<endl;
    linearSearch();
    cout<<"\nBubble sort:"<<endl;
    bubbleSort();
    cout<<"\nBinary Search:"<<endl;
    binarySearch();
    cout<<"\nInsertion sort:"<<endl;
    insertionSort();
    cout<<"\nDisplay:"<<endl;
    display();
    return 0;
}
