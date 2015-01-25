#include <fstream>
#include <iostream>
using namespace std;

int main ()
{

   char data[100];
   ofstream outfile;
   outfile.open("abc.txt");
   cout << "Writing to the file" << endl;
   cout << "EnterThe Text: ";
 cin>>data;
   outfile << data << endl;
   outfile << data << endl;
   outfile.close();
   ifstream infile;
   infile.open("abc.txt");

   cout << "Reading from the file" << endl;
   infile >> data;
   cout << data << endl;
   infile.close();
   return 0;
}
