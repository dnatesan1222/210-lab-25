// COMSC-210 | Lab 25 | Diksha Tara Natesan
// IDE used: Vim/Terminal

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <list>
#include <set>
#include <chrono>
using namespace std;
using namespace std::chrono;

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
    list<string> lst;
    while(getline(fin1, line))
        lst.push_back(line);
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<milliseconds>(end1 - start1);
    cout << "Time taken: " << duration1.count() << " milliseconds\n";

    auto start2 = high_resolution_clock::now();
    ifstream fin2("codes.txt");
    set<string> st;
    while(getline(fin2, line))
        st.insert(line);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<milliseconds>(end2 - start2);
    cout << "Time taken: " << duration2.count() << " milliseconds\n";

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/
