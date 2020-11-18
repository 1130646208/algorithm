#include <iostream>
#include "SparseGraph.h"
#include "DenseGraph.h"
#include "ReadGraph.h"
#include "Component.h"
using namespace std;

// 测试通过文件读取图的信息
int main() {

    // 使用两种图的存储方式读取testG1.txt文件
    string filename = R"(D:\code\algorithm\Graph\testG1.txt)";
    SparseGraph g1( 13 , false );
    ReadGraph<SparseGraph> readGraph1( g1 , filename );
    cout<<"test G1 in Sparse Graph:" << endl;
    g1.show();
    Component<SparseGraph> component1(g1);
    cout<<"com: " <<component1.count()<<endl;
    cout<<endl;

    DenseGraph g2( 13 , false );
    ReadGraph<DenseGraph> readGraph2( g2 , filename );
    cout<<"test G1 in Dense Graph:" << endl;
    g2.show();
    Component<DenseGraph> component2(g2);
    cout<<"com: " <<component2.count()<<endl;
    cout<<endl;

    // 使用两种图的存储方式读取testG2.txt文件
//    filename = "./testG2.txt";
//    SparseGraph g3( 6 , false );
//    ReadGraph<SparseGraph> readGraph3( g3 , filename );
//    cout<<"test G2 in Sparse Graph:" << endl;
//    g3.show();
//
//    cout<<endl;
//
//    DenseGraph g4( 6 , false );
//    ReadGraph<DenseGraph> readGraph4( g4 , filename );
//    cout<<"test G2 in Dense Graph:" << endl;
//    g4.show();

    return 0;
}