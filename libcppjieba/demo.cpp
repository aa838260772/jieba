#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include "MixSegment.hpp"
#include <string>
#include <map>

//#include "MPSegment.hpp"
//#include "HMMSegment.hpp"
//#include "FullSegment.hpp"
//#include "QuerySegment.hpp"

using namespace CppJieba;
using namespace std;
const char * const dict_path =  "dict/jieba.dict.utf8";
const char * const model_path = "dict/hmm_model.utf8";

//const char * const test_lines = "我来到南京市长江大桥";

int main(int argc, char ** argv)
{
    /*segment init may take a few seconds.*/
    MixSegment segment(dict_path, model_path);
    vector<string> words;
     string s = "我爱北京天安门"    ;
    segment.cut(s.c_str(), words);
        //       cout << words << endl;
        for(size_t i = 0; i < words.size(); i++)
        {
            cout << words[i] << endl;
        }
    

    return 0;
}
