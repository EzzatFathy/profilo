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
#ifndef __LINUX_USB_GADGETFS_H
#define __LINUX_USB_GADGETFS_H
#define _LINUX_USB_GADGETFS_H
#define _LINUX_USB_GADGETFS_H_
#define _UAPI_LINUX_USB_GADGETFS_H
#define _UAPI_LINUX_USB_GADGETFS_H_
#define NDK_ANDROID_SUPPORT__LINUX_USB_GADGETFS_H
#define NDK_ANDROID_SUPPORT__LINUX_USB_GADGETFS_H_
#define NDK_ANDROID_SUPPORT_UAPI__LINUX_USB_GADGETFS_H
#define NDK_ANDROID_SUPPORT_UAPI__LINUX_USB_GADGETFS_H_
#define _UAPI__LINUX_USB_GADGETFS_H
#define _UAPI__LINUX_USB_GADGETFS_H_
#define __LINUX_USB_GADGETFS_H_
#include <museum/8.1.0/bionic/libc/linux/types.h>
#include <museum/8.1.0/bionic/libc/linux/ioctl.h>
#include <museum/8.1.0/bionic/libc/linux/usb/ch9.h>
enum usb_gadgetfs_event_type {
  GADGETFS_NOP = 0,
  GADGETFS_CONNECT,
  GADGETFS_DISCONNECT,
  GADGETFS_SETUP,
  GADGETFS_SUSPEND,
};
struct usb_gadgetfs_event {
  union {
    enum usb_device_speed speed;
    struct usb_ctrlrequest setup;
  } u;
  enum usb_gadgetfs_event_type type;
};
#define GADGETFS_FIFO_STATUS _IO('g', 1)
#define GADGETFS_FIFO_FLUSH _IO('g', 2)
#define GADGETFS_CLEAR_HALT _IO('g', 3)
#endif
