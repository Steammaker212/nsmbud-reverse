/* sub_60452EDC
 * address: 0x60452EDC   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60452EDC(int a1)
{
  char v1; // r12
  int result; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r0
  _BYTE *v7; // r1
  int v8; // r0
  _BYTE v9[24]; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 1320) = 0;
  if ( FIELD_U8(a1, 1394) )
  {
    FIELD_U8(a1, 1394) = 0;
    result = FIELD_U8(a1, 1393);
    FIELD_U8(a1, 1392) = result;
  }
  else
  {
    v4 = FIELD_U32(dword_60C995D0, 32);
    if ( ((unsigned int)dword_60C8DC30 & ~(1615146800 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8DC30) )
    {
      dword_60C8DC2C = (int)&off_60BD94B0;
      _cxa_guard_release(dword_60C8DC30);
    }
    if ( v4 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8DC2C) )
      goto LABEL_18;
    if ( ((unsigned int)&dword_60C8DC28 & ~(1615146916 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC28) )
    {
      dword_60C8DC24 = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C8DC28);
    }
    if ( v4 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8DC24) )
      goto LABEL_18;
    if ( ((unsigned int)&dword_60C995C8 & ~(1615147032 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C995C8) )
    {
      dword_60C995C4 = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C995C8);
    }
    if ( v4 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C995C4) == 1 )
    {
LABEL_18:
      FIELD_U32(a1, 1284) = FIELD_U32(a1, 20);
      FIELD_U32(a1, 1288) = FIELD_U32(a1, 332);
      FIELD_U32(a1, 1292) = FIELD_U32(a1, 644);
      FIELD_U32(a1, 1296) = FIELD_U32(a1, 956);
    }
    v5 = FIELD_U32(a1, 1316);
    if ( v5 == 2 )
    {
      v8 = FIELD_U32(a1, 1388);
      if ( FIELD_U8(v8, 208) )
      {
        sub_60454858(a1, v9);
        sub_60454B60(a1, FIELD_U32(a1, 1388) + 212, v9);
        v8 = FIELD_U32(a1, 1388);
      }
      sub_604564D4(v8);
    }
    else if ( v5 == 1 )
    {
      sub_60456458(FIELD_U32(a1, 1388), 0, FIELD_U8(a1, 326));
      sub_60456458(FIELD_U32(a1, 1388), 1, FIELD_U8(a1, 638));
      sub_60456458(FIELD_U32(a1, 1388), 2, FIELD_U8(a1, 950));
      sub_60456458(FIELD_U32(a1, 1388), 3, FIELD_U8(a1, 1262));
      if ( (FIELD_U8(dword_60C99DD4, 1052) & 0xF) != 0 )
      {
        v6 = FIELD_U32(a1, 1388);
        v7 = 0;
      }
      else
      {
        sub_60454858(a1, v9);
        v6 = FIELD_U32(a1, 1388);
        v7 = v9;
      }
      sub_604564E0(v6, v7);
    }
    FIELD_U8(a1, 1392) = FIELD_U8(a1, 1393);
    result = FIELD_U32(dword_60C99DD4, 764);
    if ( result == 3 )
      return sub_604AEEF8(a1 + 1444);
  }
  return result;
}
