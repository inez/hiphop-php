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

#ifndef __GENERATED_cls_SplFileObject_h54740373__
#define __GENERATED_cls_SplFileObject_h54740373__

#include <cls/SplFileObject.fw.h>
#include <cls/SplFileInfo.h>
#include <cls/RecursiveIterator.h>
#include <cls/Traversable.h>
#include <cls/SeekableIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/splfile.php line 384 */
FORWARD_DECLARE_CLASS(SplFileObject);
class c_SplFileObject : public c_SplFileInfo {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(SplFileObject, SplFileObject)
  DECLARE_INVOKE_EX(SplFileObject, SplFileObject, SplFileInfo)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_SplFileObject 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_SplFileObject 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_SplFileObject 1
  static Variant os_constant(const char *s);

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_SplFileObject 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_SplFileObject 1
  virtual Variant *o_realProp(CStrRef s, int flags,
                              CStrRef context = null_string) const;
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_SplFileObject 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_SplFileObject 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_SplFileObject 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: void t___construct(Variant v_filename, Variant v_open_mode = NAMSTR(s_sys_ss0d42ecf6, "r"), Variant v_use_include_path = false, Variant v_context = null);
  public: c_SplFileObject *create(Variant v_filename, Variant v_open_mode = NAMSTR(s_sys_ss0d42ecf6, "r"), Variant v_use_include_path = false, Variant v_context = null);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_current();
  public: bool t_eof();
  public: bool t_fflush();
  public: String t_fgetc();
  public: Variant t_fgetcsv(CVarRef v_delimiter = NAMSTR(s_sys_ssd332baa7, ","), CVarRef v_enclosure = NAMSTR(s_sys_ss7e5fc106, "\""), CVarRef v_escape = NAMSTR(s_sys_ssd59e789f, "\\"));
  public: String t_fgets();
  public: String t_fgetss(CVarRef v_allowable_tags);
  public: bool t_flock(CVarRef v_operation, Variant v_wouldblock);
  public: int64 t_fpassthru();
  public: Variant t_fscanf(int num_args, CVarRef v_format, Array args = Array());
  public: int64 t_fseek(CVarRef v_offset, CVarRef v_whence);
  public: Variant t_fstat();
  public: int64 t_ftell();
  public: bool t_ftruncate(CVarRef v_size);
  public: int64 t_fwrite(CVarRef v_str, CVarRef v_length);
  public: Variant t_getchildren();
  public: Variant t_getcsvcontrol();
  public: int64 t_getflags();
  public: int64 t_getmaxlinelen();
  public: bool t_haschildren();
  public: int64 t_key();
  public: void t_next();
  public: void t_rewind();
  public: void t_seek(CVarRef v_line_pos);
  public: void t_setcsvcontrol(CVarRef v_delimiter = NAMSTR(s_sys_ssd332baa7, ","), CVarRef v_enclosure = NAMSTR(s_sys_ss7e5fc106, "\""), CVarRef v_escape = NAMSTR(s_sys_ssd59e789f, "\\"));
  public: void t_setflags(CVarRef v_flags);
  public: void t_setmaxlinelen(CVarRef v_max_len);
  public: bool t_valid();
  DECLARE_METHOD_INVOKE_HELPERS(fscanf);
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(fseek);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(fgetss);
  DECLARE_METHOD_INVOKE_HELPERS(fgetcsv);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(setcsvcontrol);
  DECLARE_METHOD_INVOKE_HELPERS(getcsvcontrol);
  DECLARE_METHOD_INVOKE_HELPERS(setflags);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(setmaxlinelen);
  DECLARE_METHOD_INVOKE_HELPERS(getmaxlinelen);
  DECLARE_METHOD_INVOKE_HELPERS(ftruncate);
  DECLARE_METHOD_INVOKE_HELPERS(fflush);
  DECLARE_METHOD_INVOKE_HELPERS(eof);
  DECLARE_METHOD_INVOKE_HELPERS(fgetc);
  DECLARE_METHOD_INVOKE_HELPERS(fpassthru);
  DECLARE_METHOD_INVOKE_HELPERS(haschildren);
  DECLARE_METHOD_INVOKE_HELPERS(fgets);
  DECLARE_METHOD_INVOKE_HELPERS(seek);
  DECLARE_METHOD_INVOKE_HELPERS(flock);
  DECLARE_METHOD_INVOKE_HELPERS(getflags);
  DECLARE_METHOD_INVOKE_HELPERS(getchildren);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(fwrite);
  DECLARE_METHOD_INVOKE_HELPERS(ftell);
  DECLARE_METHOD_INVOKE_HELPERS(fstat);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
extern const int64 q_SplFileObject_DROP_NEW_LINE;
extern const int64 q_SplFileObject_READ_AHEAD;
extern const int64 q_SplFileObject_SKIP_EMPTY;
extern const int64 q_SplFileObject_READ_CSV;
extern struct ObjectStaticCallbacks cw_SplFileObject;
Object co_SplFileObject(CArrRef params, bool init = true);
Object coo_SplFileObject();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_SplFileObject_h54740373__
