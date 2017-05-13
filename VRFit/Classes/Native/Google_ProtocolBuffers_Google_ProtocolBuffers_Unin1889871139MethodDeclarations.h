#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Google.ProtocolBuffers.UninitializedMessageException
struct UninitializedMessageException_t1889871139;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t1402851992;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t37028716;

#include "codegen/il2cpp-codegen.h"

// System.Void Google.ProtocolBuffers.UninitializedMessageException::.ctor(Google.ProtocolBuffers.IMessageLite)
extern "C"  void UninitializedMessageException__ctor_m1011334392 (UninitializedMessageException_t1889871139 * __this, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.UninitializedMessageException::AsInvalidProtocolBufferException()
extern "C"  InvalidProtocolBufferException_t37028716 * UninitializedMessageException_AsInvalidProtocolBufferException_m3724436475 (UninitializedMessageException_t1889871139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
