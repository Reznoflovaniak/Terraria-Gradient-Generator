#include <iostream>
#include <string>
#include <vector>

using std::string, std::cout, std::cin, std::vector;
int main()
{
    vector<string> hexcodes;
    string line;
    string text;
    cout << "Enter text: ";
    std::getline(cin, text);
    cout << "\nCharacter count: " << text.size() - 1 << '\n';
    cout << "Use a website like https://colordesigner.io/gradient-generator to get your list of colors in the hexcode format." << '\n';
    cout << "Enter hexcode list: \n";
    while (std::getline(cin, line))
    {
        if (line.empty())
            break;
        line = line.substr(1, line.size());
        hexcodes.push_back(line);
    }
    if (hexcodes.size() != text.size())
    {
        cout << "Error: Length of text must equal length of hexcode list";
        return -1;
    }

    for (int i = 0; i < hexcodes.size(); i++)
    {
        cout << "[c/" << hexcodes[i] << ":" << text[i] << "]";
    }
    puts("");
    system("pause");
    return 0;
}
