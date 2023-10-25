#include "auth.h"
void head(){
    printf("\
    <head>\
        <title>/var/log/auth.log</title>\
        <style>\
            td,th{\
                padding: 15px;\
                border: 1px solid black;\
                border-radius: 20px;\
                text-align: center;\
                margin: 0 auto;\
            }\
            td a{\
                text-decoration: none;\
            }\
            table{\
                margin:auto;\
            }\
            h5{\
               text-align: center;\
            }\
            legend{\
                margin:auto;\
                border: 2px solid black;\
                padding-left: 5vw;\
                padding-right: 5vw;\
                border-radius: 10px;\
            }\
            body{\
               /*padding: 10vw;*/\
               background: linear-gradient(#141e30, #243b55);\
            }\
            fieldset{\
                margin:20vw 15vw 20vw 15vw;\
                border-radius: 20px;\
                padding-top: 5vw;\
                padding-bottom: 5vw;\
                background-size: cover;\
            }\
            #mitady{\
                margin:auto;\
                background-color: blue;\
                justify-content: center;\
                width: 500px;\
                height: 100px;\
            }\
            #mitady form input{\
                margin:auto;\
                justify-content: center;\
            }\
        </style>\
    </head>");
}
void style_log_sing(){
    printf("<head>\
                <meta charset=\"UTF-8\">\
                <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\
                <link href=\"style.css\" rel=\"stylesheet\">\
                <title>/var/log/auth.log</title>\
                <style>");
        printf("\
            html {\
                height: %s;\
            }","100%");
        printf("\
            body {\
                margin:0;\
                padding:0;\
                font-family: sans-serif;\
                background: linear-gradient(#141e30, #243b55);\
            }");
        printf("\
            .login-box {\
                position: absolute;\
                top: %s;\
                left: %s;\
                width: 400px;\
                padding: 40px;\
                transform: translate(-%s, -%s);\
                background: rgba(0,0,0,.5);\
                box-sizing: border-box;\
                box-shadow: 0 15px 25px rgba(0,0,0,.6);\
                border-radius: 10px;\
            }","50%","50%","50%","50%");
            printf("\
                .login-box h2 {\
                    margin: 0 0 30px;\
                    padding: 0;\
                    color: #fff;\
                    text-align: center;\
                }");
            printf("\
                .login-box .user-box {\
                    position: relative;\
                }");
            printf("\
                .login-box .user-box input {\
                    width: %s;\
                    padding: 10px 0;\
                    font-size: 16px;\
                    color: #fff;\
                    margin-bottom: 30px;\
                    border: none;\
                    border-bottom: 1px solid #fff;\
                    outline: none;\
                    background: transparent;\
                }","100%");
            printf("\
                .login-box .user-box label {\
                    position: absolute;\
                    top:0;\
                    left: 0;\
                    padding: 10px 0;\
                    font-size: 16px;\
                    color: #fff;\
                    pointer-events: none;\
                    transition: .5s;\
                }");
            printf("\
                .login-box .user-box input:focus ~ label,\
                .login-box .user-box input:valid ~ label {\
                    top: -20px;\
                    left: 0;\
                    color: #03e9f4;\
                    font-size: 12px;\
                }");
            printf("\
                .login-box form a {\
                    position: relative;\
                    display: inline-block;\
                    padding: 10px 20px;\
                    color: #03e9f4;\
                    font-size: 16px;\
                    text-decoration: none;\
                    text-transform: uppercase;\
                    overflow: hidden;\
                    transition: .5s;\
                    margin-top: 40px;\
                    letter-spacing: 4px\
                }");
            printf("\
                .login-box a:hover {\
                    background: #03e9f4;\
                    color: #fff;\
                    border-radius: 5px;\
                    box-shadow: 5px #03e9f4;\
                }");
            printf("\
                @keyframes btn-anim1 {\
                    %s {\
                        left: -100%;\
                    }\
                    %s,%s {\
                        left: %s;\
                    }\
                }","0%","100%","50%","100%","100%");
            printf("\
                @keyframes btn-anim2 {\
                    %s {\
                        top: -%s;\
                    }\
                    %s,%s {\
                        top: %s;\
                    }\
                }","0%","100%","50%","100%","100%");
            printf("\
                @keyframes btn-anim3 {\
                    %s {\
                        right: -%s;\
                    }\
                    %s,%s {\
                      right: %s;\
                    }\
                }","0%","100%","50%","100%","100%");
            printf("\
                @keyframes btn-anim4 {\
                    %s {\
                      bottom: -%s;\
                    }\
                    %s,%s {\
                      bottom: %s;\
                    }\
                }","0%","100%","50%","100%","100%");
    printf("</style></head>");
}