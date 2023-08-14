#include <string>
#include <iostream>
#include <vector>
#include <iostream>
#include <vector>
#include <memory>
#include <filesystem>
#include <exception>

using namespace std;

auto recursiveGetFileNamesByExtension =
    [](filesystem::path path,
       const string extension)
    {
        vector<filesystem::path> list;
        for(auto& p: filesystem::recursive_directory_iterator(path))
        {
            if(filesystem::is_regular_file(p) && p.path().extension().compare(extension))
            {
                list.push_back(p.path().stem());
            }
        }
        return list;
    };

int main()
{
    filesystem::path z;
    auto a = recursiveGetFileNamesByExtension(z,".txt");
}