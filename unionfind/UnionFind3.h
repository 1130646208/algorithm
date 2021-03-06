//
// Created by WSX on 2020/11/8.
//

#ifndef UNIONFIND_UNIONFIND3_H
#define UNIONFIND_UNIONFIND3_H
#include <iostream>
#include <cassert>
namespace UF3{
    class UnionFind{
    private:
        int *parent;
        //基于size的优化，使得集合小的向集合大的合并，让树更平衡
        //sz[i]代表以i为根节点的元素个数
        int *sz;
        int count;

    public:
        UnionFind(int n){
            count = n;
            parent = new int[n];
            sz = new int[n];
            for (int i=0; i < n; i++){
                parent[i] = i;
                sz[i] = 1;
            }
        }
        ~UnionFind(){
            delete [] parent;
            delete [] sz;
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
            if (sz[pRoot] < sz[qRoot]){
                parent[pRoot] = qRoot;
                sz[qRoot] += sz[pRoot];
            }
            else{
                parent[qRoot] = pRoot;
                sz[pRoot] += sz[qRoot];
            }

        }
    };
}
#endif //UNIONFIND_UNIONFIND3_H
