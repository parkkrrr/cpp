#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q, type, y;
    string x;
    cin >> q;
    map<string, int> m;
    for (int i = 1;i <= q;++i) {
        cin >> type >> x;

        if (type == 1) {
            // cin>>x>>y;
            cin >> y;
            auto itr = m.find(x);
            if (itr != m.end())
                itr->second += y;
            else
                m.insert(make_pair(x, y));

        }
        else if (type == 2) {
            // cin>>x;
            m.erase(x);
        }
        else {
            // cin>>x;
            cout << m[x] << endl;
        }


    }

    return 0;
}



/**
 * Map Template:
 * 
 * std::map <key_type, data_type>
 * Declaration:
 * 
 * map<string,int>m; //Creates a map m where key_type is of type string and data_type is of type int.
 * 
 * Size:
 * int length=m.size(); //Gives the size of the map.
 * 
 * Insert:
 * m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.
 * 
 * Erasing an element:
 * m.erase(val); //Erases the pair from the map where the key_type is val.
 * 
 * Finding an element:
 * map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
 * Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().
 * 
 * Accessing the value stored in the key:
 * To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.
 * To know more about maps https://cplusplus.com/reference/map/map/

You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has  queries:

 1 X Y : Add the marks  to the student whose name is .

 2 X   : Erase the marks of the students whose name is .

 3 X   : Print the marks of the students whose name is . (If  didn't get any marks print .)

Input Format

The first line of the input contains  where  is the number of queries. The next  lines contain  query each.The first integer,  of each query is the type of the query.If query is of type , it consists of one string and an integer  and  where  is the name of the student and  is the marks of the student.If query is of type  or ,it consists of a single string  where  is the name of the student.
*/