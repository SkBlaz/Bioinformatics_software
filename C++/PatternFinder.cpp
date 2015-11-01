#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Lightweight patternfider, faster than Perl!

// returns count of non-overlapping occurrences of 'sub' in 'str'
int countSubstring(const std::string& str, const std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}

int main () {
  string line;
  string inpt;
  int sum=0;
  int i;
  ifstream myfile ("gen.fasta");
  cout<<"enter desired part of sequence:  ";
  cin>>inpt;
  if (myfile.is_open())
  {
    while (getline(myfile, line))
    {
        cout<<line<<"\n";
        cout<<countSubstring(line, inpt)<<"\n";
        i = countSubstring(line, inpt);
        sum += i;
    }
    cout<<"\n"<<"The number of occurrences in the sequence are:   "<<"\n";
    cout<<sum<<inpt<<"\n";
    myfile.close();
  }

  else cout << "Unable to open file";

  return 0;
}