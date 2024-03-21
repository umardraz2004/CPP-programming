#include<iostream>
using namespace std;

void display(int arry[])
{
    for(int i=0; i<5; i++)
    {
        cout<<arry[i]<<" ";
    }
    cout<<endl;
}

void Sort(int arr[], int arrsize)
{
    int min_ind, temp = 0;
    for(int i=0; i<arrsize-1; i++)
    {
        min_ind = i;
        for(int j=i+1; j<arrsize; j++)
        {
            if(arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_ind];
        arr[min_ind] = temp;

        display(arr);
    }
    cout<<"Sorted array: ";
    display(arr);
}

int main()
{
    int arr[] = {5,1,4,3,2};
    cout<<"Unsorted array: ";
    display(arr);
    Sort(arr,5);
    return 0;
}
