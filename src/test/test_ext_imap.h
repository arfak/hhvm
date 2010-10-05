/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
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

#ifndef __TEST_EXT_IMAP_H__
#define __TEST_EXT_IMAP_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtImap : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_imap_8bit();
  bool test_imap_alerts();
  bool test_imap_append();
  bool test_imap_base64();
  bool test_imap_binary();
  bool test_imap_body();
  bool test_imap_bodystruct();
  bool test_imap_check();
  bool test_imap_clearflag_full();
  bool test_imap_close();
  bool test_imap_createmailbox();
  bool test_imap_delete();
  bool test_imap_deletemailbox();
  bool test_imap_errors();
  bool test_imap_expunge();
  bool test_imap_fetch_overview();
  bool test_imap_fetchbody();
  bool test_imap_fetchheader();
  bool test_imap_fetchstructure();
  bool test_imap_gc();
  bool test_imap_get_quota();
  bool test_imap_get_quotaroot();
  bool test_imap_getacl();
  bool test_imap_getmailboxes();
  bool test_imap_getsubscribed();
  bool test_imap_header();
  bool test_imap_headerinfo();
  bool test_imap_headers();
  bool test_imap_last_error();
  bool test_imap_list();
  bool test_imap_listmailbox();
  bool test_imap_listscan();
  bool test_imap_listsubscribed();
  bool test_imap_lsub();
  bool test_imap_mail_compose();
  bool test_imap_mail_copy();
  bool test_imap_mail_move();
  bool test_imap_mail();
  bool test_imap_mailboxmsginfo();
  bool test_imap_mime_header_decode();
  bool test_imap_msgno();
  bool test_imap_num_msg();
  bool test_imap_num_recent();
  bool test_imap_open();
  bool test_imap_ping();
  bool test_imap_qprint();
  bool test_imap_renamemailbox();
  bool test_imap_reopen();
  bool test_imap_rfc822_parse_adrlist();
  bool test_imap_rfc822_parse_headers();
  bool test_imap_rfc822_write_address();
  bool test_imap_savebody();
  bool test_imap_scanmailbox();
  bool test_imap_search();
  bool test_imap_set_quota();
  bool test_imap_setacl();
  bool test_imap_setflag_full();
  bool test_imap_sort();
  bool test_imap_status();
  bool test_imap_subscribe();
  bool test_imap_thread();
  bool test_imap_timeout();
  bool test_imap_uid();
  bool test_imap_undelete();
  bool test_imap_unsubscribe();
  bool test_imap_utf7_decode();
  bool test_imap_utf7_encode();
  bool test_imap_utf8();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_IMAP_H__
