//
// Created by WSX on 2020/11/17.
//

#ifndef GRAPH_COMPONENT_H
#define GRAPH_COMPONENT_H
#include <iostream>


template <typename Graph>
class Component{
private:
    int ccount;
    Graph &G;
    bool *visited;

    void dfs(int i){
        visited[i] = true;
        //typename 告诉编译器adjiterator是一个类型还是成员变量
        typename Graph::adjIterator adj(G, i);
        for (int j=adj.begin(); !adj.end(); j=adj.next()){
            if(!visited[j])
                dfs(j);
        }
    }
public:
    Component(Graph &graph): G(graph){
        visited = new bool[G.V()];
        ccount = 0;
        for(int i=0; i<G.V(); i++){
            visited[i] = false;
        }

        for(int i=0; i<G.V(); i++){
            if(!visited[i]){
                dfs(i);
                ccount ++;
            }
        }

    }
    ~Component(){
        delete [] visited;
    }

    int count(){
        return ccount;
    }

};


#endif //GRAPH_COMPONENT_H
