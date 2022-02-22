#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
  
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  
 cout << setw(5);
 cout << "No";
  cout << setw(15);
 cout << "Name";
  cout << setw(10);
 cout << "Marks";
 cout << endl;
  
 for (int r = 0; r < 5; r++) {
     cout << setw(5);
     cout <<r+1;
     cout << setw(15);
     cout << names[r];
     cout << setw(10);
     cout << setprecision(2);
     cout << setiosflags(ios::fixed);
     cout << marks[r];
     cout << endl;
 }
}