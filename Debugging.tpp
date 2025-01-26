#include "Debugging.h"

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