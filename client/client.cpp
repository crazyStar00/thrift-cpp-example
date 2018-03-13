/*************************************************************************
	> File Name: client.cpp
	> Author: wk
	> Mail: 18402927708@163.com
	> Created Time: 2018年03月13日 星期二 19时06分50秒
 ************************************************************************/
#include <unistd.h>
#include <getopt.h>
#include <netinet/in.h>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransport.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/protocol/TBinaryProtocol.h>

#include "serv.h"
#include <iostream>
using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using boost::shared_ptr;


int main (int argc, char *argv[]) {

    boost::shared_ptr<TSocket> socket(new TSocket("localhost", 9090));
    boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
    servClient client(protocol);
    socket->setConnTimeout(2000);
    socket->setRecvTimeout(2000);
    socket->setSendTimeout(2000);
    try {
        transport->open();
        student stu;
        stu.no = 1;
        stu.name = "weikai";
        stu.age = 22;
        uint32_t ret = client.put(stu);
        cout<<ret<<endl;
        uint32_t time = client.tell_me_time();
        cout<<time<<endl;
    } catch (TException& e) {
        cout << "catch exception" << endl;
        return 0;
    }
    transport->open();

    return 0;
}
