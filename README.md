# Use_Thrift



运行  thrift2cpp.sh  student.thrift  会生成gen-cpp 目录以及目录中的文件

之后将 用my-gen-cpp 中的文件将 gen-cpp 中的文件替换 （ 其实也是在thrift生成的文件服务端中我做了一些操作，因为thrift生成一些服务端的模版，但是客户端得用户自己编写）

之后用 make.sh 进行编译 生成可执行文件到bin目录中
