/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _ARPT_MANGLE_H
#define _ARPT_MANGLE_H
#define ARPT_MANGLE_H
#define ARPT_MANGLE_H_
#define NDK_ANDROID_SUPPORT_ARPT_MANGLE_H
#define NDK_ANDROID_SUPPORT_ARPT_MANGLE_H_
#define NDK_ANDROID_SUPPORT_UAPI_ARPT_MANGLE_H
#define NDK_ANDROID_SUPPORT_UAPI_ARPT_MANGLE_H_
#define _UAPI_ARPT_MANGLE_H
#define _UAPI_ARPT_MANGLE_H_
#define _ARPT_MANGLE_H_
#include <museum/6.0.1/bionic/libc/linux/netfilter_arp/arp_tables.h>
#define ARPT_MANGLE_ADDR_LEN_MAX sizeof(struct in_addr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct arpt_mangle {
  char src_devaddr[ARPT_DEV_ADDR_LEN_MAX];
  char tgt_devaddr[ARPT_DEV_ADDR_LEN_MAX];
  union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    struct in_addr src_ip;
  } u_s;
  union {
    struct in_addr tgt_ip;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  } u_t;
  __u8 flags;
  int target;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARPT_MANGLE_SDEV 0x01
#define ARPT_MANGLE_TDEV 0x02
#define ARPT_MANGLE_SIP 0x04
#define ARPT_MANGLE_TIP 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARPT_MANGLE_MASK 0x0f
#endif
