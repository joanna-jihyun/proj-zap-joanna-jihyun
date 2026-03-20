/*
 * phaseOne.cpp
 *
 *  CS15 Proj 3: Zap
 *  Joanna Suh (jsuh06)
 *  3/20/26
 *
 *  Purpose: (Implementation File) This program provides the implementation for
 *           Editor objects.
 */

#include "phaseOne.h"
#include <iostream>

/*
 * name:      count_freqs
 * purpose:   read and count the number of occurences of each character
 * arguments: istream reference text
 * returns:   none
 */
void count_freqs(std::istream &text)
{
    int freqs[256];
    char ch;
    std::vector<char> chars;

    while (text.get(ch))
    {
        freqs[ch]++;
        chars.push_back(ch);
    }

    for (int i = 0; i < chars.size(); i++)
    {
        std::cout << chars[i] << ": " << freqs[chars[i]] << '\n';
    }
}

/*
 * name:      Editor overloaded constructor
 * purpose:   called when creating an ActionStack instance with logfile
 * arguments: none
 * returns:   none
 * note: logs all the key movements in the UI
 */
std::string serialize_tree(HuffmanTreeNode *root) {}

/*
 * name:      Editor overloaded constructor
 * purpose:   called when creating an ActionStack instance with logfile
 * arguments: none
 * returns:   none
 * note: logs all the key movements in the UI
 */
HuffmanTreeNode *deserialize_tree(const std::string &s) {}
