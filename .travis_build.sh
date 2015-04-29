cd "./test"
echo "Compiling unit tests..."
#clang -c set.c
#clang++ -lgtest -std=c++11 -pthread -g -Wall -Wextra -o unit_test.o -c test.cpp
#clang++ -std=c++11 -g -Wall -Wextra -o unit_test set.o unit_test.o -lgtest -pthread
g++ hellowa.c mytest.c -lgtest_main -lpthread -o mytest
echo "Running unit tests..."
./mytest
result=$?
echo "Unit tests completed : $result"
exit $result
