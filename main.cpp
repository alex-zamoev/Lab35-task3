#include <iostream>
#include <filesystem>

int main()
{
    auto recursiveGetFileNamesByExtension =
            [](std::filesystem::path path,
               const std::string extension){
                for(auto& p: std::filesystem::recursive_directory_iterator(path)){
                    if (p.path().extension() == extension)
                        std::cout << p.path().filename() << '\n';
                }
            };

    recursiveGetFileNamesByExtension("c:\\temp", ".txt");

    return 0;
}
