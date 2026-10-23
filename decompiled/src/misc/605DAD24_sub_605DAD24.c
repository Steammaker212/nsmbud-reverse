/* sub_605DAD24
 * address: 0x605DAD24   size: 908   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DAD24(int a1, int a2)
{
  int v3; // r6
  float v4; // r2
  int v5; // r3
  int v6; // r5
  _BYTE *v7; // r10
  _DWORD *v8; // r9
  _DWORD *v9; // r11
  _DWORD *v10; // r8
  int result; // r0
  float v12; // s1
  int v13; // r2
  int v14; // r1
  float v15; // r1
  float v16; // s0
  float v17; // r6
  int v18; // r0
  int v19; // r5
  int v21; // [sp+8h] [bp-40h] BYREF
  int v22; // [sp+Ch] [bp-3Ch] BYREF
  int v23; // [sp+10h] [bp-38h] BYREF
  float v24; // [sp+14h] [bp-34h]
  int v25; // [sp+18h] [bp-30h]
  float v26[10]; // [sp+20h] [bp-28h] BYREF

  v3 = FIELD_U8(a1, 86);
  v26[0] = 0.0;
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_U32(a1, 116);
  v23 = FIELD_U32(a1, 108);
  v24 = v4;
  v25 = v5;
  FIELD_U32(a1, 6888) = FIELD_U32(a1, 6860);
  FIELD_U32(a1, 6884) = FIELD_U32(a1, 6856);
  v6 = a1 + 6852;
  FIELD_U32(a1, 6880) = FIELD_U32(a1, 6852);
  v7 = (_BYTE *)(a1 + 6864);
  FIELD_U8(a1, 6892) = FIELD_U8(a1, 6864);
  v8 = (_DWORD *)(a1 + 6868);
  FIELD_U32(a1, 6896) = FIELD_U32(a1, 6868);
  v9 = (_DWORD *)(a1 + 6872);
  FIELD_U32(a1, 6900) = FIELD_U32(a1, 6872);
  v10 = (_DWORD *)(a1 + 6876);
  FIELD_U32(a1, 6904) = FIELD_U32(a1, 6876);
  FIELD_U8(a1, 6876) = 0;
  FIELD_U8(a1, 6879) = 0;
  FIELD_U8(a1, 6878) = 0;
  FIELD_U8(a1, 6872) = 0;
  FIELD_U8(a1, 6875) = 0;
  FIELD_U8(a1, 6874) = 0;
  FIELD_U8(a1, 6868) = 0;
  FIELD_U8(a1, 6871) = 0;
  FIELD_U8(a1, 6870) = 0;
  FIELD_U8(a1, 6864) = 0;
  FIELD_U8(a1, 6867) = 0;
  FIELD_U8(a1, 6866) = 0;
  FIELD_U8(a1, 6860) = 0;
  FIELD_U8(a1, 6863) = 0;
  FIELD_U8(a1, 6862) = 0;
  FIELD_U8(a1, 6856) = 0;
  FIELD_U8(a1, 6859) = 0;
  FIELD_U8(a1, 6858) = 0;
  FIELD_U8(a1, 6852) = 0;
  FIELD_U8(a1, 6877) = 0;
  FIELD_U8(a1, 6873) = 0;
  FIELD_U8(a1, 6869) = 0;
  FIELD_U8(a1, 6865) = 0;
  FIELD_U8(a1, 6861) = 0;
  FIELD_U8(a1, 6857) = 0;
  FIELD_U8(a1, 6853) = 0;
  FIELD_U8(a1, 6855) = 0;
  FIELD_U8(a1, 6854) = 0;
  ((void (__fastcall *)(int *, float *, int *, int))checkLiquidCollisions)(&v22, v26, &v23, v3);
  result = v22;
  if ( v22 )
  {
    v12 = v26[0];
    if ( FIELD_F32(a1, 112) <= v26[0]
      && (v13 = FIELD_U32(a1, 6804), FIELD_U32(a1, 6804) = v13 | 0x4000, result == 2) )
    {
      FIELD_U32(a1, 6804) = v13 | 0x5000;
    }
    else if ( (result | 2) != 2 )
    {
      v15 = v12;
      goto LABEL_13;
    }
  }
  v24 = v24 + 8.0;
  ((void (__fastcall *)(int *, float *, int, int *, int))physics_21893E8)(&v21, v26, a1 + 6864, &v23, v3);
  result = v21;
  if ( v21 == 2 )
  {
    v14 = FIELD_U32(a1, 6804);
    FIELD_U32(a1, 6804) = v14 | 0x2800;
    if ( FIELD_U8(a1, 6864) )
      FIELD_U32(a1, 6804) = v14 | 0x3800;
    FIELD_U32(a1, 6856) = 2;
    result = LODWORD(v26[0]);
    *(float *)v6 = v26[0];
    if ( a2 != 1 )
      return result;
LABEL_20:
    v17 = *(float *)v6;
    v18 = FIELD_U32(v6, 4);
    v19 = FIELD_U32(v6, 8);
    FIELD_F32(a1, 6880) = v17;
    FIELD_U32(a1, 6884) = v18;
    FIELD_U32(a1, 6888) = v19;
    FIELD_U8(a1, 6892) = *v7;
    FIELD_U32(a1, 6896) = *v8;
    FIELD_U32(a1, 6900) = *v9;
    v10[7] = *v10;
    result = FIELD_U32(a1, 6804);
    if ( (result & 0x800) != 0 )
      FIELD_U32(a1, 6808) |= 0x800u;
    if ( (result & 0x1000) != 0 )
      FIELD_U32(a1, 6808) |= 0x1000u;
    if ( (result & 0x2000) != 0 )
      FIELD_U32(a1, 6808) |= 0x2000u;
    if ( (result & 0x4000) != 0 )
    {
      result = FIELD_U32(a1, 6808) | 0x4000;
      FIELD_U32(a1, 6808) = result;
    }
    return result;
  }
  v15 = v26[0];
  v12 = v26[0];
LABEL_13:
  FIELD_U32(a1, 6856) = result;
  *(float *)v6 = v15;
  if ( result == 1 )
  {
    v16 = FIELD_F32(a1, 112);
    if ( (float)(v16 + 8.0) <= v12 )
      FIELD_U32(a1, 6804) |= 0x800u;
    if ( (float)(v16 + 16.0) <= v12 )
      FIELD_U32(a1, 6804) |= 0x2000u;
    result = sub_60152B40(v3, FIELD_F32(a1, 108), v12);
    FIELD_U32(a1, 6860) = result;
  }
  if ( a2 == 1 )
    goto LABEL_20;
  return result;
}
