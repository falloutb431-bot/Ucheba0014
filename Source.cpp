#include <iostream>
#include <vector>
#include <string>

template <typename T>
void move_vectors(std::vector<T>& from, std::vector<T>& to) {
    to = std::move(from);

}

int main() {
    std::vector<std::string> one = { "test_string1", "test_string2" };
    std::vector<std::string> two;

    move_vectors(one, two);

    std::cout << "two contains:\n";
    for (const auto& s : two) {
        std::cout << s << "\n";
    }

    std::cout << "one size after move: " << one.size() << "\n";

    return 0;
}