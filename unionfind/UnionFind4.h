//
// Created by WSX on 2020/11/8.
//

#ifndef UNIONFIND_UNIONFIND4_H
#define UNIONFIND_UNIONFIND4_H
#include <iostream>
#include <cassert>
namespace UF4{
    class UnionFind{
    private:
        int *parent;
        //基于size的优化，使得集合小的向集合大的合并，让树更平衡
        //sz[i]代表以i为根节点的元素个数
        int *rank;
        int count;

    public:
        UnionFind(int n){
            count = n;
            parent = new int[n];
            rank = new int[n];
            for (int i=0; i < n; i++){
                parent[i] = i;
                rank[i] = 1;
            }
        }
        ~UnionFind(){
            delete [] parent;
            delete [] rank;
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

            //前两种情况下，树层数小的合并到层数大的，层数小的树根节点变成大的树的根节点。而大树的根节点不受影响
            if (rank[pRoot] < rank[qRoot]){
                parent[pRoot] = qRoot;
            }
            else if (rank[pRoot] > rank[qRoot]){
                parent[qRoot] = pRoot;
            }else{
                //只有在两树相等的情况下才需要维护rank
                parent[pRoot] = qRoot;
                rank[qRoot] += 1;
            }

        }
    };
}
#endif //UNIONFIND_UNIONFIND4_H
