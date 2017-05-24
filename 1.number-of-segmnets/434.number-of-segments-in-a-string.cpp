/*
 * [434] Number of Segments in a String
 *
 * https://leetcode.com/problems/number-of-segments-in-a-string
 *
 * Easy (37.05%)
 * Total Accepted:    19425
 * Total Submissions: 52471
 * Testcase Example:  '"Hello, my name is John"'
 *
 * Count the number of segments in a string, where a segment is defined to be a
 * contiguous sequence of non-space characters.
 * 
 * Please note that the string does not contain any non-printable characters.
 * 
 * Example:
 * 
 * Input: "Hello, my name is John"
 * Output: 5
 * 
 * 
 */
#include <string>
#include <sstream>
using namespace std;
class Solution {
public:
    int countSegments(string s) {
	istringstream record(s);
	int count=0;
	string word;
//	if((record>>word) == " ")
//		count++;
	while(record>>word)
		count++;
	return count;
    }
};
