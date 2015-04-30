cd "./test"
echo "Compiling unit tests..."
#clang -c set.c
#clang++ -lgtest -std=c++11 -pthread -g -Wall -Wextra -o unit_test.o -c test.cpp
#clang++ -std=c++11 -g -Wall -Wextra -o unit_test set.o unit_test.o -lgtest -pthread
#g++ -o mytest -lgtest_main -lpthread hellowa.c mytest.c
g++ -I$GTEST_INCLUDE_DIRS/include hellowa.c mytest.c $GTEST_LIBRARY $GTEST_MAIN_LIBRARY -o mytest
echo "Running unit tests..."
./mytest
result=$?
echo "Unit tests completed : $result"
exit $result
