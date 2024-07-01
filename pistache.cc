#include <pistache/endpoint.h>
#include <iostream>

using namespace Pistache;

class MyHandler : public Http::Handler {
public:
    HTTP_PROTOTYPE(MyHandler)

    void onRequest(const Http::Request& request, Http::ResponseWriter response) override {
        response.send(Http::Code::Ok, "Hello, Pistache!");
    }
};

int main() {
    Http::listenAndServe<MyHandler>("*:8080");

    return 0;
}
