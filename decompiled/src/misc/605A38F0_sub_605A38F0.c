/* sub_605A38F0
 * address: 0x605A38F0   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A38F0(int a1)
{
  unsigned int v2; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r5
  unsigned int v6; // r2
  int v7; // r1
  int v8; // r0
  int v9; // r7
  int v10; // r1
  int v11; // r1
  unsigned int v12; // r0
  float v13; // s0
  float v14; // s0
  int result; // r0
  float v16; // [sp+0h] [bp-20h] BYREF
  int v17; // [sp+4h] [bp-1Ch]

  v2 = FIELD_U32(a1, 20);
  FIELD_U16(a1, 6890) = 60 * (HIBYTE(v2) & 0xF);
  v3 = 0;
  LOWORD(v2) = 60 * ((v2 >> 20) & 0xF);
  FIELD_U16(a1, 72320) = v2;
  FIELD_U16(a1, 6888) = v2;
  v4 = FIELD_U8(a1, 72322);
  if ( FIELD_U8(a1, 72322) )
  {
    v5 = v4 - 33;
    v6 = 1u >> (33 - v4);
    v7 = 1 << (v4 - 1);
    if ( v5 >= 0 )
    {
      v6 = 1 << v5;
      v7 = 0;
    }
    v8 = FIELD_U32(EventMgr__instance, 16) & v7 | FIELD_U32(EventMgr__instance, 20) & v6;
    v3 = 2;
    if ( !v8 )
      v3 = 1;
  }
  FIELD_U32(a1, 72316) = v3;
  FIELD_U32(EnemyCounterMaybe_instance, 28) = 0;
  v9 = dword_60CC6484;
  v10 = FIELD_U32(a1, 6128);
  v16 = FIELD_F32(dword_60CC6484, 112) + (float)(FIELD_F32(dword_60CC6484, 104) * 0.2);
  v17 = v10;
  TileMgr_splashRelated(TileMgr_instance, &v16, 10);
  v11 = FIELD_U32(a1, 6128);
  v16 = FIELD_F32(v9, 112) + (float)(FIELD_F32(v9, 104) * 0.7);
  v17 = v11;
  TileMgr_splashRelated(TileMgr_instance, &v16, 10);
  v12 = FIELD_U32(a1, 72304) + dword_60CAFEC4;
  v13 = FIELD_F32(a1, 112) + FIELD_F32(a1, 6876);
  FIELD_U32(a1, 72304) = v12;
  v14 = v13
      + (float)((float)(*(float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0))
                      + (float)((float)((float)(v12 & 0xFFFFFF)
                                      * *(float *)((char *)&sinLutTable[1] + ((v12 >> 20) & 0xFF0)))
                              * 0.000000059605))
              * 4.0);
  if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
    FIELD_F32(a1, 6916) = v14;
  FIELD_F32(a1, 6128) = v14;
  FIELD_F32(a1, 6860) = (float)(v14 + FIELD_F32(a1, 6856)) - FIELD_F32(a1, 6116);
  result = FIELD_U32(a1, 6836);
  if ( !result )
  {
    result = TileMgr_instance;
    FIELD_F32(TileMgr_instance, 24) = v14;
  }
  return result;
}
