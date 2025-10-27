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
    int reading[3];
    auto start = high_resolution_clock::now();
    ifstream fin("codes.txt");
    string line;
    vector<string> vect;
    while(getline(fin, line))
	vect.push_back(line);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";
    reading[0] = duration.count();

    start = high_resolution_clock::now();
    ifstream fin1("codes.txt");
    list<string> lst;
    while(getline(fin1, line))
        lst.push_back(line);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";
    reading[1] = duration.count();

    start = high_resolution_clock::now();
    ifstream fin2("codes.txt");
    set<string> st;
    while(getline(fin2, line))
        st.insert(line);
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";
    reading[2] = duration.count();

    int sorting[3];

    start = high_resolution_clock::now();
    sort(vect.begin(), vect.end());
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";
    sorting[0] = duration.count();
    
    start = high_resolution_clock::now();
    lst.sort();
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";
    sorting[1] = duration.count();
    
    sorting[2] = -1;

    int insert[3];
   
    start = high_resolution_clock::now();
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";
    insert[0] = duration.count();

    start = high_resolution_clock::now();
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";
    insert[1] = duration.count();

    start = high_resolution_clock::now();
    st.insert("TESTCODE");
    end = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " milliseconds\n";
    insert[2] = duration.count();

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/
