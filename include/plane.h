#include <iostream>
#include <vector>

namespace airways_management_system {
namespace plane {
// class Plane declaration
template<typename T>
class Plane {
 public:
  Plane();
  ~Plane();
 
 protected:
  vector<vector<T>> seats;

 private:

};

namespace p62 {
// class P62 plane declaration
template<typename T>
class P62 : public Plane {
 public:
  P62();
  ~P62();

 protected:
 private:
};
} // namespace p62

namespace p124 {
// class P124 plane declaration
template<typename T>
class P124 : public Plane {
 public:
  P124();
  ~P124();

 protected:
 private:
};
} // namespace p124
} // namespace plane
} // namespace airways_management_system