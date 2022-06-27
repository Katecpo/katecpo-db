#include "BTree.h"

namespace Engine::BTree {
    template<class T>
    void BTree<T>::insert(int index, T pValue) {
        auto *newNode = new Node<T>;

        // Tree hasn't any value, let's start it
        if (m_root == nullptr) {
            newNode->isLeaf = true;
            newNode->value = pValue;
            newNode->index = index;

            m_root = newNode;
        }
    }

    template<class T>
    void BTree<T>::remove(int index) {

    }
}