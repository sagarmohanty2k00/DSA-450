#include <bits/stdc++.h>
using namespace std;


int main(){
    // push_back
    // push_front
    // pop_back
    // pop_front
    // insert
    // erase(idx)
    // remove(element)


    list<int> l;


    // Init
    list<int> l1{1, 2,3 , 4, 5};
    // Diff daatypes
    list<string> l2{"apple", "guava", "mango"};
    l2.push_back("pineapple");


    // Iteration
    for(auto s:l2){
        cout << s << "----->";
    }

    // sort
    l2.sort();
    l2.reverse();


    // remove
    l2.pop_front();

    cout << l2.front() << endl;

}