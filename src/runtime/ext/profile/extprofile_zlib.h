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

#ifndef __EXTPROFILE_ZLIB_H__
#define __EXTPROFILE_ZLIB_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_zlib.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Variant x_readgzfile(CStrRef filename, bool use_include_path = false) {
  FUNCTION_INJECTION_BUILTIN(readgzfile);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_readgzfile(filename, use_include_path);
}

inline Variant x_gzfile(CStrRef filename, bool use_include_path = false) {
  FUNCTION_INJECTION_BUILTIN(gzfile);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzfile(filename, use_include_path);
}

inline Variant x_gzcompress(CStrRef data, int level = -1) {
  FUNCTION_INJECTION_BUILTIN(gzcompress);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzcompress(data, level);
}

inline Variant x_gzuncompress(CStrRef data, int limit = 0) {
  FUNCTION_INJECTION_BUILTIN(gzuncompress);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzuncompress(data, limit);
}

inline Variant x_gzdeflate(CStrRef data, int level = -1) {
  FUNCTION_INJECTION_BUILTIN(gzdeflate);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzdeflate(data, level);
}

inline Variant x_gzinflate(CStrRef data, int limit = 0) {
  FUNCTION_INJECTION_BUILTIN(gzinflate);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzinflate(data, limit);
}

inline Variant x_gzencode(CStrRef data, int level = -1, int encoding_mode = k_FORCE_GZIP) {
  FUNCTION_INJECTION_BUILTIN(gzencode);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzencode(data, level, encoding_mode);
}

inline Variant x_gzdecode(CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(gzdecode);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzdecode(data);
}

inline String x_zlib_get_coding_type() {
  FUNCTION_INJECTION_BUILTIN(zlib_get_coding_type);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_zlib_get_coding_type();
}

inline Object x_gzopen(CStrRef filename, CStrRef mode, bool use_include_path = false) {
  FUNCTION_INJECTION_BUILTIN(gzopen);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzopen(filename, mode, use_include_path);
}

inline bool x_gzclose(CObjRef zp) {
  FUNCTION_INJECTION_BUILTIN(gzclose);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzclose(zp);
}

inline bool x_gzrewind(CObjRef zp) {
  FUNCTION_INJECTION_BUILTIN(gzrewind);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzrewind(zp);
}

inline bool x_gzeof(CObjRef zp) {
  FUNCTION_INJECTION_BUILTIN(gzeof);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzeof(zp);
}

inline Variant x_gzgetc(CObjRef zp) {
  FUNCTION_INJECTION_BUILTIN(gzgetc);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzgetc(zp);
}

inline Variant x_gzgets(CObjRef zp, int64 length = 1024) {
  FUNCTION_INJECTION_BUILTIN(gzgets);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzgets(zp, length);
}

inline Variant x_gzgetss(CObjRef zp, int64 length = 0, CStrRef allowable_tags = null_string) {
  FUNCTION_INJECTION_BUILTIN(gzgetss);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzgetss(zp, length, allowable_tags);
}

inline Variant x_gzread(CObjRef zp, int64 length = 0) {
  FUNCTION_INJECTION_BUILTIN(gzread);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzread(zp, length);
}

inline Variant x_gzpassthru(CObjRef zp) {
  FUNCTION_INJECTION_BUILTIN(gzpassthru);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzpassthru(zp);
}

inline Variant x_gzseek(CObjRef zp, int64 offset, int64 whence = k_SEEK_SET) {
  FUNCTION_INJECTION_BUILTIN(gzseek);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzseek(zp, offset, whence);
}

inline Variant x_gztell(CObjRef zp) {
  FUNCTION_INJECTION_BUILTIN(gztell);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gztell(zp);
}

inline Variant x_gzwrite(CObjRef zp, CStrRef str, int64 length = 0) {
  FUNCTION_INJECTION_BUILTIN(gzwrite);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzwrite(zp, str, length);
}

inline Variant x_gzputs(CObjRef zp, CStrRef str, int64 length = 0) {
  FUNCTION_INJECTION_BUILTIN(gzputs);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_gzputs(zp, str, length);
}

inline Variant x_qlzcompress(CStrRef data, int level = 1) {
  FUNCTION_INJECTION_BUILTIN(qlzcompress);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_qlzcompress(data, level);
}

inline Variant x_qlzuncompress(CStrRef data, int level = 1) {
  FUNCTION_INJECTION_BUILTIN(qlzuncompress);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_qlzuncompress(data, level);
}

inline Variant x_sncompress(CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(sncompress);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_sncompress(data);
}

inline Variant x_snuncompress(CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(snuncompress);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_snuncompress(data);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_ZLIB_H__
