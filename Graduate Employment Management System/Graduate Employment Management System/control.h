#pragma once
#include <mysql.h>


int login(MYSQL* pmysql, int* pid); //登陆函数的声明

void my_register(MYSQL* pmysql); //注册用户名和密码
