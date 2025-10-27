// COMSC-210 | Lab 25 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <chrono>
using namespace std;

int main() {
    auto start = high_resolution_clock::now();
    ifstream fin("codes.txt");
    string line;
    vector<string> vect;
    while(getline(fin, line))
	vect.push_back(line);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";

    auto start1 = high_resolution_clock::now();
    ifstream fin1("codes.txt");
    list<string> list;
    while(getline(fin1, line))
        list.push_back(line);
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration1.count() << " milliseconds\n";


    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/
