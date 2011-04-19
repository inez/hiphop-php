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

#ifndef __SWITCH_STATEMENT_H__
#define __SWITCH_STATEMENT_H__

#include <compiler/statement/statement.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

DECLARE_BOOST_TYPES(StatementList);
DECLARE_BOOST_TYPES(SwitchStatement);

class SwitchStatement : public Statement {
public:
  SwitchStatement(STATEMENT_CONSTRUCTOR_PARAMETERS,
                  ExpressionPtr exp, StatementListPtr cases);

  DECLARE_STATEMENT_VIRTUAL_FUNCTIONS;
  virtual bool hasDecl() const;
  virtual bool hasRetExp() const;
  virtual int getRecursiveCount() const;

  ExpressionPtr getExp() const { return m_exp; }
  StatementListPtr getCases() const { return m_cases; }
private:
  ExpressionPtr m_exp;
  StatementListPtr m_cases;
};

///////////////////////////////////////////////////////////////////////////////
}
#endif // __SWITCH_STATEMENT_H__
