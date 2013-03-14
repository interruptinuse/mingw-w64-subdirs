/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#define __CRT__NO_INLINE
#include <sys/stat.h>

#undef _stati64
#if !defined(_USE_32BIT_TIME_T)
int __cdecl
_stati64(const char *_Name,struct _stat64 *_Stat);
int __cdecl
_stati64(const char *_Name,struct _stat64 *_Stat)
{
  return _stat64(_Name, _Stat);
}
int (*__MINGW_IMP_SYMBOL(_stati64))(const char *, struct _stat64 *) = &_stati64;
#else
int __cdecl
_stati64(const char *_Name,struct _stat32i64 *_Stat);
int __cdecl
_stati64(const char *_Name,struct _stat32i64 *_Stat)
{
  struct _stat32 st;
  int ret=_stat32(_Name,&st);
  if (ret == -1) {
    memset(_Stat,0,sizeof(struct _stat32i64));
    return -1;
  }
  _Stat->st_dev=st.st_dev;
  _Stat->st_ino=st.st_ino;
  _Stat->st_mode=st.st_mode;
  _Stat->st_nlink=st.st_nlink;
  _Stat->st_uid=st.st_uid;
  _Stat->st_gid=st.st_gid;
  _Stat->st_rdev=st.st_rdev;
  _Stat->st_size=(_off_t) st.st_size;
  _Stat->st_atime=st.st_atime;
  _Stat->st_mtime=st.st_mtime;
  _Stat->st_ctime=st.st_ctime;
  return ret;
}
int (*__MINGW_IMP_SYMBOL(_stati64))(const char *, struct _stat32i64 *) = &_stati64;
#endif
