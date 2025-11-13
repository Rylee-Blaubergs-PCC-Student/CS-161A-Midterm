// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: Midterm
// Date ✅: 
// Citations: zyBooks, examples


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: none for midterm
// Participation ✅:
// Challenge ✅: 
// Labs ✅: 


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 0
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅: 
// C. CALCULATIONS ✅: 
// D. LOGIC and ALGORITHMS ✅:



// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <string>
#include <limits> // NOT <climits> for cin.ignore(numeric_limits<streamsize>::max(), '\n');
#include <iomanip>


using namespace std;

int main() {
  const int NUM_PLAYERS = 3;
  
  string p1_name = "";
  string p2_name = "";
  string p3_name = "";

  int p1_count = 0;
  int p2_count = 0;
  int p3_count = 0;
  

  cout << "Welcome to the Rock Collector Championships!" << endl;
  
  cout << "Enter player 1 name: ";
  getline(cin, p1_name);
  cout << "How many rocks did " << p1_name << " collect? ";
  cin >> p1_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter player 2 name: ";
  getline(cin, p2_name);
  cout << "How many rocks did " << p2_name << " collect? ";
  cin >> p2_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  cout << "Enter player 3 name: ";
  getline(cin, p3_name);
  cout << "How many rocks did " << p3_name << " collect? ";
  cin >> p3_count;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  //Calculations

  float average = (p1_count + p2_count + p3_count) / NUM_PLAYERS;

  cout << fixed << setprecision(2);

  int a = p1_count;
  int b = p2_count;
  int c = p3_count;

  string first_name = "";
  string second_name = "";
  string third_name = "";
  
  
  
  

  // Determine places
  cout << "Congratulations Rock Collectors!" << endl;

  return 0;
}



// ------------- DESIGN -------------
/* 
Program Name: The Rock Collecting Championships

Program Description: 

Design:
A. INPUT


B. OUTPUT


C. CALCULATIONS


D. LOGIC and ALGORITHMS


SAMPLE RUNS:

Welcome to the Rock Collector Championships!

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.

Enter player 2 name: Link
How many rocks did Link collect? 45

Enter player 3 name: D. Va
How many rocks did D. Va collect? 45

Link and D. Va are tied for first place.
Gordan Freeman is in second place!

The average number of rocks collected by the top three players is 30.00 rocks!

Congratulations Rock Collectors!


-------------------------------------------------------------------------------------


Welcome to the Rock Collector Championships!

Enter player 1 name: Mario
How many rocks did Mario collect? 56

Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56

Enter player 3 name: Sonic
How many rocks did Sonic collect? 56

It is a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congratulations Rock Collectors!


-------------------------------------------------------------------------------------


Welcome to the Rock Collector Championships!

Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57
Enter player 2 name: Samus
How many rocks did Samus collect? 102

Enter player 3 name: Kirby
How many rocks did Kirby collect? 62

Samus is in first place!
Kirby is in second place.
King Dedede is in third place.

The average number of rocks collected by the top three players is 73.67 rocks!

Congratulations Rock Collectors!


*/
