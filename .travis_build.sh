cd "test"
echo "Compiling unit tests..."
g++ hellowa.c mytest.c /usr/local/lib/libgtest.a -pthread
echo "Running unit tests..."
./a.out
result=$?
echo "Unit tests completed : $result"
exit $result
