#include<iostream>
using namespace std;
int main()
{
    int arrsize, arr[] = {1,2,3,4,5,6,7,8,9,10};
    arrsize = sizeof(arr[])/sizeof(arr[0]);
    int sear_val, mid = 0 , start = arr[0], last = arr[arrsize];
    cout<<"Enter value  to be searched {1,2,3,4,5,6,7,8,9,10}: ";
    cin>>sear_val;
    while(start <= last)
    {
        mid = (start + last) / 2;
        if(sear_val == arr[mid])
        {
            cout<<"Value found on index "<<mid<<" , and the value is "<<arr[mid];
            break;
        }
        else if(arr[mid] < sear_val)
        {
            start = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return 0;
}
