SRC = Complex.cpp
TEST_SRC = test_Complex.cpp

all: $(SRC) $(TEST_SRC)
	g++ $^ -lgtest -lgtest_main -lpthread -o all.out

run:all
	./all.out

coverage:$(SRC) $(TEST_SRC)
	g++ -fprofile-arcs -ftest-coverage $^ -lgtest -lgtest_main -lpthread -o all.out
	./all.out
	gcov -a $(SRC)

analyze:all $(SRC)
	cppcheck --enable=all $(SRC)
	valgrind ./all.out

clean:
	rm -rf *.o *.out *.gcd* *.gcno* *.gcov* 