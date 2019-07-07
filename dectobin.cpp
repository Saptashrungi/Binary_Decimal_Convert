#include <iostream>
using namespace std;
int main()
//dec to binary
{
int num;
cin>>num;
do
{
    cout<<num%2<<endl;
    num=num/2;
}while(num!=0);


}
