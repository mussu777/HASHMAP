#include <iostream>
#include<unordered_map>
#include<map>
using namespace std;


int main()
{
    // Creation 

    // unordered_map<string , int> m;
    map<string , int> m;

    // Insertion
    
    // step: 1
    pair<string , int> p = make_pair("Mussu" , 3);
    m.insert(p);

    // step: 2
    pair<string , int> pair2 ("love" , 2);
    m.insert(pair2);

    // step: 3
    m["mera"] = 2;

    // Search
    cout<<endl;

    cout << m["mera"] << endl;
    cout << m.at("Mussu") << endl;

    cout<< m["unknownkey"] << endl;
    cout<<m.at("unknownkey") << endl;

    // Size 
    cout<<m.size()<< endl;

    // To Check Presence
    cout<< m.count("Don") << endl;
    cout<< m.count("love") << endl;

    // Erase
    m.erase("love");
    cout<< m.size() << endl;

    // Iterator
    // unordered_map<string,int> :: iterator it = m.begin();

    // while (it != m.end())
    // {
    //     cout<< it -> first << " " << it -> second << endl;
    //     it++;
    // }

    map<string , int> :: iterator it = m.begin();

    while (it != m.end())
    {
        cout<< it -> first << " " << it -> second << endl;
        it++;
    }


    cout<< endl;
    return 0;
}