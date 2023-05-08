#include "json.hpp"
#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>

int main()
{
    Json json;
    std::string line, word;
    std::string mark, comment;
    std::ifstream inFile("Final_marks_assignment3.csv", std::ios::in);
    std::ofstream outFile("asst3.json", std::ios::out);
    std::vector<std::string> nodes;
    if(inFile.is_open())
    {
        getline(inFile, line);
        std::stringstream firstRow(line);
        while(getline(firstRow, word, ','))
        {
            nodes.push_back(word);
        }
        int counter = 0;
        while(getline(inFile, line))
        {
            if(counter != 0) json.addComma();
            std::stringstream str(line);
            json.startListTag();

            getline(str, word, ',');
            json.addElement("group", word, STRING);
            json.addComma();

            Json test1;
            test1.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test1.addElement("mark", mark, INTEGER);
            test1.addComma();
            test1.addElement("comment", comment, STRING);
            test1.endListTag();
            
            json.addElement("test1", test1.getJasonString(), INTEGER);
            json.addComma();

            Json test2;
            test2.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test2.addElement("mark", mark, INTEGER);
            test2.addComma();
            test2.addElement("comment", comment, STRING);
            test2.endListTag();
            
            json.addElement("test2", test2.getJasonString(), INTEGER);
            json.addComma();

            Json test3;
            test3.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test3.addElement("mark", mark, INTEGER);
            test3.addComma();
            test3.addElement("comment", comment, STRING);
            test3.endListTag();
            
            json.addElement("test3", test3.getJasonString(), INTEGER);
            json.addComma();

            Json test4;
            test4.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test4.addElement("mark", mark, INTEGER);
            test4.addComma();
            test4.addElement("comment", comment, STRING);
            test4.endListTag();
            
            json.addElement("test4", test4.getJasonString(), INTEGER);
            json.addComma();

            Json test5;
            test5.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test5.addElement("mark", mark, INTEGER);
            test5.addComma();
            test5.addElement("comment", comment, STRING);
            test5.endListTag();
            
            json.addElement("test5", test5.getJasonString(), INTEGER);
            json.addComma();

            Json test6;
            test6.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test6.addElement("mark", mark, INTEGER);
            test6.addComma();
            test6.addElement("comment", comment, STRING);
            test6.endListTag();
            
            json.addElement("test6", test6.getJasonString(), INTEGER);
            json.addComma();

            Json test7;
            test7.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test7.addElement("mark", mark, INTEGER);
            test7.addComma();
            test7.addElement("comment", comment, STRING);
            test7.endListTag();
            
            json.addElement("test7", test7.getJasonString(), INTEGER);
            json.addComma();

            Json test8;
            test8.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test8.addElement("mark", mark, INTEGER);
            test8.addComma();
            test8.addElement("comment", comment, STRING);
            test8.endListTag();
            
            json.addElement("test8", test8.getJasonString(), INTEGER);
            json.addComma();

            Json test9;
            test9.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test9.addElement("mark", mark, INTEGER);
            test9.addComma();
            test9.addElement("comment", comment, STRING);
            test9.endListTag();
            
            json.addElement("test9", test9.getJasonString(), INTEGER);
            json.addComma();

            Json test10;
            test10.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test10.addElement("mark", mark, INTEGER);
            test10.addComma();
            test10.addElement("comment", comment, STRING);
            test10.endListTag();
            
            json.addElement("test10", test10.getJasonString(), INTEGER);
            json.addComma();

            Json test11;
            test11.startListTag();
            getline(str, comment, ',');
            getline(str, mark, ',');
            test11.addElement("mark", mark, INTEGER);
            test11.addComma();
            test11.addElement("comment", comment, STRING);
            test11.endListTag();
            
            json.addElement("test11", test11.getJasonString(), INTEGER);

            json.endListTag();
            counter++;
        }
        Json final;
        final.startListTag();
        final.addElement("marks", json.getJasonString(), LIST);
        final.endListTag();
        outFile << final.getJasonString() ;
        outFile.close();
    }
    else
    {
        std::cout << "ERROR : Failed to find CSV file !\n";
    }

    return 0;
}
