
#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>
#include <exception>


namespace nsUtil
{
    class Exception : public std::exception
    {
    private:
        std::string Label;
        unsigned CodErr;
    public:
        Exception(const std::string & Label, const unsigned & CodErr);
        ~Exception();
        unsigned getCodErr() const;
        std::string getLabel() const;
        virtual const char* what() const noexcept;
        void display() const;
    };
}

#endif
