#include <iostream>
#include <memory>

struct destination {};             // represents twhat we are connectiong to
struct connection {};              // information needed to use the connection
connection connect(destination *); // open the connection
void disconnect(connection);       // close the given connection
void end_connection(connection *c) { disconnect(*c); }
void f(destination &d) {
    connection c = connect(&d);
    std::shared_ptr<connection> sc (&c, end_connection);

}


int main(int argc, char *argv[]) {
    return 0;
}
