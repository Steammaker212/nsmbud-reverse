/* sub_60257AE8
 * address: 0x60257AE8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60257AE8(int a1, int a2, int a3, int a4, float a5, float a6, float a7, int a8, int a9)
{
  float v10; // r12
  float v11; // r0
  char v12; // r0
  bool v13; // zf
  int v15; // [sp+0h] [bp-28h] BYREF
  int v16; // [sp+4h] [bp-24h] BYREF
  float v17; // [sp+8h] [bp-20h] BYREF
  float v18; // [sp+Ch] [bp-1Ch]
  float v19; // [sp+10h] [bp-18h]

  v17 = a5;
  v18 = a6;
  v19 = a7;
  *(_DWORD *)a1 = off_60BDAB98;
  FIELD_U32(a1, 4) = 0;
  v10 = v17;
  v11 = v19;
  FIELD_F32(a1, 12) = v18;
  FIELD_F32(a1, 8) = v10;
  FIELD_F32(a1, 16) = v11;
  FIELD_U32(a1, 20) = a2;
  FIELD_U32(a1, 24) = a3;
  FIELD_U32(a1, 28) = a4;
  FIELD_U32(a1, 32) = 1065353216;
  FIELD_U32(a1, 36) = 1065353216;
  FIELD_U32(a1, 40) = 1065353216;
  FIELD_U32(a1, 44) = FIELD_U32(a8, 8);
  FIELD_U32(a1, 48) = a9;
  FIELD_U16(a1, 64) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 68) = 1065353216;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 76));
  FIELD_U32(a1, 76) = off_60BC1450;
  FIELD_U8(a1, 180) = 0;
  FIELD_U32(a1, 184) = 0;
  v16 = 0;
  ((void (__fastcall *)(int *, int *, float *, _DWORD))checkLiquidCollisions)(
    &v15,
    &v16,
    &v17,
    FIELD_U8(a8, 86));
  v12 = v15;
  v13 = v15 == 0;
  if ( v15 )
    v12 = 1;
  FIELD_U8(a1, 72) = v12;
  FIELD_U8(a1, 73) = v12;
  if ( !v13 )
    FIELD_U8(a1, 180) = 1;
  return a1;
}
