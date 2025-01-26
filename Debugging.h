#ifndef DEBUGGING_H
#define DEBUGGING_H

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

#include "Debugging.tpp"

#endif