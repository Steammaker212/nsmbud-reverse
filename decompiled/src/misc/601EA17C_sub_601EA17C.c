/* sub_601EA17C
 * address: 0x601EA17C   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601EA17C()
{
  int (__fastcall ***v0)(_DWORD, int *); // r4
  char v1; // r12
  int v2; // r6
  int v3; // r5
  int (__fastcall ***v4)(_DWORD, int *); // r4
  char v5; // r12
  int result; // r0
  unsigned int v7; // r1
  _DWORD v8[20]; // [sp+0h] [bp-B0h] BYREF
  _DWORD v9[24]; // [sp+50h] [bp-60h] BYREF

  v8[0] = 0;
  memset(&v8[2], 0, 72);
  sub_601905DC(v8);
  v8[0] = 64;
  v8[1] = sub_601916C8(dword_60C8996C, 64);
  v0 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(878);
  if ( ((unsigned int)&dword_60C8AF50 & ~(1612620264 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF50) )
  {
    dword_60C8AF4C = (int)&off_60BD6B64;
    _cxa_guard_release(&dword_60C8AF50);
  }
  v2 = (int)(v0 + 2);
  v3 = 8;
  if ( !(**v0)(v0, &dword_60C8AF4C) )
    v2 = 8;
  v8[4] = *(_DWORD *)v2;
  v4 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(906);
  if ( ((unsigned int)dword_60C89C94 & ~(1612620408 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C89C94) )
  {
    dword_60C89C90 = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C89C94);
  }
  if ( (**v4)(v4, &dword_60C89C90) )
    v3 = (int)(v4 + 2);
  v8[5] = *(_DWORD *)v3;
  sub_60191160((_DWORD *)dword_60C8996C, v8);
  result = dword_60CC6D78;
  v7 = FIELD_U32(dword_60CC6D78, 452);
  if ( v7 <= 5 && ((1 << v7) & 0x2C) != 0 )
  {
    result = FIELD_U8(dword_60CC6D78, 521);
    if ( (result & 1) == 0 )
    {
      v9[0] = 0;
      memset(&v9[2], 0, 72);
      sub_601905DC(v9);
      v9[0] = 4;
      v9[1] = sub_601916C8(dword_60C8996C, 4);
      return sub_60191160((_DWORD *)dword_60C8996C, v9);
    }
  }
  return result;
}
