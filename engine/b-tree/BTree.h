#ifndef KATECPO_DB_BTREE_H
#define KATECPO_DB_BTREE_H

#include "BTreeModels.h"

namespace Engine::BTree {

    template<class T>
    class BTree {
    public:
        T getValue();

        void insert(int index, T pValue);

        void remove(int index);

    private:
        Node<T> *m_root;
    };

} // Engine

#endif //KATECPO_DB_BTREE_H
