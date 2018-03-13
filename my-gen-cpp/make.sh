#!/bin/bash

g++ -g -Wall -DDB=0 -DWRITE_TO_FILE -DHAVE_NETINET_IN_H -I /usr/include/thrift/ -I /usr/include/thrift/fb303/ -I /usr/include/libxml2/ -I ./common/ -I./   serv.cpp serv.h serv_server.skeleton.cpp student_constants.cpp student_constants.h
student_types.cpp student_types.h  -o ../bin/server -lpthread -lxml2 -lthrift -Wl,-rpath /usr/lib -lfb303
