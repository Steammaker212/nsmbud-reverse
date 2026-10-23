/* sub_6084A20C
 * address: 0x6084A20C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084A20C(int a1, int a2, int *a3)
{
  char v3; // r12
  char v4; // lr
  int result; // r0
  int v9; // r1
  int v10; // r6
  int v11; // r2
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int v15; // r7
  int v16; // r1
  int v17; // r2
  int v18; // r1
  int v19; // r2
  int v20; // r1
  int v21; // r0
  _DWORD v22[34]; // [sp+0h] [bp-88h] BYREF

  if ( ((unsigned int)&dword_60CC7E70 & ~(1619305008 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC7E70) )
  {
    dword_60CC7E88 = 0;
    dword_60CC7E84 = 0;
    dword_60CC7E80 = 0;
    dword_60CC7E7C = 0;
    dword_60CC7E78 = 0;
    dword_60CC7E74 = 0;
    byte_60CC7EAC = -1;
    byte_60CC7ED0 = -1;
    dword_60CC7ED4 = 0;
    dword_60CC7E8C = 0;
    dword_60CC7E9C = 1065353216;
    dword_60CC7EB0 = 0;
    dword_60CC7EC0 = 1065353216;
    dword_60CC7E90 = 0;
    dword_60CC7EA0 = 1065353216;
    dword_60CC7EB4 = 0;
    dword_60CC7EC4 = 1065353216;
    dword_60CC7E94 = 0;
    dword_60CC7EA4 = 1065353216;
    dword_60CC7EB8 = 0;
    dword_60CC7EC8 = 1065353216;
    dword_60CC7E98 = 0;
    dword_60CC7EA8 = 1065353216;
    dword_60CC7EBC = 0;
    dword_60CC7ECC = 1065353216;
    _cxa_guard_release(&dword_60CC7E70);
  }
  result = FIELD_U32(a1, 128);
  if ( result && FIELD_S32(a1, 112) >= 1 )
  {
    if ( !a3 )
      a3 = &dword_60CC7E74;
    v9 = FIELD_U32(result, 16);
    v10 = (v9 + 127) & -v9;
    v11 = (v9 + (v10 << FIELD_U8(a1, 133)) - 1) & -v9;
    if ( (*(_BYTE *)result & 1) != 0 )
    {
      v13 = FIELD_U32(result, 36);
      do
        v12 = v13 | (1619305268 << v4);
      while ( v13 | ((v12 + v11) << v4) );
    }
    else
    {
      v12 = FIELD_U32(result, 36);
      FIELD_U32(result, 36) = v12 + v11;
    }
    *(_DWORD *)a1 = v12;
    v14 = *(_DWORD *)(FIELD_U32(a1, 128) + 32);
    if ( v14 )
    {
      v15 = v14 + v12;
      if ( FIELD_U8(a1, 133) )
      {
        qmemcpy(v22, a3, 0x64u);
        v16 = a3[7];
        v17 = a3[8];
        v22[10] = a3[6];
        v22[11] = v16;
        v22[12] = v17;
        LOBYTE(v22[14]) = -1;
        v18 = a3[16];
        v19 = a3[17];
        v22[19] = a3[15];
        v22[20] = v18;
        v22[21] = v19;
        sub_6084A430(a1, v15, a2, v22);
        v20 = *(_DWORD *)(FIELD_U32(a1, 128) + 32) + *(_DWORD *)a1 + v10;
        v21 = a1;
      }
      else
      {
        v21 = a1;
        v20 = v15;
      }
      sub_6084A430(v21, v20, a2, a3);
    }
    sub_6084A664(a1, a3);
    result = a3[24];
    FIELD_U32(a1, 8) = result;
    if ( *a3 )
    {
      result |= 2u;
      FIELD_U32(a1, 8) = result;
    }
    if ( a3[1] )
    {
      result |= 4u;
      FIELD_U32(a1, 8) = result;
    }
  }
  return result;
}
