//
// Created by Administrator on 2023/8/21 0021.
//

#include "hash_code.h"
#include <cstdlib>
#include <string>

std::wstring s2ws(const std::string& str) {
    if (str.empty()) {
        return L"";
    }
    unsigned len = str.size() + 1;
    setlocale(LC_CTYPE, "en_US.UTF-8");
    wchar_t *p = new wchar_t[len];
    mbstowcs(p, str.c_str(), len);
    std::wstring w_str(p);
    delete[] p;
    return w_str;
}

int32_t hash_code(const std::string& str) {
    int32_t h = 0;
    //SoDebug("strlength is: %u",str.length());
    std::wstring wstr=s2ws(str);
    //SoDebug("wstr.length is %u",wstr.length());
    if (h == 0 && wstr.length() > 0) {
        for (uint32_t i = 0; i < wstr.length(); i++) {
            h = 31 * h + wstr.at(i);
        }
    }
    return h;
}
