/* sub_6031C45C
 * address: 0x6031C45C   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6031C45C(int a1)
{
  unsigned int v2; // r0
  float *v3; // r1
  float v4; // s8
  float v5; // s1
  float v6; // s4
  float v7; // s0
  float v8; // s12
  float v9; // s14
  float *v10; // r0
  float *v11; // r2
  float *v12; // r3
  float v13; // s2
  float v14; // s4
  float v15; // s6
  float *v16; // r2
  int v17; // s6
  float v18; // s18
  float v19; // s16
  int v20; // r5
  int v21; // r6
  float v23; // [sp+0h] [bp-48h] BYREF
  float v24; // [sp+4h] [bp-44h]
  float v25; // [sp+8h] [bp-40h]
  float v26[14]; // [sp+10h] [bp-38h] BYREF

  v2 = FIELD_U32(a1, 12584);
  v3 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v4 = (float)(v2 & 0xFFFFFF);
  v5 = FIELD_F32(a1, 116);
  v6 = v3[2] + (float)((float)(v4 * v3[3]) * 0.000000059605);
  v7 = *v3 + (float)((float)(v4 * v3[1]) * 0.000000059605);
  v8 = FIELD_F32(a1, 108) + (float)(v6 * 4.0);
  v9 = FIELD_F32(a1, 112) + (float)(v7 * 4.0);
  v26[0] = v8;
  v26[1] = v9;
  v26[2] = v5 + 32.0;
  v24 = v9;
  v25 = v5 + 32.0;
  v10 = &v23;
  v11 = v26;
  v12 = v26;
  v13 = v8 + (float)(v6 * 12.0);
  v23 = v13;
  if ( v13 < v8 )
    v11 = &v23;
  v14 = v9 + (float)(v7 * 12.0);
  v24 = v14;
  v15 = *v11;
  v16 = &v23;
  if ( v14 < v9 )
    v12 = &v23;
  v17 = (int)v15;
  if ( v13 < v8 )
    v16 = v26;
  if ( v14 < v9 )
    v10 = v26;
  v18 = v10[1];
  v19 = *v16;
  v20 = (unsigned __int16)v17;
  v21 = (unsigned __int16)(int)(float)-v12[1];
  return sub_607161E4(TileMgr_instance, (unsigned __int16)v17, v21, FIELD_U8(a1, 86)) == 1
      || sub_607161E4(
           TileMgr_instance,
           (unsigned __int16)(int)v19,
           (unsigned __int16)(int)(float)-v18,
           FIELD_U8(a1, 86)) == 1
      || sub_607161E4(TileMgr_instance, (unsigned __int16)(int)v19, v21, FIELD_U8(a1, 86)) == 1
      || sub_607161E4(TileMgr_instance, v20, (unsigned __int16)(int)(float)-v18, FIELD_U8(a1, 86)) == 1;
}
