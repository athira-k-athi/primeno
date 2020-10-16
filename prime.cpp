//by using a boolean variable
#include<iostream>
using namespace std;
int main()
{
    int value;
    read:
    bool is_prime = true;
    cout<<"enter a number : ";
    cin>>value;
    if(value==1)
    {
        cout<<"1 is neither prime nor composite"<<'\n';
    }
    else if(value<0)
    {
        cout<<"entered a -ve number"<<'\n';
    }
    else
    {
        for(int trial = 2;(is_prime)&&(trial<value); trial++)
        {
            is_prime = (value%trial!=0);
        }
        if(is_prime==1)
                cout<<value<<" is a prime number"<<'\n';
        else
        cout<<value<<" is not a prime number"<<'\n';
    }
    goto read;

}

