#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <iterator>

void generate_words(const std::vector<char> &alphabet, size_t &word_length, std::vector<std::string> &results)
{
    std::vector<size_t> index(word_length, 0);

    for (;;)
    {
        std::string word(index.size(), ' ');
        for (size_t i = 0; i < index.size(); ++i)
        {
            word[i] = alphabet[index[i]];
        }
        results.emplace_back(word);

        for (int i = index.size() - 1; ; --i)
        {
            if (i < 0)
            {
                return;
            }

            ++index[i];

            if (index[i] == alphabet.size())
            {
                index[i] = 0;
            }
            else
            {
                break;
            }
        }
    }
}

int main(int argc, char **argv)
{
    std::ifstream infile(argv[1], std::ios::in | std::ifstream::binary);

    std::string line;
    while (infile.good() && getline(infile, line))
    {
        size_t word_length = std::stoi(line.substr(0, line.find(',')));
        std::string letters = line.substr(line.find(',') + 1);

        std::vector<char> alphabet;
        for (const auto &it : letters)
        {
            alphabet.push_back(it);
        }
        std::sort(alphabet.begin(), alphabet.end());
        auto last = std::unique(alphabet.begin(), alphabet.end());
        alphabet.erase(last, alphabet.end());

        std::vector<std::string> results;
        generate_words(alphabet, word_length, results);

        std::ostringstream result_line;
        std::copy(results.begin(), results.end() - 1, std::ostream_iterator<std::string>(result_line, ","));
        result_line << results.back();

        std::cout << result_line.str() << "\n";
    }
}
