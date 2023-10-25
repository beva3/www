#include "auth.h"
void body__log(){
    printf("\
        <body>\
        <div class=\"login-box\">\
            <h2>Login</h2>\
            <form>\
                <div class=\"user-box\">\
                    <input type=\"text\" name=\"\" required=\"\">\
                    <label>Username</label>\
                </div>\
                <div class=\"user-box\">\
                    <input type=\"password\" name=\"\" required=\"\">\
                    <label>Password</label>\
                </div>\
                <a href=\"#\">\
                    Se connecter\
                </a>\
            </form>\
        </div>\
        </body>\
    ");
}
void body__sing(){
    printf("\
        <body>\
        <div class=\"login-box\">\
            <h2>Singin</h2>\
            <form>\
                <div class=\"user-box\">\
                    <input type=\"text\" name=\"\" required=\"\">\
                    <label>Username</label>\
                </div>\
                <div class=\"user-box\">\
                    <input type=\"password\" name=\"\" required=\"\">\
                    <label>Password</label>\
                </div>\
                <div class=\"user-box\">\
                    <input type=\"password\" name=\"\" required=\"\">\
                    <label>Verify</label>\
                </div>\
                <a href=\"#\">\
                    Se connecter\
                </a>\
            </form>\
        </div>\
        </body>\
    ");
}