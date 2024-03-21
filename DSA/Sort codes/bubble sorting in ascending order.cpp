#include<iostream>
using namespace std;

void display(int arr[], int arrSize)
{
    cout<<"bubble sort:";
    for(int j=0; j<arrSize; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {5,2,4,3,1},temp = 0,arrsize;
    cout<<"Unsorted array values are\n{5,2,4,3,1}"<<endl;
    cout<<endl;
    arrsize = sizeof(arr)/sizeof(arr[0]);
    for(int j=0; j<arrsize; j++)
    {
        for(int k=0; k<arrsize-1; k++)
        {
            if(arr[k] > arr[k+1])
            {
                temp = arr[k+1];
                arr[k+1] = arr[k];
                arr[k] = temp;
                display(arr,arrsize);
            }
        }
    }
    cout<<"\nSorted array in ascending order"<<endl;
    display(arr,arrsize);
    return 0;
}
