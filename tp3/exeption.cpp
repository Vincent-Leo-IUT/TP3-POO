#include "exception.h"
#include <string>
#include <exception>
#include <iomanip>
#include <iostream>

using namespace std;
using namespace nsUtil;

unsigned Exception::getCodErr() const
{
    return CodErr;
}

std::string Exception::getLabel() const
{
    return Label;
}

nsUtil::Exception::Exception(const string & Label_, const unsigned & CodErr_): Label(Label_), CodErr(CodErr_){
}

nsUtil::Exception::~Exception(){
}


const char *nsUtil::Exception::what() const noexcept
{
    return Label.c_str();
}

void nsUtil::Exception::display() const
{
    cout << "Label :" << Label << endl;
    cout << "CodErr :" << CodErr << endl;
}

