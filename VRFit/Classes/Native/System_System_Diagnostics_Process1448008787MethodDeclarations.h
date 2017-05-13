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

// System.Diagnostics.Process
struct Process_t1448008787;
// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t2360341767;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t2898458543;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "System_System_Diagnostics_ProcessStartInfo2898458543.h"
#include "System_System_Diagnostics_Process_ProcInfo2768253291.h"
#include "System_System_Diagnostics_Process1448008787.h"

// System.Void System.Diagnostics.Process::.ctor(System.IntPtr,System.Int32)
extern "C"  void Process__ctor_m3799318603 (Process_t1448008787 * __this, IntPtr_t ___handle0, int32_t ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::.ctor()
extern "C"  void Process__ctor_m699031546 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::StartExitCallbackIfNeeded()
extern "C"  void Process_StartExitCallbackIfNeeded_m699433821 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::ExitCode_internal(System.IntPtr)
extern "C"  int32_t Process_ExitCode_internal_m897133621 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::get_ExitCode()
extern "C"  int32_t Process_get_ExitCode_m1259516068 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::get_Handle()
extern "C"  IntPtr_t Process_get_Handle_m2513047878 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::get_HasExited()
extern "C"  bool Process_get_HasExited_m594007172 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::ProcessName_internal(System.IntPtr)
extern "C"  String_t* Process_ProcessName_internal_m1039003583 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::get_ProcessName()
extern "C"  String_t* Process_get_ProcessName_m3686384208 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.Diagnostics.Process::get_StandardError()
extern "C"  StreamReader_t2360341767 * Process_get_StandardError_m221148315 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::set_StartInfo(System.Diagnostics.ProcessStartInfo)
extern "C"  void Process_set_StartInfo_m364158131 (Process_t1448008787 * __this, ProcessStartInfo_t2898458543 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Close()
extern "C"  void Process_Close_m2239215458 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.Process::GetProcess_internal(System.Int32)
extern "C"  IntPtr_t Process_GetProcess_internal_m4174933821 (Il2CppObject * __this /* static, unused */, int32_t ___pid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Process::GetPid_internal()
extern "C"  int32_t Process_GetPid_internal_m3394558829 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Process System.Diagnostics.Process::GetCurrentProcess()
extern "C"  Process_t1448008787 * Process_GetCurrentProcess_m4130149489 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::ShellExecuteEx_internal(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process/ProcInfo&)
extern "C"  bool Process_ShellExecuteEx_internal_m3861007171 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t2898458543 * ___startInfo0, ProcInfo_t2768253291 * ___proc_info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::CreateProcess_internal(System.Diagnostics.ProcessStartInfo,System.IntPtr,System.IntPtr,System.IntPtr,System.Diagnostics.Process/ProcInfo&)
extern "C"  bool Process_CreateProcess_internal_m4040694912 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t2898458543 * ___startInfo0, IntPtr_t ___stdin1, IntPtr_t ___stdout2, IntPtr_t ___stderr3, ProcInfo_t2768253291 * ___proc_info4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_shell(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C"  bool Process_Start_shell_m2697181147 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t2898458543 * ___startInfo0, Process_t1448008787 * ___process1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_noshell(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C"  bool Process_Start_noshell_m3985802398 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t2898458543 * ___startInfo0, Process_t1448008787 * ___process1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::FillUserInfo(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process/ProcInfo&)
extern "C"  void Process_FillUserInfo_m211202799 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t2898458543 * ___startInfo0, ProcInfo_t2768253291 * ___proc_info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start_common(System.Diagnostics.ProcessStartInfo,System.Diagnostics.Process)
extern "C"  bool Process_Start_common_m1560272704 (Il2CppObject * __this /* static, unused */, ProcessStartInfo_t2898458543 * ___startInfo0, Process_t1448008787 * ___process1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::Start()
extern "C"  bool Process_Start_m2737551206 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Process::ToString()
extern "C"  String_t* Process_ToString_m1767783507 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForExit_internal(System.IntPtr,System.Int32)
extern "C"  bool Process_WaitForExit_internal_m3200785403 (Process_t1448008787 * __this, IntPtr_t ___handle0, int32_t ___ms1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::WaitForExit()
extern "C"  void Process_WaitForExit_m1494961306 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::WaitForExit(System.Int32)
extern "C"  bool Process_WaitForExit_m1230126717 (Process_t1448008787 * __this, int32_t ___milliseconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Process_free_internal(System.IntPtr)
extern "C"  void Process_Process_free_internal_m3645095280 (Process_t1448008787 * __this, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Dispose(System.Boolean)
extern "C"  void Process_Dispose_m1604404126 (Process_t1448008787 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process::Finalize()
extern "C"  void Process_Finalize_m1743308782 (Process_t1448008787 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process::get_IsWindows()
extern "C"  bool Process_get_IsWindows_m3314392332 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
