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

#ifndef __EXT_PDO_H__
#define __EXT_PDO_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <runtime/ext/pdo_driver.h>
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Array f_pdo_drivers();
extern const int64 q_PDO_PARAM_BOOL;
extern const int64 q_PDO_PARAM_NULL;
extern const int64 q_PDO_PARAM_INT;
extern const int64 q_PDO_PARAM_STR;
extern const int64 q_PDO_PARAM_LOB;
extern const int64 q_PDO_PARAM_STMT;
extern const int64 q_PDO_PARAM_INPUT_OUTPUT;
extern const int64 q_PDO_PARAM_EVT_ALLOC;
extern const int64 q_PDO_PARAM_EVT_FREE;
extern const int64 q_PDO_PARAM_EVT_EXEC_PRE;
extern const int64 q_PDO_PARAM_EVT_EXEC_POST;
extern const int64 q_PDO_PARAM_EVT_FETCH_PRE;
extern const int64 q_PDO_PARAM_EVT_FETCH_POST;
extern const int64 q_PDO_PARAM_EVT_NORMALIZE;
extern const int64 q_PDO_FETCH_USE_DEFAULT;
extern const int64 q_PDO_FETCH_LAZY;
extern const int64 q_PDO_FETCH_ASSOC;
extern const int64 q_PDO_FETCH_NUM;
extern const int64 q_PDO_FETCH_BOTH;
extern const int64 q_PDO_FETCH_OBJ;
extern const int64 q_PDO_FETCH_BOUND;
extern const int64 q_PDO_FETCH_COLUMN;
extern const int64 q_PDO_FETCH_CLASS;
extern const int64 q_PDO_FETCH_INTO;
extern const int64 q_PDO_FETCH_FUNC;
extern const int64 q_PDO_FETCH_GROUP;
extern const int64 q_PDO_FETCH_UNIQUE;
extern const int64 q_PDO_FETCH_KEY_PAIR;
extern const int64 q_PDO_FETCH_CLASSTYPE;
extern const int64 q_PDO_FETCH_SERIALIZE;
extern const int64 q_PDO_FETCH_PROPS_LATE;
extern const int64 q_PDO_FETCH_NAMED;
extern const int64 q_PDO_ATTR_AUTOCOMMIT;
extern const int64 q_PDO_ATTR_PREFETCH;
extern const int64 q_PDO_ATTR_TIMEOUT;
extern const int64 q_PDO_ATTR_ERRMODE;
extern const int64 q_PDO_ATTR_SERVER_VERSION;
extern const int64 q_PDO_ATTR_CLIENT_VERSION;
extern const int64 q_PDO_ATTR_SERVER_INFO;
extern const int64 q_PDO_ATTR_CONNECTION_STATUS;
extern const int64 q_PDO_ATTR_CASE;
extern const int64 q_PDO_ATTR_CURSOR_NAME;
extern const int64 q_PDO_ATTR_CURSOR;
extern const int64 q_PDO_ATTR_ORACLE_NULLS;
extern const int64 q_PDO_ATTR_PERSISTENT;
extern const int64 q_PDO_ATTR_STATEMENT_CLASS;
extern const int64 q_PDO_ATTR_FETCH_TABLE_NAMES;
extern const int64 q_PDO_ATTR_FETCH_CATALOG_NAMES;
extern const int64 q_PDO_ATTR_DRIVER_NAME;
extern const int64 q_PDO_ATTR_STRINGIFY_FETCHES;
extern const int64 q_PDO_ATTR_MAX_COLUMN_LEN;
extern const int64 q_PDO_ATTR_EMULATE_PREPARES;
extern const int64 q_PDO_ATTR_DEFAULT_FETCH_MODE;
extern const int64 q_PDO_ERRMODE_SILENT;
extern const int64 q_PDO_ERRMODE_WARNING;
extern const int64 q_PDO_ERRMODE_EXCEPTION;
extern const int64 q_PDO_CASE_NATURAL;
extern const int64 q_PDO_CASE_LOWER;
extern const int64 q_PDO_CASE_UPPER;
extern const int64 q_PDO_NULL_NATURAL;
extern const int64 q_PDO_NULL_EMPTY_STRING;
extern const int64 q_PDO_NULL_TO_STRING;
extern const StaticString q_PDO_ERR_NONE;
extern const int64 q_PDO_FETCH_ORI_NEXT;
extern const int64 q_PDO_FETCH_ORI_PRIOR;
extern const int64 q_PDO_FETCH_ORI_FIRST;
extern const int64 q_PDO_FETCH_ORI_LAST;
extern const int64 q_PDO_FETCH_ORI_ABS;
extern const int64 q_PDO_FETCH_ORI_REL;
extern const int64 q_PDO_CURSOR_FWDONLY;
extern const int64 q_PDO_CURSOR_SCROLL;
extern const int64 q_PDO_MYSQL_ATTR_USE_BUFFERED_QUERY;
extern const int64 q_PDO_MYSQL_ATTR_LOCAL_INFILE;
extern const int64 q_PDO_MYSQL_ATTR_MAX_BUFFER_SIZE;
extern const int64 q_PDO_MYSQL_ATTR_INIT_COMMAND;
extern const int64 q_PDO_MYSQL_ATTR_READ_DEFAULT_FILE;
extern const int64 q_PDO_MYSQL_ATTR_READ_DEFAULT_GROUP;
extern const int64 q_PDO_MYSQL_ATTR_COMPRESS;
extern const int64 q_PDO_MYSQL_ATTR_DIRECT_QUERY;
extern const int64 q_PDO_MYSQL_ATTR_FOUND_ROWS;
extern const int64 q_PDO_MYSQL_ATTR_IGNORE_SPACE;

///////////////////////////////////////////////////////////////////////////////
// class PDO

FORWARD_DECLARE_CLASS(PDO);
class c_PDO : public ExtObjectData, public Sweepable {
 public:
  BEGIN_CLASS_MAP(PDO)
  END_CLASS_MAP(PDO)
  DECLARE_CLASS(PDO, PDO, ObjectData)

  // need to implement
  public: c_PDO();
  public: ~c_PDO();
  public: void t___construct(CStrRef dsn, CStrRef username = null_string, CStrRef password = null_string, CArrRef options = null_array);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t_prepare(CStrRef statement, CArrRef options = null_array);
  DECLARE_METHOD_INVOKE_HELPERS(prepare);
  public: bool t_begintransaction();
  DECLARE_METHOD_INVOKE_HELPERS(begintransaction);
  public: bool t_commit();
  DECLARE_METHOD_INVOKE_HELPERS(commit);
  public: bool t_rollback();
  DECLARE_METHOD_INVOKE_HELPERS(rollback);
  public: bool t_setattribute(int64 attribute, CVarRef value);
  DECLARE_METHOD_INVOKE_HELPERS(setattribute);
  public: Variant t_getattribute(int64 attribute);
  DECLARE_METHOD_INVOKE_HELPERS(getattribute);
  public: Variant t_exec(CStrRef query);
  DECLARE_METHOD_INVOKE_HELPERS(exec);
  public: Variant t_lastinsertid(CStrRef seqname = null_string);
  DECLARE_METHOD_INVOKE_HELPERS(lastinsertid);
  public: Variant t_errorcode();
  DECLARE_METHOD_INVOKE_HELPERS(errorcode);
  public: Array t_errorinfo();
  DECLARE_METHOD_INVOKE_HELPERS(errorinfo);
  public: Variant t_query(CStrRef sql);
  DECLARE_METHOD_INVOKE_HELPERS(query);
  public: Variant t_quote(CStrRef str, int64 paramtype = q_PDO_PARAM_STR);
  DECLARE_METHOD_INVOKE_HELPERS(quote);
  public: Variant t___wakeup();
  DECLARE_METHOD_INVOKE_HELPERS(__wakeup);
  public: Variant t___sleep();
  DECLARE_METHOD_INVOKE_HELPERS(__sleep);
  public: static Array ti_getavailabledrivers(const char* cls );
  public: static Array t_getavailabledrivers() {
    return ti_getavailabledrivers("pdo");
  }
  DECLARE_METHOD_INVOKE_HELPERS(getavailabledrivers);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_PDO *create(String dsn, String username = null_string, String password = null_string, Array options = null_array);
  public: void dynConstruct(CArrRef Params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env,
                                    const Eval::FunctionCallExpression *call);
  public: void getConstructor(MethodCallPackage &mcp);
  public: virtual void destruct();

  public: sp_PDOConnection m_dbh;
};

///////////////////////////////////////////////////////////////////////////////
// class PDOStatement

FORWARD_DECLARE_CLASS(PDOStatement);
class c_PDOStatement : public ExtObjectData, public Sweepable {
 public:
  BEGIN_CLASS_MAP(PDOStatement)
  PARENT_CLASS(Iterator)
  END_CLASS_MAP(PDOStatement)
  DECLARE_CLASS(PDOStatement, PDOStatement, ObjectData)

  // need to implement
  public: c_PDOStatement();
  public: ~c_PDOStatement();
  public: void t___construct();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t_execute(CArrRef params = null_array);
  DECLARE_METHOD_INVOKE_HELPERS(execute);
  public: Variant t_fetch(int64 how = 0, int64 orientation = q_PDO_FETCH_ORI_NEXT, int64 offset = 0);
  DECLARE_METHOD_INVOKE_HELPERS(fetch);
  public: Variant t_fetchobject(CStrRef class_name = null_string, CVarRef ctor_args = null);
  DECLARE_METHOD_INVOKE_HELPERS(fetchobject);
  public: Variant t_fetchcolumn(int64 column_numner = 0);
  DECLARE_METHOD_INVOKE_HELPERS(fetchcolumn);
  public: Variant t_fetchall(int64 how = 0, CVarRef class_name = null, CVarRef ctor_args = null);
  DECLARE_METHOD_INVOKE_HELPERS(fetchall);
  public: bool t_bindvalue(CVarRef paramno, CVarRef param, int64 type = q_PDO_PARAM_STR);
  DECLARE_METHOD_INVOKE_HELPERS(bindvalue);
  public: bool t_bindparam(CVarRef paramno, Variant param, int64 type = q_PDO_PARAM_STR, int64 max_value_len = 0, CVarRef driver_params = null);
  DECLARE_METHOD_INVOKE_HELPERS(bindparam);
  public: bool t_bindcolumn(CVarRef paramno, Variant param, int64 type = q_PDO_PARAM_STR, int64 max_value_len = 0, CVarRef driver_params = null);
  DECLARE_METHOD_INVOKE_HELPERS(bindcolumn);
  public: int64 t_rowcount();
  DECLARE_METHOD_INVOKE_HELPERS(rowcount);
  public: Variant t_errorcode();
  DECLARE_METHOD_INVOKE_HELPERS(errorcode);
  public: Array t_errorinfo();
  DECLARE_METHOD_INVOKE_HELPERS(errorinfo);
  public: Variant t_setattribute(int64 attribute, CVarRef value);
  DECLARE_METHOD_INVOKE_HELPERS(setattribute);
  public: Variant t_getattribute(int64 attribute);
  DECLARE_METHOD_INVOKE_HELPERS(getattribute);
  public: int64 t_columncount();
  DECLARE_METHOD_INVOKE_HELPERS(columncount);
  public: Variant t_getcolumnmeta(int64 column);
  DECLARE_METHOD_INVOKE_HELPERS(getcolumnmeta);
  public: bool t_setfetchmode(int _argc, int64 mode, CArrRef _argv = null_array);
  DECLARE_METHOD_INVOKE_HELPERS(setfetchmode);
  public: bool t_nextrowset();
  DECLARE_METHOD_INVOKE_HELPERS(nextrowset);
  public: bool t_closecursor();
  DECLARE_METHOD_INVOKE_HELPERS(closecursor);
  public: Variant t_debugdumpparams();
  DECLARE_METHOD_INVOKE_HELPERS(debugdumpparams);
  public: Variant t_current();
  DECLARE_METHOD_INVOKE_HELPERS(current);
  public: Variant t_key();
  DECLARE_METHOD_INVOKE_HELPERS(key);
  public: Variant t_next();
  DECLARE_METHOD_INVOKE_HELPERS(next);
  public: Variant t_rewind();
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
  public: Variant t_valid();
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  public: Variant t___wakeup();
  DECLARE_METHOD_INVOKE_HELPERS(__wakeup);
  public: Variant t___sleep();
  DECLARE_METHOD_INVOKE_HELPERS(__sleep);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_PDOStatement *create();
  public: void dynConstruct(CArrRef Params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env,
                                    const Eval::FunctionCallExpression *call);
  public: void getConstructor(MethodCallPackage &mcp);
  public: virtual void destruct();

  public: sp_PDOStatement m_stmt;
  public: Variant m_row;
  public: int m_rowIndex;
};

///////////////////////////////////////////////////////////////////////////////
// class PDOException

FORWARD_DECLARE_CLASS(PDOException);
class c_PDOException : public c_Exception {
 public:
  BEGIN_CLASS_MAP(PDOException)
  RECURSIVE_PARENT_CLASS(Exception)
  END_CLASS_MAP(PDOException)
  DECLARE_CLASS(PDOException, PDOException, Exception)

  // need to implement
  public: c_PDOException();
  public: ~c_PDOException();
  public: void t___construct();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_PDOException *create();
  public: void dynConstruct(CArrRef Params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env,
                                    const Eval::FunctionCallExpression *call);
  public: void getConstructor(MethodCallPackage &mcp);
  public: virtual void destruct();

};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_PDO_H__
