#pragma once
#include <string>

namespace gt {
    extern std::string flag;
    extern bool resolving_uid2;
    extern bool connecting;
    extern bool in_game;
    extern bool ghost;
    extern bool noclip;
    extern bool clickTP;
    extern bool weather;
    extern bool placetp;
    extern int placex;
    extern int placey;
    extern bool devmode;
    extern bool antighost;


    void send_log(std::string text);
    
    void solve_captcha(std::string text);
}
