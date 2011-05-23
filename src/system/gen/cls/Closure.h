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

#ifndef __GENERATED_cls_Closure_hc5059823__
#define __GENERATED_cls_Closure_hc5059823__

#include <cls/Closure.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/closure.php line 6 */
FORWARD_DECLARE_CLASS(Closure);
class c_Closure : public ExtObjectData {
  public:

  // Properties
  Variant m_func;
  Variant m_vars;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(Closure, Closure)
  DECLARE_INVOKE_EX(Closure, Closure, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_Closure 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_Closure 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_Closure 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props, bool pubOnly = false) const;
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_Closure 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_Closure 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_Closure 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_Closure 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: void t___construct(Variant v_func, Variant v_vars);
  public: c_Closure *create(CVarRef v_func, CVarRef v_vars);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: String t___tostring();
  public: Variant t_getvars();
  public: void t_setvars(Variant v_vars);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(getvars);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(setvars);
};
extern struct ObjectStaticCallbacks cw_Closure;
Object co_Closure(CArrRef params, bool init = true) NEVER_INLINE;
Object coo_Closure() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Closure_hc5059823__
