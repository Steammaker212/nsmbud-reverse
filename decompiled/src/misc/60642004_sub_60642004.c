/* sub_60642004
 * address: 0x60642004   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60642004(int a1)
{
  int v2; // r1
  int v3; // r2
  int result; // r0
  float v5; // s16
  float v6; // s2
  float v7; // s0
  float v8; // s18
  int v9; // r2
  float v10; // s18
  int v11; // r2
  int v12; // r2
  int v13; // [sp+4h] [bp-34h] BYREF
  _DWORD v14[3]; // [sp+8h] [bp-30h] BYREF
  float v15; // [sp+14h] [bp-24h] BYREF
  float v16; // [sp+18h] [bp-20h] BYREF
  float v17; // [sp+1Ch] [bp-1Ch]

  v15 = 0.0;
  v2 = FIELD_U32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v14[0] = FIELD_U32(a1, 108);
  v14[1] = v2;
  v14[2] = v3;
  ((void (__fastcall *)(int *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
    &v13,
    &v15,
    v14,
    FIELD_U8(a1, 86));
  result = v13 - 3;
  if ( (unsigned int)(v13 - 3) > 1 )
    return result;
  v5 = v15;
  result = dword_60CC6484;
  if ( (float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) > v15 )
    return result;
  v6 = FIELD_F32(a1, 588);
  v7 = FIELD_F32(a1, 112);
  result = v6 <= v15;
  if ( v15 < v7 && result == 1 )
  {
    v8 = FIELD_F32(a1, 108);
    if ( v15 < v7 )
    {
      v16 = FIELD_F32(a1, 108);
      v17 = v15;
      v9 = 15;
      goto LABEL_11;
    }
  }
  else
  {
    if ( v7 > v15 || v15 >= v6 )
      return result;
    v8 = FIELD_F32(a1, 108);
  }
  v9 = 14;
  v16 = v8;
  v17 = v15;
LABEL_11:
  TileMgr_splashRelated(TileMgr_instance, &v16, v9);
  result = FIELD_U32(a1, 7004);
  if ( result >= 12 )
  {
    v10 = v8 + -56.0;
    if ( FIELD_F32(a1, 588) > v5 || v5 >= FIELD_F32(a1, 112) )
    {
      v11 = 14;
      v16 = v10;
      v17 = v5;
    }
    else
    {
      v16 = v10;
      v17 = v5;
      v11 = 15;
    }
    TileMgr_splashRelated(TileMgr_instance, &v16, v11);
    if ( FIELD_F32(a1, 588) > v5 || v5 >= FIELD_F32(a1, 112) )
    {
      v12 = 14;
      v16 = v10 + 112.0;
      v17 = v5;
    }
    else
    {
      v16 = v10 + 112.0;
      v17 = v5;
      v12 = 15;
    }
    return TileMgr_splashRelated(TileMgr_instance, &v16, v12);
  }
  return result;
}
