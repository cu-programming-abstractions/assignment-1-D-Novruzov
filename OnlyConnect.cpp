/* File: OnlyConnect.cpp
 *
 * TODO: Edit these comments to describe anything interesting or noteworthy in your implementation.
 *
 * TODO: Edit these comments to leave a puzzle for your section leader to solve!
 */
#include "OnlyConnect.h"
<<<<<<< HEAD
=======
#include <cctype>
#include <vector>
#include "strlib.h"
>>>>>>> 205f3a0 (pushing)
using namespace std;

string onlyConnectize(string phrase) {
    /* TODO: The next few lines just exist to make sure you don't get compiler
     * warning messages when this function isn't implemented. Delete this
     * comment and the next few lines, then implement this function.
     */
<<<<<<< HEAD
    (void) phrase;
    return "";
}

=======

    if (phrase.empty()) {
        return "";
    }
    char first = phrase[0];
    first = toupper(first);
    string rest = onlyConnectize(phrase.substr(1));
    if(isalpha(first) && first != 'A' && first != 'E'  && first != 'I'  && first != 'O' && first != 'U') {
        return string(1, first) + rest;
    }else {
        return rest;
    }
}
>>>>>>> 205f3a0 (pushing)





/* * * * * * Provided Test Cases * * * * * */
#include "GUI/SimpleTest.h"

PROVIDED_TEST("Handles single-character inputs.") {
    EXPECT_EQUAL(onlyConnectize("A"), "");
    EXPECT_EQUAL(onlyConnectize("Q"), "Q");
}

PROVIDED_TEST("Converts lower-case to upper-case.") {
    EXPECT_EQUAL(onlyConnectize("lowercase"), "LWRCS");
    EXPECT_EQUAL(onlyConnectize("uppercase"), "PPRCS");
}
<<<<<<< HEAD

=======
PROVIDED_TEST("Uses different signs") {
    EXPECT_EQUAL(onlyConnectize("@#(&"), "");
    EXPECT_EQUAL(onlyConnectize("@#$@$asjd"), "SJD");
}
PROVIDED_TEST("is an empty string") {
    EXPECT_EQUAL(onlyConnectize(""), "");

}
>>>>>>> 205f3a0 (pushing)
/* TODO: You will need to add your own tests into this suite of test cases. Think about the sorts
 * of inputs we tested here, and, importantly, what sorts of inputs we *didn't* test here. Some
 * general rules of testing:
 *
 *    1. Try extreme cases. What are some very large cases to check? What are some very small cases?
<<<<<<< HEAD
 *
 *    2. Be diverse. There are a lot of possible inputs out there. Make sure you have tests that account
 *       for cases that aren't just variations of one another.
 *
 *    3. Be sneaky. Don't just try standard inputs. Try weird ones that you wouldn't expect anyone to
 *       actually enter, but which are still perfectly legal.
=======
 *       very large cases can be for instance passing the alphabet so result will be letters excluding vowels all in uppercase
 *
 *    2. Be diverse. There are a lot of possible inputs out there. Make sure you have tests that account
 *       for cases that aren't just variations of one another.
 *       there can be all the symbols onlyConnectize(!@#$%^&*())  output: ""
 *
 *       also empty string onlyConnectize("") output: ""
 *
 *    3. Be sneaky. Don't just try standard inputs. Try weird ones that you wouldn't expect anyone to
 *       actually enter, but which are still perfectly legal.
 *       for instance equation onlyConnecize(2+2=4alkdna) output: LKDN
>>>>>>> 205f3a0 (pushing)
 *
 * Happy testing!
 */






