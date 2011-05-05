/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_ReflectionFunction_hd66cb4e2__
#define __GENERATED_cls_ReflectionFunction_hd66cb4e2__

#include <cls/ReflectionFunction.fw.h>
#include <cls/ReflectionFunctionAbstract.h>
#include <cls/Reflector.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 461 */
FORWARD_DECLARE_CLASS(ReflectionFunction);
class c_ReflectionFunction : public c_ReflectionFunctionAbstract {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(ReflectionFunction, ReflectionFunction)
  DECLARE_INVOKE_EX(ReflectionFunction, ReflectionFunction, ReflectionFunctionAbstract)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_ReflectionFunction 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_ReflectionFunction 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_ReflectionFunction 1
  static Variant os_constant(const char *s);

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_ReflectionFunction 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_ReflectionFunction 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_ReflectionFunction 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_ReflectionFunction 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_ReflectionFunction 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_ReflectionFunction 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: void t___construct(Variant v_name);
  public: c_ReflectionFunction *create(CVarRef v_name);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: String t___tostring();
  public: static Variant ti_export(CStrRef cls, CVarRef v_name, CVarRef v_ret);
  public: Variant t_invoke(int num_args, Array args = Array());
  public: Variant t_invokeargs(CVarRef v_args);
  public: static Variant t_export(CVarRef v_name, CVarRef v_ret) { return ti_export(c_ReflectionFunction::s_class_name, v_name, v_ret); }
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(invokeargs);
  DECLARE_METHOD_INVOKE_HELPERS(export);
  DECLARE_METHOD_INVOKE_HELPERS(invoke);
};
extern const int64 q_ReflectionFunction_IS_DEPRECATED;
extern struct ObjectStaticCallbacks cw_ReflectionFunction;
Object co_ReflectionFunction(CArrRef params, bool init = true);
Object coo_ReflectionFunction();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionFunction_hd66cb4e2__
