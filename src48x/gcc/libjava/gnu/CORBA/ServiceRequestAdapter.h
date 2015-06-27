
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_CORBA_ServiceRequestAdapter__
#define __gnu_CORBA_ServiceRequestAdapter__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace CORBA
    {
      namespace CDR
      {
          class BufferedCdrOutput;
      }
        class ServiceRequestAdapter;
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class ServerRequest;
        namespace portable
        {
            class InvokeHandler;
            class OutputStream;
            class Streamable;
        }
      }
    }
  }
}

class gnu::CORBA::ServiceRequestAdapter : public ::java::lang::Object
{

public:
  ServiceRequestAdapter();
  virtual ::org::omg::CORBA::portable::OutputStream * createExceptionReply();
  virtual ::org::omg::CORBA::portable::OutputStream * createReply();
  static void invoke(::org::omg::CORBA::ServerRequest *, ::org::omg::CORBA::portable::InvokeHandler *, ::org::omg::CORBA::portable::Streamable *);
public: // actually package-private
  ::gnu::CORBA::CDR::BufferedCdrOutput * __attribute__((aligned(__alignof__( ::java::lang::Object)))) reply;
  jboolean isException;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_CORBA_ServiceRequestAdapter__