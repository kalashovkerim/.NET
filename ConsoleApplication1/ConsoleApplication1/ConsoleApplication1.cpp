#include <string>
#include <vector>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <ctype.h>
#include <functional>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);



/*
 * Complete the 'findCompletePrefixes' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY names
 *  2. STRING_ARRAY query
 */

vector<int> findCompletePrefixes(vector<string> names, vector<string> query) {
    vector<int> vec1 = { 1,2,3,4,5 };
    return vec1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string names_count_temp;
    getline(cin, names_count_temp);

    int names_count = stoi(ltrim(rtrim(names_count_temp)));

    vector<string> names(names_count);

    for (int i = 0; i < names_count; i++) {
        string names_item;
        getline(cin, names_item);

        names[i] = names_item;
    }

    string query_count_temp;
    getline(cin, query_count_temp);

    int query_count = stoi(ltrim(rtrim(query_count_temp)));

    vector<string> query(query_count);

    for (int i = 0; i < query_count; i++) {
        string query_item;
        getline(cin, query_item);

        query[i] = query_item;
    }

    vector<int> result = findCompletePrefixes(names, query);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
