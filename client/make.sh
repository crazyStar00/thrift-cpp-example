#!/bin/bash


   g++ -g -Wall -DDB=0 -DWRITE_TO_FILE -DHAVE_NETINET_IN_H -I /usr/include/thrift/ -I /usr/include/thrift/fb303/ -I /usr/include/libxml2/  -I ../gen-cpp/   ../gen-cpp/serv.cpp ../gen-cpp/serv.h ../gen-cpp/student_constants.cpp
   ../gen-cpp/student_constants.h ../gen-cpp/student_types.cpp ../gen-cpp/student_types.h client.cpp -o ../bin/client -lpthread -lxml2 -lthrift -Wl,-rpath /usr/lib -lfb303
