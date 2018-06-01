//by using a boolean variable
#include<iostream>
int main()
{
    int value;
    read:
    bool is_prime = true;
    std::cout<<"enter a number : ";
    std::cin>>value;
    if(value==1)
    {
        std::cout<<"1 is neither prime nor composite"<<'\n';
    }
    else if(value<0)
    {
        std::cout<<"entered a -ve number"<<'\n';
    }
    else
    {
        for(int trial = 2;(is_prime)&&(trial<value); trial++)
        {
            is_prime = (value%trial!=0);
        }
        if(is_prime==1)
                std::cout<<value<<" is a prime number"<<'\n';
        else
        std::cout<<value<<" is not a prime number"<<'\n';
    }
    goto read;

}

