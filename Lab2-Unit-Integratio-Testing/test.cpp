#include "c-echo.h"
#include <iostream>
#include <string>
#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld){
	char* test_val[3]; 
	test_val[0] = "./c-echo"; 
	test_val[1] = "hello"; 
	test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3,test_val)); 
}

TEST(EchoTest, EmptyString){
        char* test_val[1];
	test_val[0] = "./c-echo";
        EXPECT_EQ("", echo(1,test_val));
}


TEST(EchoTest,NotType){
	char* test_val[1];
	test_val[0] = "./c-echo";
	test_val[1] = "1234";
	ASSERT_NE("hello world",echo(2,test_val));
}


TEST(EchoTest,checkEchoFile){
	char* test_val[1];
	test_val[0] = "./c-echo";
	EXPECT_EQ("./c-echo",test_val[0]);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

