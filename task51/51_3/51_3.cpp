#include <iostream>
#include <unordered_set>

int findLongestSubstringLength(const std::string& str) {
    int maxLength = 0;
    int start = 0;
    int end = 0;
    int n = str.length();
    std::unordered_set<char> uniqueChars;

    while (end < n) {
        if (uniqueChars.find(str[end]) == uniqueChars.end()) {
            // Если символ не повторяется, добавляем его в множество уникальных символов
            uniqueChars.insert(str[end]);
            maxLength = std::max(maxLength, end - start + 1);
            end++;
        }
        else {
            // Если символ повторяется, сдвигаем начало подстроки вперед
            uniqueChars.erase(str[start]);
            start++;
        }
    }

    return maxLength;
}

int main() {
    std::string str = "abcabcbb";
    int longestLength = findLongestSubstringLength(str);
    std::cout << "Длина самой длинной подстроки без повторяющихся символов: " << longestLength << std::endl;

    return 0;
}