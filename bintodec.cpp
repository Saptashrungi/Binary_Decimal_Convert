#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int decnum;
    cin>>decnum;
    int power=0,sum=0;
    while(decnum)
    {
      sum+=(decnum%10)*pow(2,power);
      decnum=decnum/10;
      ++power;
    };
    cout<<sum;
    return 0;
}
