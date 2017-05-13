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

// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t2898458543;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1070889667;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Security.SecureString
struct SecureString_t412202620;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Diagnostics.ProcessStartInfo::.ctor(System.String,System.String)
extern "C"  void ProcessStartInfo__ctor_m1871457906 (ProcessStartInfo_t2898458543 * __this, String_t* ___filename0, String_t* ___arguments1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::.cctor()
extern "C"  void ProcessStartInfo__cctor_m1504406929 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Arguments()
extern "C"  String_t* ProcessStartInfo_get_Arguments_m489882538 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_CreateNoWindow(System.Boolean)
extern "C"  void ProcessStartInfo_set_CreateNoWindow_m2521430833 (ProcessStartInfo_t2898458543 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::get_EnvironmentVariables()
extern "C"  StringDictionary_t1070889667 * ProcessStartInfo_get_EnvironmentVariables_m1951117794 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_HaveEnvVars()
extern "C"  bool ProcessStartInfo_get_HaveEnvVars_m2491061480 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_FileName()
extern "C"  String_t* ProcessStartInfo_get_FileName_m1938564271 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardError()
extern "C"  bool ProcessStartInfo_get_RedirectStandardError_m1148175450 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardError(System.Boolean)
extern "C"  void ProcessStartInfo_set_RedirectStandardError_m871400493 (ProcessStartInfo_t2898458543 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardInput()
extern "C"  bool ProcessStartInfo_get_RedirectStandardInput_m2109075076 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardOutput()
extern "C"  bool ProcessStartInfo_get_RedirectStandardOutput_m2679469097 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardErrorEncoding()
extern "C"  Encoding_t663144255 * ProcessStartInfo_get_StandardErrorEncoding_m3411581875 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardOutputEncoding()
extern "C"  Encoding_t663144255 * ProcessStartInfo_get_StandardOutputEncoding_m3689615204 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_UseShellExecute()
extern "C"  bool ProcessStartInfo_get_UseShellExecute_m535858989 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_UseShellExecute(System.Boolean)
extern "C"  void ProcessStartInfo_set_UseShellExecute_m2714645304 (ProcessStartInfo_t2898458543 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_WorkingDirectory()
extern "C"  String_t* ProcessStartInfo_get_WorkingDirectory_m1101517058 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_LoadUserProfile()
extern "C"  bool ProcessStartInfo_get_LoadUserProfile_m2289204351 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_UserName()
extern "C"  String_t* ProcessStartInfo_get_UserName_m3407877920 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Domain()
extern "C"  String_t* ProcessStartInfo_get_Domain_m63575840 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecureString System.Diagnostics.ProcessStartInfo::get_Password()
extern "C"  SecureString_t412202620 * ProcessStartInfo_get_Password_m1386597298 (ProcessStartInfo_t2898458543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
