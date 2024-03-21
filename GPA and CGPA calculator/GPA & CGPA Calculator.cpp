#include<iostream>
using namespace std;

void GPA_Calculator()
{
    //numSub is a abbreviation of number of subjects
    int numSub;
    cout<<"Enter number of subjects:";
    cin>>numSub;
    float credit[numSub], point[numSub], total, sum = 0, totCr = 0;
    for(int i=0; i<numSub; i++)
    {
        cout<<"Enter credit of subject "<<i+1<<":";
        cin>>credit[i];
        cout<<"Enter point of subject "<<i+1<<":";
        cin>>point[i];
    }
    for(int j=0; j<numSub; j++)
    {
        total = credit[j]*point[j];
        sum += total;
        totCr += credit[j];
    }

    cout<<"Your GPA is:"<<sum/totCr<<endl;
}

void CGPA_Calculator()
{
    int numSemes;
    cout<<"Enter how many semester CGPA you want to calculate:";
    cin>>numSemes;
    float semes[numSemes], semTot = 0;//semTot is a abbreviation  of semester Total
    for(int i=0; i<numSemes; i++)
    {
        cout<<"Enter semester"<<i+1<<"result:";
        cin>>semes[i];
        semTot += semes[i];
    }
    cout<<"Your CGPA is:"<<semTot/numSemes<<endl;
}

int main()
{
    int choice;
    cout<<"`,`,`,`,`,|Welcome to GPA & CGPA Calculator|,`,`,`,`,`"<<endl;
    cout<<"[1] GPA\n[2] CGPA\n[3] Methods of calculation\n[0] Exit"<<endl;
    do
    {
        cout<<"Enter your choice:";
        cin>>choice;
        if(choice == 1)
        {
            GPA_Calculator();
        }
        else if(choice == 2)
        {
            CGPA_Calculator();
        }
        else if(choice == 0)
        {
            system("CLS");
            break;
        }
        else if(choice == 3)
        {
        cout<<"---------------| Method of Calculating GPA & CGPA |---------------"<<endl;
        cout<<"-> GPA= Sum of (Credit*Point) / total of credits"<<endl;
        cout<<"-> CGPA=  Sum of GPA / number of semesters"<<endl;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }
    while(true);
    cout<<"Thanks for using our service";
    return 0;
}
