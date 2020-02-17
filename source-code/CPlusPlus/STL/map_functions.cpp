#include <iostream>
#include <map>
#include <list>
#include <unordered_map>

using Map = std::map<std::string, int>;
using Unordered_map = std::unordered_map<std::string, int>;
using List = std::list<std::string>;

template <typename Map_type>
void fill_map(Map_type& map, const List& list);

template <typename Map_type>
void print_map(const Map_type& map, const std::string& label);

int main() {
    List keys = {"a", "b", "c"};
    Map si_map;
    Unordered_map usi_map;
    fill_map(si_map, keys);
    fill_map(usi_map, keys);
    print_map(si_map, "map");
    print_map(usi_map, "unordered_map");
    return 0;
}

template <typename Map_type>
void fill_map(Map_type& map, const List& list) {
    int i = 0;
    for (auto iter = list.cbegin(); iter != list.cend(); iter++)
        map[*iter] = ++i;
}

template <typename Map_type>
void print_map(const Map_type& map, const std::string& label) {
    std::cout << label << ":" << std::endl;
    for (auto iter = map.begin(); iter != map.end(); iter++)
        std::cout << iter->first << " -> " << iter->second
            << std::endl;
}
