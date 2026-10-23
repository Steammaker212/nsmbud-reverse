/* sub_607620B4
 * address: 0x607620B4   size: 692   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607620B4(int a1)
{
  float *v2; // r5
  int *v3; // r6
  int result; // r0
  int *v5; // r1
  int v6; // r2
  int v7; // r3
  float v8; // s16
  int v9; // r7
  float v10; // s0
  int v11; // r0
  float v12; // s16
  float v13; // s16
  int v14; // r0
  float v15; // s1
  int v16; // r4
  int v17; // t1
  int v18; // r2
  int v19; // r0
  int v20; // [sp+8h] [bp-48h] BYREF
  _DWORD v21[3]; // [sp+Ch] [bp-44h] BYREF
  int v22; // [sp+18h] [bp-38h] BYREF
  float v23; // [sp+1Ch] [bp-34h]
  int v24; // [sp+20h] [bp-30h]
  int v25; // [sp+24h] [bp-2Ch]
  int v26; // [sp+2Ch] [bp-24h] BYREF

  v2 = (float *)(a1 + 7012);
  FIELD_U32(a1, 7016) = FIELD_U32(a1, 7012);
  FIELD_U32(a1, 7020) = 0;
  v3 = (int *)(a1 + 7020);
  v24 = FIELD_U32(a1, 116);
  v23 = FIELD_F32(a1, 112);
  v22 = FIELD_U32(a1, 108);
  if ( (FIELD_U8(a1, 1237) & 1) != 0 )
    v23 = v23 + 8.0;
  ((void (__fastcall *)(int *, float *, int *, _DWORD))checkLiquidCollisions)(
    &v26,
    v2,
    &v22,
    FIELD_U8(a1, 86));
  result = v26;
  if ( v26 && v23 <= *v2 )
  {
    v5 = (int *)(a1 + 6900);
    v6 = FIELD_U32(a1, 6900);
    v7 = v6 | 0x80000;
    if ( v26 == 2 )
      v6 |= 0x880000u;
    *v5 = v7;
    if ( result == 2 )
      *v5 = v6;
  }
  if ( (result | 2) == 2 )
  {
    v8 = FIELD_F32(a1, 112);
    v9 = FIELD_U32(a1, 108);
    v10 = flt_60B0A8F0[(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320))];
    v11 = FIELD_U32(a1, 116);
    v21[0] = v9;
    *(float *)&v21[1] = v8 + v10;
    v21[2] = v11;
    ((void (__fastcall *)(int *, float *, int *, _DWORD *, _DWORD))physics_21893E8)(
      &v20,
      v2,
      &v22,
      v21,
      FIELD_U8(a1, 86));
    result = v20;
    if ( v20 != 2 )
      return result;
    FIELD_U32(a1, 6900) |= 0x140000u;
    *v3 = 2;
    result = (unsigned __int8)v22;
    if ( !(_BYTE)v22 )
      return result;
LABEL_23:
    v17 = FIELD_U32(a1, 6900);
    v16 = a1 + 6900;
    *(_DWORD *)v16 = v17 | 0x800000;
    v18 = v24;
    v19 = *(_DWORD *)(v16 - 6784);
    FIELD_F32(v16, 128) = v23;
    FIELD_U32(v16, 132) = v18;
    FIELD_U32(v16, 136) = v19;
    result = v25;
    FIELD_U32(v16, 140) = v25;
    return result;
  }
  *v3 = result;
  if ( (unsigned int)(result - 3) >= 4 )
  {
    if ( result == 2 )
      goto LABEL_23;
    if ( result == 1 )
    {
      v12 = FIELD_F32(a1, 112);
      if ( (float)(v12
                 + flt_60B0A8F0[(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320))]) <= *v2 )
        FIELD_U32(a1, 6900) |= 0x40000u;
      v13 = FIELD_F32(a1, 112);
      v14 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1);
      v15 = *v2;
      if ( (float)(v13 + FIELD_F32(v14, 20)) <= *v2 )
        FIELD_U32(a1, 6900) |= 0x100000u;
      result = sub_60152B40(FIELD_U8(a1, 86), FIELD_F32(a1, 108), v15);
      FIELD_U32(a1, 7024) = result;
    }
  }
  else
  {
    result = FIELD_U8(dword_60CC6D8C, 17);
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      result = FIELD_U32(a1, 6900) | 0x400000;
      FIELD_U32(a1, 6900) = result;
    }
  }
  return result;
}
