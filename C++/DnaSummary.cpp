// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

//Simple program for DNA summary, runs FAST.
using namespace std;

int main () {
  string s;
  int a,b,c,d;
  double gc;

  ifstream myfile ("genom.txt");
  if (myfile.is_open())
      {
        while ( getline (myfile,s) )
        {
          cout <<"The sequence"<< s << '\n';
          a=count(s.begin(), s.end(), 'A');
          b=count(s.begin(), s.end(), 'T');
          c=count(s.begin(), s.end(), 'G');
          d=count(s.begin(), s.end(), 'C');

          cout<<"Occurences of A: "<<a<<"\n";
          cout<<"Occurences of T: "<<b<<"\n";
          cout<<"Occurences of G: "<<c<<"\n";
          cout<<"Occurences of C: "<<d<<"\n";

          gc = (c+d)/a+b+c+d;


          cout<<"\n"<<"The GC content is: "<<gc<<"%"<<"\n";


          if (a*3>b+c+d)
          {
            cout<<"A is the most common!";
          }
          else if (b*3>a+c+d)
          {
            cout<<"T is the most common!";
          }
          else if (c*3>b+a+d)
          {
            cout<<"G is the most common!";
          }
          else cout<< "C is the most common!";
        }
      }
      else cout<<"this doesn't work!";


      return 0;
}