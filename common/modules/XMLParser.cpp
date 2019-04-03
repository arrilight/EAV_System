//
// Created by Anastasia Reprintseva on 2019-03-31.
//

#include "XMLParser.h"
#include <tinyxml2.h>
#include <iostream>

void XMLParser::parseRoutes(std::string const &fileName) {
    tinyxml2::XMLDocument doc;
    doc.LoadFile(fileName.c_str());
    tinyxml2::XMLPrinter printer;
    doc.Print(&printer);
    std::cout << printer.CStr() << "\n";
}