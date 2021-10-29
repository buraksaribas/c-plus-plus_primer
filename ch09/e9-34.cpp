#include <vector>
#include <iterator>
using std::vector;

int main() {
    vector<int> v{1, 2, 3, 4, 5};

    auto iter = v.begin();
    while (iter != v.end()) {
        if(*iter % 2)
            iter = v.insert(iter, *iter);
        ++iter;
    }

    // If the container contains any odd values, the loop will continue
  // infinitely.

    return 0;
}