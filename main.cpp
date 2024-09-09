#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{ srand(time(0));
int guess;
int target=rand()%100+1;
cout<<"enter any number between 0 and 100"<<endl;
    do
    { cin>>guess;
        if(guess>target)
    {
       cout<<"Too high try again"<<endl;
    }
        else if(guess<target)
    {
       cout<<"Too low try again"<<endl; }
       else
    {
       cout<<"Congratulatin You got it"<<endl;
    }
    }
     while(guess!=target);


    return 0;
}
