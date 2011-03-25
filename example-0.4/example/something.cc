#include "example/something.h"
#include "config.h"

namespace example
{

Something::Something()
{
}

Something::~Something()
{
}

void Something::doSomething()
{
  m_Sub.doSomethingElse();
}

} //namespace
