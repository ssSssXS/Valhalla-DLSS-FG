/* Modified for the Valhalla installer. SPDX-License-Identifier: GPL-3.0-or-later */
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <fcntl.h>
#include <io.h>
extern "C" int decode(const unsigned char*, size_t, unsigned char*, size_t);
int main(int argc,char** argv) {
    if(argc!=3)return 2;
    size_t packed=std::strtoul(argv[1],nullptr,10), plain=std::strtoul(argv[2],nullptr,10);
    if(!packed||!plain||packed>1048576||plain>1048576)return 2;
    _setmode(_fileno(stdin),_O_BINARY);
    _setmode(_fileno(stdout),_O_BINARY);
    std::vector<unsigned char> source(packed+64),output(plain+64);
    if(fread(source.data(),1,packed,stdin)!=packed)return 3;
    if(decode(source.data(),packed,output.data(),plain)!=int(plain))return 4;
    return fwrite(output.data(),1,plain,stdout)==plain?0:5;
}
