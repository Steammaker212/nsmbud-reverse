/* sub_6028CB1C
 * address: 0x6028CB1C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028CB1C(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // s0
  __int64 v7; // r0
  int *v8; // r4
  int v9; // t1
  signed int v11; // [sp+0h] [bp-10h] BYREF
  int v12; // [sp+4h] [bp-Ch] BYREF

  v2 = *(_DWORD **)(a1 + 6300);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  Animation_update(*v3);
  v7 = FIELD_U32(a1, 88);
  FIELD_U64(a1, 120) = v7;
  v6 = FIELD_F32(a1, 108) + *(float *)&v7;
  FIELD_F32(a1, 108) = v6;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 0.0;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 108) = v6 + (float)(FIELD_F32(dword_60CC6484, 112) - FIELD_F32(dword_60CC6484, 56));
  v9 = FIELD_U32(a1, 164);
  v8 = (int *)(a1 + 164);
  LODWORD(v7) = v9;
  if ( v9 )
  {
    v12 = HIDWORD(v7);
    v11 = 0x4000000;
    LODWORD(v7) = sub_6083224C(v8, &v12, &v11);
  }
  return v7;
}
