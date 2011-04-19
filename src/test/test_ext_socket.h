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

#ifndef __TEST_EXT_SOCKET_H__
#define __TEST_EXT_SOCKET_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtSocket : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_socket_create();
  bool test_socket_create_listen();
  bool test_socket_create_pair();
  bool test_socket_get_option();
  bool test_socket_getpeername();
  bool test_socket_getsockname();
  bool test_socket_set_block();
  bool test_socket_set_nonblock();
  bool test_socket_set_option();
  bool test_socket_connect();
  bool test_socket_bind();
  bool test_socket_listen();
  bool test_socket_select();
  bool test_socket_server();
  bool test_socket_accept();
  bool test_socket_read();
  bool test_socket_write();
  bool test_socket_send();
  bool test_socket_sendto();
  bool test_socket_recv();
  bool test_socket_recvfrom();
  bool test_socket_shutdown();
  bool test_socket_close();
  bool test_socket_strerror();
  bool test_socket_last_error();
  bool test_socket_clear_error();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_SOCKET_H__
