//
// Created by WSX on 2020/11/8.
//

#ifndef UNIONFIND_UNIONFIND2_H
#define UNIONFIND_UNIONFIND2_H
#include <iostream>
#include <cassert>
namespace UF2{
    class UnionFind{
    private:
        int *parent;
        int count;

    public:
        UnionFind(int n){
            count = n;
            parent = new int[n];
            for (int i=0; i < n; i++){
                parent[i] = i;
            }
        }
        ~UnionFind(){
            delete [] parent;
        }

        //find root
        int find(int p){
            assert(p>=0 && p<count);
            while(p != parent[p]){
                p = parent[p];
            }
            return p;
        }
        bool isConnected(int p, int q){
            return find(p) == find(q);
//        return id[p] == id[q];
        }

        void unionElements(int p, int q){
            int pRoot = find(p);
            int qRoot = find(q);
            if (pRoot == qRoot)
                return;
            parent[pRoot] = qRoot;
        }
    };
}
#endif //UNIONFIND_UNIONFIND2_H
