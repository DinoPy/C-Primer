#include <memory>

struct destination{};
struct connection{};
connection connect (destination &d);
void disconnect(connection);

void f (destination &d) {
    connection c = connect(d);
    std::shared_ptr<connection> sc (&c, [](connection *c) -> void {disconnect(*c);});
}
