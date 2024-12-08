#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "adjacencyList.cpp"

int main() {
    int n;
    cin >> n;

    int p;
    cin >> p;

    AdjacencyList list;
    list.powerIterations = p;

    for (int i = 0; i < n + 1; i++) {
        string line;
        getline(cin, line);
        istringstream in(line);

        string from;
        in >> from;

        string to;
        in >> to;

        if (i == 0) continue;

        list.addEdge(from, to);
    }

    list.calculateRanks();
    list.printRanks();

    return 0;
}
