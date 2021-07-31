#ifndef __FILA__
#define __FILA__
#include "Lista.hpp"
template <typename T> class Fila : public List<T> {
public:
  Fila();
  void pop() override;
};
#include "Fila.cpp"
#endif
