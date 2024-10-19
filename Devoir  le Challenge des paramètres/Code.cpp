#include <iostream>
#include <vector>
using namespace std;

void ajoutParameters(const vector<int>& params) {
    cout << "Enter a parameter (enter -1 to stop): "
         << params.size() << " parameters" << endl;
}

int main() {
    try {
        for (size_t i = 1; ; i *= 8) {
            vector<int> params(i, 1);
            ajoutParameters(params);
        }
    } catch (const bad_alloc& e) {
        std::cerr << e.what() << std::endl;

    return 0;
}
}
