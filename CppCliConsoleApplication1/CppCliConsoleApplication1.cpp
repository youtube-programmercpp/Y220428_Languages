#include "pch.h"

using namespace System;

//
// C++/CLI ... .NET 用の非常に特殊な C++
//

void f(array<System::String^>^ a)
{
    int n = a->Length;
}
#include <string>
void f(std::string b[])
{
}

int main(array<System::String ^> ^args)
{
    // gcnew  .NET 用の new、つまり C# や VB.NET での new
    auto a = gcnew array<System::String^>(3);
    a[0] = "ABC";
    a[1] = "DEF";
    a[2] = "GHI";
    f(a);
    std::string b[3];
    b[0] = "ABC";
    b[1] = "DEF";
    b[2] = "GHI";
    f(b);




    return 0;
}
