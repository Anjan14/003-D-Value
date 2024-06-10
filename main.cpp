#include <iostream>
#include <unordered_map>

int main() {
    // Map to store d_spacing values and their corresponding outputs
    std::unordered_map<double, std::string> d_spacing_map = {
        {4.68200, "Li: 1, Co: 0.91, O: 1.84"},
        {4.81233, "Li: 0.37, Co: 1, O: 2"},
        {4.74917, "Li: 0.58, Co: 1, O: 2"},
        {4.69767, "Li: 0.79, Co: 1, O: 2"},
        {4.68660, "Li: 0.89, Co: 1, O: 2"},
        {4.79633, "Li: 1.48, Co: 1, O: 2"},
        {4.68453, "Li: 1, Co: 1, O: 2"}
    };

    double d_spacing;
    std::cout << "Value of D-Spacing: ";
    std::cin >> d_spacing;

    // Find the corresponding output in the map
    auto it = d_spacing_map.find(d_spacing);
    if (it != d_spacing_map.end()) {
        std::cout << it->second << std::endl;
    } else {
        std::cout << "Wrong D-Spacing input value for (l, m, n)=(0, 0, 3)" << std::endl;
    }

    return 0;
}
