#include "user.h"
void head(){
    printf("\
    <head>\
        <title>user linux</title>\
        <style>\
            body{\
                background-image: url(\"https://www.shutterstock.com/shutterstock/photos/1818501248/display_1500/stock-photo-cozy-wooden-cabin-on-shore-of-lake-ohara-in-yoho-national-park-canadian-rockies-tourist-hikers-1818501248.jpg\");\
            }\
            td,th{\
                padding: 15px;\
                border: 1px solid black;\
                border-radius: 20px;\
                text-align: center;\
                margin: 0 auto;\
            }\
            .tr{\
                color: azure;\
            }\
            .tr th{\
                border-color: yellow;\
            }\
            .name{\
                background-color: #586B6B;\
            }\
            .uid{\
                background-color: #BBAA84;\
            }\
            .gid{\
                background-color: #5E3A15;\
            }\
            .rep{\
                background-color: #896205;\
            }\
            .shell{\
                background-color: #BBAA84;\
            }\
            table{\
                margin:auto;\
            }\
            legend{\
                margin:auto;\
                border: 1px solid black;\
                padding-left: 5vw;\
                padding-right: 5vw;\
                border-radius: 10px;\
                background-color: darkgoldenrod;\
            }\
            fieldset{\
                margin:20vw 15vw 20vw 15vw;\
                border-radius: 20px;\
                padding-top: 5vw;\
                padding-bottom: 5vw;\
                background-image: url(\"https://www.shutterstock.com/shutterstock/photos/634316555/display_1500/stock-photo--d-rendering-word-linux-with-bright-yellow-color-before-an-electric-current-background-634316555.jpg\");\
                background-repeat: no-repeat;\
                background-size: cover;\
            }\
        </style>\
    </head>");
}