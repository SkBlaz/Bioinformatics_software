#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <iterator>
#include <limits>
#include <algorithm>
#include <functional>

//Very primitive but fast Rzone finder.
using namespace std;


int funk1();
int funk2();
int funk3();
int funk4();
int funk5();
int funk6();
int funk7();
int funk8();
int funk9();
int funk10();
int funk11();
int funk12();
int funk13();
int funk14();
int funk15();
int funk16();
int funk17();
int funk18();
int funk19();
int funk20();
int funk21();
int funk22();
int funk23();
int funk24();
int countSubstring(const std::string& str, const std::string& sub);



class org{
    public:
    string enz;
    string cut;
    int esum=0;
};




int main(){

int mn,mx;

int ar[24] = { funk1(),
 funk2(),
 funk3(),
 funk4(),
 funk5(),
 funk6(),
 funk7(),
 funk8(),
 funk9(),
 funk10(),
 funk11(),
 funk12(),
 funk13(),
 funk14(),
 funk15(),
 funk16(),
 funk17(),
 funk18(),
 funk19(),
 funk20(),
 funk21(),
 funk22(),
 funk23(),
 funk24() };

int max = *std::max_element(ar, ar + 24);
cout<<"\n"<<"Maximum number of restriction sites:  "<<max;









}


int funk1()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e1;

    e1.enz= "EcorI";
    e1.cut="GAATTC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e1.cut);
            e1.esum += i;
        };
        cout<<e1.esum<<": "<<e1.enz<<"\n";
        return e1.esum;

}

int funk2()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e2;

    e2.enz= "EcorI.2";
    e2.cut="CCAGG";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e2.cut);
            e2.esum += i;
        };
        cout<<e2.esum<<": "<<e2.enz<<"\n";
        return e2.esum;



}
int funk3()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e3;

    e3.enz= "BamHI";
    e3.cut="GGATCC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e3.cut);
            e3.esum += i;
        };
        cout<<e3.esum<<": "<<e3.enz<<"\n";
        return e3.esum;



}
int funk4()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e4;

    e4.enz= "HindII";
    e4.cut="AAGCTT";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e4.cut);
            e4.esum += i;
        };
        cout<<e4.esum<<": "<<e4.enz<<"\n";
        return e4.esum;



}
int funk5()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e5;

    e5.enz= "TaqI";
    e5.cut="TCGA";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e5.cut);
            e5.esum += i;
        };
        cout<<e5.esum<<": "<<e5.enz<<"\n";
        return e5.esum;



}
int funk6()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e6;

    e6.enz= "NotI";
    e6.cut="GCGGCCGC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e6.cut);
            e6.esum += i;
        };
        cout<<e6.esum<<": "<<e6.enz<<"\n";
        return e6.esum;



}
int funk7()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e7;

    e7.enz= "HinFI";
    e7.cut="GANTC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e7.cut);
            e7.esum += i;
        };
        cout<<e7.esum<<": "<<e7.enz<<"\n";
        return e7.esum;



}
int funk8()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e8;

    e8.enz= "Sau3AI";
    e8.cut="GATC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e8.cut);
            e8.esum += i;
        };
        cout<<e8.esum<<": "<<e8.enz<<"\n";
        return e8.esum;



}
int funk9()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e9;

    e9.enz= "PvuII";
    e9.cut="CAGCTG";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e9.cut);
            e9.esum += i;
        };
        cout<<e9.esum<<": "<<e9.enz<<"\n";
        return e9.esum;



}
int funk10()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e10;

    e10.enz= "ScaI";
    e10.cut="AGTACT";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e10.cut);
            e10.esum += i;
        };
        cout<<e10.esum<<": "<<e10.enz<<"\n";
        return e10.esum;



}

int funk11()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e11;

    e11.enz= "Spel";
    e11.cut="ACTAGT";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e11.cut);
            e11.esum += i;
        };
        cout<<e11.esum<<": "<<e11.enz<<"\n";
        return e11.esum;



}

int funk12()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e12;

    e12.enz= "SphI";
    e12.cut="GCATGC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e12.cut);
            e12.esum += i;
        };
        cout<<e12.esum<<": "<<e12.enz<<"\n";
        return e12.esum;



}

int funk13()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e13;

    e13.enz= "Stul";
    e13.cut="AGGCCT";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e13.cut);
            e13.esum += i;
        };
        cout<<e13.esum<<": "<<e13.enz<<"\n";
        return e13.esum;



}
int funk14()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e14;

    e14.enz= "Xbal";
    e14.cut="TCTAGA";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e14.cut);
            e14.esum += i;
        };
        cout<<e14.esum<<": "<<e14.enz<<"\n";
        return e14.esum;



}

int funk15()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e15;

    e15.enz= "Smal";
    e15.cut="CCCGGG";


    while (getline(myfile, line))
        {


            i = countSubstring(line, e15.cut);
            e15.esum += i;
        };
        cout<<e15.esum<<": "<<e15.enz<<"\n";
        return e15.esum;



}

int funk16()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e16;

    e16.enz= "HaeIII";
    e16.cut="GGCC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e16.cut);
            e16.esum += i;
        };
        cout<<e16.esum<<": "<<e16.enz<<"\n";
        return e16.esum;



}

int funk17()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e17;

    e17.enz= "Hgal";
    e17.cut="GACGC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e17.cut);
            e17.esum += i;
        };
        cout<<e17.esum<<": "<<e17.enz<<"\n";
        return e17.esum;



}
int funk18()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e18;

    e18.enz= "AluI";
    e18.cut="AGCT";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e18.cut);
            e18.esum += i;
        };
        cout<<e18.esum<<": "<<e18.enz<<"\n";
        return e18.esum;



}
int funk19()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e19;

    e19.enz= "EcoRV";
    e19.cut="GATATC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e19.cut);
            e19.esum += i;
        };
        cout<<e19.esum<<": "<<e19.enz<<"\n";
        return e19.esum;



}
int funk20()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e20;

    e20.enz= "EcoP151";
    e20.cut="CAGCAG";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e20.cut);
            e20.esum += i;
        };
        cout<<e20.esum<<": "<<e20.enz<<"\n";
        return e20.esum;



}
int funk21()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e21;

    e21.enz= "KpnI";
    e21.cut="GGTACC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e21.cut);
            e21.esum += i;
        };
        cout<<e21.esum<<": "<<e21.enz<<"\n";
        return e21.esum;



}
int funk22()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e22;

    e22.enz= "PstI";
    e22.cut="CTGCAG";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e22.cut);
            e22.esum += i;
        };
        cout<<e22.esum<<": "<<e22.enz<<"\n";
        return e22.esum;



}
int funk23()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e23;

    e23.enz= "SacI";
    e23.cut="GAGCTC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e23.cut);
            e23.esum += i;
        };
        cout<<e23.esum<<": "<<e23.enz<<"\n";
        return e23.esum;



}
int funk24()
{
    ifstream myfile ("gen.fasta");
    string line;
    int i;

    org e24;

    e24.enz= "SaII";
    e24.cut="GTCGAC";


    while (getline(myfile, line))
        {

            i = countSubstring(line, e24.cut);
            e24.esum += i;
        };
        cout<<e24.esum<<": "<<e24.enz<<"\n";
        return e24.esum;



}
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