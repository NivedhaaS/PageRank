//comment out file while running main
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "adjacencyList.cpp"
using namespace std;

//Test cases are randomly generated using https://chasemooncheese.github.io/Project2Tester/ website
TEST_CASE( "TEST 1" ) {
    AdjacencyList list;

    string input = R"(28 8
pcbuildinguf.com zoom.us
stackoverflow.com pcbuildinguf.com
openai.com samsung.com
reactjs.org weather.com
openai.com ufl.edu
openai.com instagram.com
pcbuildinguf.com instagram.com
weather.com instagram.com
instagram.com ufl.edu
instagram.com stackoverflow.com
reactjs.org instagram.com
roblox.com pcbuildinguf.com
samsung.com reactjs.org
zoom.us stackoverflow.com
pcbuildinguf.com samsung.com
openai.com zoom.us
ufl.edu zoom.us
ufl.edu instagram.com
pcbuildinguf.com openai.com
instagram.com pcbuildinguf.com
github.com openai.com
reactjs.org samsung.com
reactjs.org openai.com
weather.com openai.com
reactjs.org github.com
github.com pcbuildinguf.com
openai.com weather.com
pcbuildinguf.com github.com)";

    string testOutput = list.test(input);

    string output = R"(github.com 0.06
instagram.com 0.13
openai.com 0.11
pcbuildinguf.com 0.21
reactjs.org 0.08
roblox.com 0.00
samsung.com 0.08
stackoverflow.com 0.14
ufl.edu 0.06
weather.com 0.04
zoom.us 0.10)";

    REQUIRE(output == testOutput);
}

TEST_CASE( "TEST 2" ) {
    AdjacencyList list;

    string input = R"(5 8
facebook.com wikipedia.org
wikipedia.org openai.com
facebook.com openai.com
facebook.com microsoft.com
microsoft.com facebook.com)";

    string testOutput = list.test(input);

    string output = R"(facebook.com 0.01
microsoft.com 0.00
openai.com 0.01
wikipedia.org 0.00)";

    REQUIRE(output == testOutput);
}

TEST_CASE( "TEST 3" ) {
    AdjacencyList list;

    string input = R"(6 5
youtube.com aman.com
chase.com mozilla.org
aman.com twitter.com
openai.com aman.com
chase.com openai.com
aman.com getbootstrap.com)";

    string testOutput = list.test(input);

    string output = R"(aman.com 0.00
chase.com 0.00
getbootstrap.com 0.00
mozilla.org 0.00
openai.com 0.00
twitter.com 0.00
youtube.com 0.00)";

    REQUIRE(output == testOutput);
}

TEST_CASE( "TEST 4" ) {
    AdjacencyList list;

    string input = R"(30 2
zoom.us google.com
twitter.com zoom.us
disney.com google.com
google.com youtube.com
getbootstrap.com chase.com
youtube.com instagram.com
instagram.com getbootstrap.com
zoom.us youtube.com
getbootstrap.com instagram.com
youtube.com zoom.us
disney.com getbootstrap.com
openai.com google.com
getbootstrap.com openai.com
disney.com openai.com
getbootstrap.com stackoverflow.com
youtube.com getbootstrap.com
disney.com stackoverflow.com
zoom.us apple.com
stackoverflow.com apple.com
chase.com instagram.com
getbootstrap.com apple.com
twitter.com youtube.com
instagram.com openai.com
chase.com google.com
zoom.us twitter.com
zoom.us openai.com
stackoverflow.com instagram.com
twitter.com chase.com
twitter.com instagram.com
google.com getbootstrap.com)";

    string testOutput = list.test(input);

    string output = R"(apple.com 0.08
chase.com 0.04
disney.com 0.00
getbootstrap.com 0.14
google.com 0.18
instagram.com 0.16
openai.com 0.10
stackoverflow.com 0.04
twitter.com 0.02
youtube.com 0.09
zoom.us 0.05)";

    REQUIRE(output == testOutput);
}

TEST_CASE( "TEST 5" ) {
    AdjacencyList list;

    string input = R"(19 12
stackoverflow.com twitter.com
stackoverflow.com disney.com
youtube.com disney.com
google.com youtube.com
stackoverflow.com zoom.us
google.com disney.com
stackoverflow.com youtube.com
twitter.com stackoverflow.com
google.com roblox.com
roblox.com twitter.com
youtube.com twitter.com
google.com getbootstrap.com
twitter.com zoom.us
google.com stackoverflow.com
zoom.us stackoverflow.com
twitter.com youtube.com
stackoverflow.com google.com
microsoft.com disney.com
disney.com getbootstrap.com)";

    string testOutput = list.test(input);

    string output = R"(disney.com 0.01
getbootstrap.com 0.02
google.com 0.01
microsoft.com 0.00
roblox.com 0.00
stackoverflow.com 0.02
twitter.com 0.02
youtube.com 0.01
zoom.us 0.01)";

    REQUIRE(output == testOutput);
}

