CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra
LDFLAGS = -lgtest -lgtest_main -pthread

SRC = test.cpp
OUT = test_run

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) $(LDFLAGS) -o $(OUT)

run: $(OUT)
	./$(OUT)

clean:
	rm -f $(OUT)
