/* sub_601E9FA0
 * address: 0x601E9FA0   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E9FA0()
{
  int (__fastcall ***v0)(_DWORD, int *); // r4
  char v1; // r12
  int v2; // r6
  int result; // r0
  unsigned int v4; // r1
  _DWORD v5[20]; // [sp+0h] [bp-108h] BYREF
  _DWORD v6[20]; // [sp+50h] [bp-B8h] BYREF
  _DWORD v7[26]; // [sp+A0h] [bp-68h] BYREF

  v6[0] = 0;
  memset(&v6[2], 0, 72);
  sub_601905DC(v6);
  v6[0] = 60;
  v6[1] = sub_601916C8(dword_60C8996C, 60);
  v0 = *(int (__fastcall ****)(_DWORD, int *))sub_601693A0(878);
  if ( ((unsigned int)&dword_60C8AF50 & ~(1612619788 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF50) )
  {
    dword_60C8AF4C = (int)&off_60BD6B64;
    _cxa_guard_release(&dword_60C8AF50);
  }
  v2 = (int)(v0 + 2);
  if ( !(**v0)(v0, &dword_60C8AF4C) )
    v2 = 8;
  v6[4] = *(_DWORD *)v2;
  sub_60191160((_DWORD *)dword_60C8996C, v6);
  v5[0] = 0;
  memset(&v5[2], 0, 72);
  sub_601905DC(v5);
  v5[0] = 61;
  v5[1] = sub_601916C8(dword_60C8996C, 61);
  sub_60191160((_DWORD *)dword_60C8996C, v5);
  result = dword_60CC6D78;
  v4 = FIELD_U32(dword_60CC6D78, 452);
  if ( v4 <= 5 && ((1 << v4) & 0x2C) != 0 )
  {
    result = FIELD_U8(dword_60CC6D78, 521);
    if ( (result & 1) == 0 )
    {
      v7[0] = 0;
      memset(&v7[2], 0, 72);
      sub_601905DC(v7);
      v7[0] = 4;
      v7[1] = sub_601916C8(dword_60C8996C, 4);
      return sub_60191160((_DWORD *)dword_60C8996C, v7);
    }
  }
  return result;
}
