#include </Users/star/IdeaProjects-git/Use_Thrift/gen-cpp/Serv.h>
#include </usr/local/include/thrift/transport/TSocket.h>
#include </usr/local/include/thrift/transport/TTransport.h>
#include </usr/local/include/thrift/transport/TBufferTransports.h>
#include </usr/local/include/thrift/protocol/TBinaryProtocol.h>
#include <sstream>
#include <boost/shared_ptr.hpp>

using namespace std;
using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using boost::shared_ptr;


int main (int argc, char *argv[]) {

    ::apache::thrift::stdcxx::shared_ptr<TSocket> socket(new TSocket("localhost", 9090));
    ::apache::thrift::stdcxx::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    ::apache::thrift::stdcxx::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
    servClient client(protocol);
    transport->open();

    // 我们的代码写在这里
    student stu;
    stu.no = 1;
    stu.name = "weikai";
    stu.age = 22;
    client.put(stu);

    transport->close();

    return 0;
}
