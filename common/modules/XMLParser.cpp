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

void XMLParser::createFile() {
    tinyxml2::XMLDocument doc;
    tinyxml2::XMLNode * pRoot = doc.NewElement("routes");
    doc.InsertFirstChild(pRoot);

    tinyxml2::XMLElement * pElement = doc.NewElement("vehicle");
    pElement->SetAttribute("id", 0);
    pElement->SetAttribute("depart", 0.00);
    pRoot->InsertEndChild(pElement);

    tinyxml2::XMLElement * pElement2 = doc.NewElement("route");
    pElement2->SetAttribute("edges", "183484513 -581467978#1 -581467978#0 -86218134#1 -86218134#0 -581467979#1 -581467979#0");
    pElement->InsertEndChild(pElement2);

    tinyxml2::XMLError eResult = doc.SaveFile("SavedData.xml");
}
