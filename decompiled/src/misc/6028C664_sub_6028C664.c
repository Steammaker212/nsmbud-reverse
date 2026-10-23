/* sub_6028C664
 * address: 0x6028C664   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6028C664(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // s0
  int v7; // r0
  int *result; // r0
  int *v9; // r4
  int *v10; // t1
  signed int v11; // [sp+4h] [bp-24h] BYREF
  int v12; // [sp+8h] [bp-20h] BYREF
  unsigned int v13; // [sp+Ch] [bp-1Ch] BYREF

  v2 = *(_DWORD **)(a1 + 6300);
  v3 = (int *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  Animation_update(*v3);
  v6 = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 108) = v6;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  FIELD_F32(a1, 108) = v6 + (float)(FIELD_F32(dword_60CC6484, 112) - FIELD_F32(dword_60CC6484, 56));
  StageActor__accelerateX((StageActor *)a1);
  sub_600035C0(a1);
  v13 = sub_6000F7B8(
          -(float)(FIELD_F32(a1, 124) + -1.0),
          FIELD_F32(a1, 120) * (float)byte_60AFE3F4[FIELD_U32(a1, 80)]);
  v12 = 0x4000000;
  sub_6083224C((int *)(a1 + 156), (int *)&v13, &v12);
  v7 = FIELD_U32(a1, 80);
  v12 = 0x4000000;
  sub_6083224C((int *)(a1 + 160), (int *)&unk_60C8F4C0 + v7 + 6, &v12);
  v10 = *(int **)(a1 + 164);
  v9 = (int *)(a1 + 164);
  result = v10;
  if ( v10 )
  {
    v11 = 0x4000000;
    v12 = 0;
    return sub_6083224C(v9, &v12, &v11);
  }
  return result;
}
