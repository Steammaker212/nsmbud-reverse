/* checkWaveCollision
 * address: 0x60151D34   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall checkWaveCollision(_DWORD *a1, float *a2)
{
  signed int result; // r0
  float v4; // s0
  float v5; // s2
  int v6; // r8
  float v7; // s4
  int v8; // r4
  int v9; // r2
  int v10; // lr
  int v11; // r5
  int v12; // r7
  float v13; // s2
  float v14; // s4
  int v15; // r7
  _DWORD *v16; // r2
  float v17; // s4
  int v18; // r2

  result = 0;
  if ( !FIELD_U8(TileMgr_instance, 0x2821) )
    return result;
  v4 = *a2;
  v5 = FIELD_F32(dword_60CC6484, 40);
  if ( v5 > *a2 || v4 > FIELD_F32(dword_60CC6484, 48) )
    return result;
  v6 = TileMgr_instance + 32;
  v7 = (float)((float)(v4 - v5) * 0.5) + 0.5;
  v8 = (int)v7;
  v9 = (int)v7 + 2;
  v10 = (int)v7 + 1;
  v11 = (int)v7 - 1;
  if ( v9 >= 1280 )
    v9 = (int)v7 + 1;
  if ( v8 > 1278 )
    v9 = (int)v7;
  if ( v8 < 2 )
    v11 = (int)v7;
  if ( v8 > 1278 )
    v10 = (int)v7;
  v12 = v8 - 2;
  if ( v8 - 2 < 1 )
    v12 = (int)v7 - 1;
  if ( v8 < 2 )
    v12 = (int)v7;
  v13 = fabsf(v4 - *(float *)(v6 + 4 * v8));
  v14 = fabsf(v4 - *(float *)(v6 + 4 * v11));
  if ( v14 >= v13 )
  {
    v17 = fabsf(v4 - *(float *)(v6 + 4 * v10));
    if ( v17 >= v13 )
    {
      v18 = TileMgr_instance + 4 * v8;
    }
    else
    {
      if ( fabsf(v4 - *(float *)(v6 + 4 * v9)) < v17 )
      {
        v16 = (_DWORD *)(TileMgr_instance + 4 * v9 + 5152);
        goto LABEL_26;
      }
      v18 = TileMgr_instance + 4 * v10;
    }
    v16 = (_DWORD *)(v18 + 5152);
  }
  else
  {
    v15 = TileMgr_instance + 4 * v12;
    if ( fabsf(v4 - FIELD_F32(v15, 32)) >= v14 )
      v16 = (_DWORD *)(TileMgr_instance + 4 * v11 + 5152);
    else
      v16 = (_DWORD *)(v15 + 5152);
  }
LABEL_26:
  if ( *(float *)v16 >= a2[1] )
  {
    result = 1;
    if ( a1 )
      *a1 = *v16;
  }
  return result;
}
