//
// Created by scani on 27/06/2022.
//

namespace Engine::BTree {
    template<class T>
    struct Node {
        int index;
        T *value;
        Node **child_ptr;
        bool isLeaf;
    };
} // Engine