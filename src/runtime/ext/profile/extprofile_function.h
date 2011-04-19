/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_FUNCTION_H__
#define __EXTPROFILE_FUNCTION_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_function.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Array x_get_defined_functions() {
  FUNCTION_INJECTION_BUILTIN(get_defined_functions);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_get_defined_functions();
}

inline bool x_function_exists(CStrRef function_name) {
  FUNCTION_INJECTION_BUILTIN(function_exists);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_function_exists(function_name);
}

inline bool x_is_callable(CVarRef v, bool syntax = false, CVarRef name = null) {
  FUNCTION_INJECTION_BUILTIN(is_callable);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_is_callable(v, syntax, name);
}

inline Variant x_call_user_func_array(CVarRef function, CArrRef params) {
  FUNCTION_NOPROFILE_BUILTIN(call_user_func_array);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_call_user_func_array(function, params);
}

inline Variant x_call_user_func(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_NOPROFILE_BUILTIN(call_user_func);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_call_user_func(_argc, function, _argv);
}

inline Object x_call_user_func_array_async(CVarRef function, CArrRef params) {
  FUNCTION_INJECTION_BUILTIN(call_user_func_array_async);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_call_user_func_array_async(function, params);
}

inline Object x_call_user_func_async(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(call_user_func_async);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_call_user_func_async(_argc, function, _argv);
}

inline Variant x_check_user_func_async(CVarRef handles, int timeout = -1) {
  FUNCTION_INJECTION_BUILTIN(check_user_func_async);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_check_user_func_async(handles, timeout);
}

inline Variant x_end_user_func_async(CObjRef handle, int default_strategy = k_GLOBAL_STATE_IGNORE, CVarRef additional_strategies = null) {
  FUNCTION_INJECTION_BUILTIN(end_user_func_async);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_end_user_func_async(handle, default_strategy, additional_strategies);
}

inline String x_call_user_func_serialized(CStrRef input) {
  FUNCTION_INJECTION_BUILTIN(call_user_func_serialized);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_call_user_func_serialized(input);
}

inline Variant x_call_user_func_array_rpc(CStrRef host, int port, CStrRef auth, int timeout, CVarRef function, CArrRef params) {
  FUNCTION_INJECTION_BUILTIN(call_user_func_array_rpc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_call_user_func_array_rpc(host, port, auth, timeout, function, params);
}

inline Variant x_call_user_func_rpc(int _argc, CStrRef host, int port, CStrRef auth, int timeout, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(call_user_func_rpc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_call_user_func_rpc(_argc, host, port, auth, timeout, function, _argv);
}

inline Variant x_forward_static_call_array(CVarRef function, CArrRef params) {
  FUNCTION_INJECTION_BUILTIN(forward_static_call_array);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_forward_static_call_array(function, params);
}

inline Variant x_forward_static_call(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(forward_static_call);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_forward_static_call(_argc, function, _argv);
}

inline String x_get_called_class() {
  FUNCTION_INJECTION_BUILTIN(get_called_class);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_get_called_class();
}

inline String x_create_function(CStrRef args, CStrRef code) {
  FUNCTION_INJECTION_BUILTIN(create_function);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_create_function(args, code);
}

inline Variant x_func_get_arg(int arg_num) {
  FUNCTION_INJECTION_BUILTIN(func_get_arg);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_func_get_arg(arg_num);
}

inline Array x_func_get_args() {
  FUNCTION_INJECTION_BUILTIN(func_get_args);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_func_get_args();
}

inline int x_func_num_args() {
  FUNCTION_INJECTION_BUILTIN(func_num_args);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_func_num_args();
}

inline void x_register_postsend_function(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(register_postsend_function);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  f_register_postsend_function(_argc, function, _argv);
}

inline void x_register_shutdown_function(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(register_shutdown_function);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  f_register_shutdown_function(_argc, function, _argv);
}

inline void x_register_cleanup_function(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(register_cleanup_function);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  f_register_cleanup_function(_argc, function, _argv);
}

inline bool x_register_tick_function(int _argc, CVarRef function, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(register_tick_function);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_register_tick_function(_argc, function, _argv);
}

inline void x_unregister_tick_function(CVarRef function_name) {
  FUNCTION_INJECTION_BUILTIN(unregister_tick_function);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  f_unregister_tick_function(function_name);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_FUNCTION_H__
