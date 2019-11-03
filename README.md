# thrift-cpp-example

这是一个使用thrift的c++的demo

## 1. 安装thrift
从 [这里]下载thrift的安装包。如果你使用的是mac电脑，可以执行下面的命令快速安装。
```bash
brew install thrift
```

## 2. 使用thrift生成student.thrif的c++目录

```markdown
thrift -r --gen cpp student.thrift
```

## 3. 生成c++服务端
```markdown
g++ -v -std=c++11 -lthrift -g -Wall -L/usr/local/opt/boost@1.60/lib -I /usr/local/opt/boost@1.60/include/ -I ./ -I /usr/local/include/thrift -I /usr/include/thrift/ -I /usr/include/thrift/fb303/ -I /usr/include/libxml2/ gen-cpp/serv.cpp  gen-cpp/serv_server.skeleton.cpp gen-cpp/student_constants.cpp  gen-cpp/student_types.cpp  -o bin/server
```
## 4. 生成c++客户端

```markdown
g++ -v -std=c++11 -lthrift -g -Wall -L/usr/local/opt/boost@1.60/lib -I /usr/local/opt/boost@1.60/include/ -I ./ -I /usr/local/include/thrift -I /usr/include/thrift/ -I /usr/include/thrift/fb303/ -I /usr/include/libxml2/ gen-cpp/serv.cpp  gen-cpp/student_constants.cpp  gen-cpp/student_types.cpp client/client.cpp  -o bin/client  
```
## 5. 启动c++服务端
bin/server

## 6. 执行c++客户端
bin/client

## 7. 验证
在服务端的窗口中应该打印出了`put`
