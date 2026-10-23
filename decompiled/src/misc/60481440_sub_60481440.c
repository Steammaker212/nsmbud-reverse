/* sub_60481440
 * address: 0x60481440   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60481440(int a1)
{
  int v2; // r0
  unsigned int v3; // r2
  int v4; // r0
  int v5; // r1
  int v6; // r0
  float v7; // r0
  float v8; // r1
  int v9; // r2
  float v11; // [sp+4h] [bp-24h] BYREF
  float v12; // [sp+8h] [bp-20h]
  float v13; // [sp+Ch] [bp-1Ch]

  v2 = 0;
  v3 = FIELD_U32(a1, 3648);
  if ( v3 < 6 )
    v2 = FIELD_U32(a1, 3648);
  v4 = dword_60C99DD4 + 72 * v2;
  v5 = FIELD_U32(v4, 300);
  v6 = FIELD_U32(v4, 304);
  FIELD_U32(a1, 3604) = 0;
  if ( v6 > 5 )
    v6 = 0;
  FIELD_U32(a1, 3608) = dword_60B02A34[10 * v6 + v5];
  FIELD_U32(a1, 3612) = 0;
  sub_6075DE94(dword_60CBF354, &v11, v3);
  v11 = v11 + FIELD_F32(a1, 3604);
  v12 = v12 + FIELD_F32(a1, 3608);
  v13 = v13 + FIELD_F32(a1, 3612);
  sub_60833074(&v11);
  v7 = v11;
  FIELD_F32(a1, 3632) = v11;
  v8 = v12;
  FIELD_F32(a1, 3636) = v12;
  v9 = FIELD_U32(a1, 3588);
  FIELD_F32(v9, 24) = v7;
  FIELD_F32(v9, 28) = v8;
  FIELD_U32(v9, 32) = 0;
  FIELD_U8(v9, 64) |= 0x10u;
  FIELD_U8(a1, 3670) = 1;
  return 1;
}
