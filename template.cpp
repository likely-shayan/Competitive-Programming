#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <array>
#include <map>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;
using ll = long long;
using ld = long double;

namespace Debugging {
    // std::vector
    template <typename Type>
    std::ostream& operator<<(ostream& out, const std::vector<Type>& Object);
    // std::set
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::set<Type>& Object);
    // std::unordered_set
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::unordered_set<Type>& Object);
    // std::multiset
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::multiset<Type>& Object);
    // std::unordered_multiset
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::unordered_multiset<Type>& Object);
    // std::stack
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, std::stack<Type> Object);
    // std::queue
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, std::queue<Type> Object);
    // std::deque
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, std::deque<Type> Object);
    // std::priority_queue
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, std::priority_queue<Type> Object);
    // std::array
    template <typename Type, std::size_t size>
    std::ostream& operator<<(std::ostream& out, const std::array<Type, size>& Object);
    // std::pair
    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::pair<Type1, Type2>& Object);
    // std::map
    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::map<Type1, Type2>& Object);
    // std::unordered_map
    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::unordered_map<Type1, Type2>& Object);
    // std::multimap
    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::multimap<Type1, Type2>& Object);
    // std::unordered_multimap
    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::unordered_multimap<Type1, Type2>& Object);

    template <typename Type>
    void debug(const string& name, const Type& Object);
};

#ifdef LOCAL_JUDGE
#define DEBUG(Object) {Debugging::debug(#Object, Object);}
#else
#define DEBUG(Object) {}
#endif

void solve() {}

void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void SetIO(const string& input, const string& output) {
    freopen(input.c_str(), "r", stdin);
    freopen(output.c_str(), "w", stdout);
}

int main() {

    FastIO();

    #ifdef LOCAL_JUDGE
    clock_t start = clock();
    SetIO("input.txt", "output.txt");
    #endif

    int t;
    cin >> t;
    while (t--)
        solve();    

    #ifdef LOCAL_JUDGE
    fprintf(stderr, "Runtime: %.10fs\n", (double) (clock() - start) / CLOCKS_PER_SEC);
    #endif

    return 0;
}

namespace Debugging {
    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::vector<Type>& Object) {
        int elements = Object.size() - 1;
        out << "[";
        for (const Type& element : Object) {
            out << element;
            if (elements >= 1) {
                out << ",";
                --elements;
            }
        }
        out << "]";
        return out;
    }

    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::set<Type>& Object) {
        int elements = Object.size() - 1;
        out << "{";
        for (const Type& element : Object) {
            out<< element;
            if (elements >= 1) {
                out << ",";
                --elements;
            }
        }
        out << "}";
        return out;
    }

    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::unordered_set<Type>& Object) {
        int elements = Object.size() - 1;
        out << "{";
        for (const Type& element : Object) {
            out<< element;
            if (elements >= 1) {
                out << ",";
                --elements;
            }
        }
        out << "}";
        return out;
    }

    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::multiset<Type>& Object) {
        int elements = Object.size() - 1;
        out << "{";
        for (const Type& element : Object) {
            out<< element;
            if (elements >= 1) {
                out << ",";
                --elements;
            }
        }
        out << "}";
        return out;
    }

    template <typename Type>
    std::ostream& operator<<(std::ostream& out, const std::unordered_multiset<Type>& Object) {
        int elements = Object.size() - 1;
        out << "{";
        for (const Type& element : Object) {
            out<< element;
            if (elements >= 1) {
                out << ",";
                --elements;
            }
        }
        out << "}";
        return out;
    }

    template <typename Type>
    std::ostream& operator<<(std::ostream& out, std::stack<Type> Object) {
        int elements = Object.size() - 1;
        out << "[";
        while (!Object.empty()) {
            out << Object.top();
            if (elements >= 1) {
                out << ",";
                --elements;
            }
            Object.pop();
        }
        out << "]";
        return out;
    }

    template <typename Type>
    std::ostream& operator<<(std::ostream& out, std::queue<Type> Object) {
        int elements = Object.size() - 1;
        out << "[";
        while (!Object.empty()) {
            out << Object.front();
            if (elements >= 1) {
                out << ",";
                --elements;
            }
            Object.pop();
        }
        out << "]";
        return out;
    }

    template <typename Type>
    std::ostream& operator<<(std::ostream& out, std::deque<Type> Object) {
        int elements = Object.size() - 1;
        out << "[";
        while (!Object.empty()) {
            out << Object.front();
            if (elements >= 1) {
                out << ",";
                --elements;
            }
            Object.pop_front();
        }
        out << "]";
        return out;
    }

    template <typename Type>
    std::ostream& operator<<(std::ostream& out, std::priority_queue<Type> Object) {
        int elements = Object.size() - 1;
        out << "[";
        while (!Object.empty()) {
            out << Object.top();
            if (elements >= 1) {
                out << ",";
                --elements;
            }
            Object.pop();
        }
        out << "]";
        return out;
    }

    template <typename Type, std::size_t size>
    std::ostream& operator<<(std::ostream& out, const std::array<Type, size>& Object) {
        int elements = Object.size() - 1;
        out << "[";
        for (const Type& element : Object) {
            out << element;
            if (elements >= 1) {
                out << ",";
                --elements;
            }
        }
        out << "]";
        return out;
    }

    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::pair<Type1, Type2>& Object) {
        out << "(" << Object.first << "," << Object.second << ")";
        return out;
    }

    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::map<Type1, Type2>& Object) {
        int elements = Object.size();
        out << "{";
        for (const std::pair<Type1, Type2>& element : Object) {
            out << "[" << element.first << "->" << element.second << "]";
            if (elements >= 2) {
                out << "\n";
                --elements;
            }
        }
        out << "}";
        return out;
    }

    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::unordered_map<Type1, Type2>& Object) {
        int elements = Object.size();
        out << "{";
        for (const std::pair<Type1, Type2>& element : Object) {
            out << "[" << element.first << "->" << element.second << "]";
            if (elements >= 2) {
                out << "\n";
                --elements;
            }
        }
        out << "}";
        return out;
    }

    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::multimap<Type1, Type2>& Object) {
        int elements = Object.size();
        out << "{";
        for (const std::pair<Type1, Type2>& element : Object) {
            out << "[" << element.first << "->" << element.second << "]";
            if (elements >= 2) {
                out << "\n";
                --elements;
            }
        }
        out << "}";
        return out;
    }

    template <typename Type1, typename Type2>
    std::ostream& operator<<(std::ostream& out, const std::unordered_multimap<Type1, Type2>& Object) {
        int elements = Object.size();
        out << "{";
        for (const std::pair<Type1, Type2>& element : Object) {
            out << "[" << element.first << "->" << element.second << "]";
            if (elements >= 2) {
                out << "\n";
                --elements;
            }
        }
        out << "}";
        return out;
    }

    template <typename Type>
    void debug(const std::string& Objectname, const Type& Object) {
        std::cerr << Objectname << "=" << Object << endl;
    }
};