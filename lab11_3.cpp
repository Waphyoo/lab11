//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>

using namespace std;

int main (){
string n;
double count=0;
double N=0,N2=0;
ifstream source("score.txt");
while(getline(source,n)){
    N+=atof(n.c_str());
    count++;
    N2+=pow(atof(n.c_str()),2);
}

cout << "Number of data = "<<count<<"\n"; 
cout << setprecision(3);
cout << "Mean = "<<N/count<<"\n";
cout << "Standard deviation = "<<pow((N2/count)-pow(N/count,2),0.5);

}
