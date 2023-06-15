#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> strVec = { "apple", "banana", "orange", "peach" };
    std::string strToFind = "banana";

    if (std::find(strVec.begin(), strVec.end(), strToFind) != strVec.end()) {
        std::cout << "The vector array contains the string " << strToFind << std::endl;
    }
    else {
        std::cout << "The vector array does not contain the string " << strToFind << std::endl;
    }

    return 0;
}