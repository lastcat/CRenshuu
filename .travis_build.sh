cd "./test"
echo "Compiling unit tests..."
#clang -c set.c
#clang++ -lgtest -std=c++11 -pthread -g -Wall -Wextra -o unit_test.o -c test.cpp
#clang++ -std=c++11 -g -Wall -Wextra -o unit_test set.o unit_test.o -lgtest -pthread
g++ -g -Wall -pthread　hellowa.c mytest.c -o mytest -lgtest
echo "Running unit tests..."
./mytest
result=$?
rm -r unit_test hellowa.o mytest.o
echo "Unit tests completed : $result"
exit $result
