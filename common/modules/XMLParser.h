//
// Created by Anastasia Reprintseva on 2019-03-31.
//

#ifndef EAV_SYSTEM_XMLPARSER_H
#define EAV_SYSTEM_XMLPARSER_H


#include <string>

class XMLParser {
public:
     void parseRoutes(std::string const & fileName);
     void createFile();
};


#endif //EAV_SYSTEM_XMLPARSER_H
