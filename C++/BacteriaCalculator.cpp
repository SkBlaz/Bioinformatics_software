#include <iostream>
#include <math.h>
//simple bactCalc, used for labwork
using namespace std;

int surf (int a);

class bacteria
{
    public:
        int col;
        int dil;
};

int main()
{
    bacteria bact1;
    double totAmnt;
    int a,b,c;
    double fak;


    cout<<"enter amount of colonies:  ";
    cin>>a;
    bact1.col =  a;
    cout<<"enter the dillution factor:  ";
    cin>>b;
    bact1.dil = b;

    cout<<"enter the environment factor:  ";
    cin>>fak;

    totAmnt = bact1.col * pow(10, bact1.dil)*fak;
    cout<<"There are total of: "<<totAmnt<<" Bacteria present.";

    c = surf(totAmnt);


}

int surf(int a)
{
    int reslt;
    int b;
    cout<<"\n"<<"enter the desired volume(mL): ";
    cin>>b;

    if (b < 1000)
        {
        reslt = a*b;
        cout<<reslt<<" are there bacteria in: "<<b<<"mL";
        }
    else cout<<"input is too big.";

    return 0;

}