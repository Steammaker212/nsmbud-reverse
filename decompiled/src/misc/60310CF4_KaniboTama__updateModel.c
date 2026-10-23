/* KaniboTama__updateModel
 * address: 0x60310CF4   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KaniboTama__updateModel(int a1)
{
  unsigned int v3; // r0
  unsigned int v4; // r2
  int v5; // s14
  float *v6; // r1
  float v7; // s0
  float v8; // s2
  float *v9; // r0
  float v10; // s6
  float v11; // s8
  float v12; // s10
  float v13; // s12
  float *v14; // r1
  float v15; // s14
  float v16; // s10
  float v17; // s6
  float v18; // s5
  float v19; // s1
  float v20; // s13
  float v21; // s9
  _DWORD *v22; // r4
  int v23; // t1
  float v24[14]; // [sp+8h] [bp-38h] BYREF

  if ( FIELD_U32(a1, 6408) )
    return EffectWrapper_update((EffectWrapper *)(a1 + 6304), 7, (Vec3 *)(a1 + 108), 0, 0);
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(a1, 164);
  v5 = v3 & 0xFFFFFF;
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v8 = (float)(FIELD_U32(a1, 160) & 0xFFFFFF) * 0.000000059605;
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = *v6;
  v11 = v6[1];
  v12 = v6[2];
  v13 = v6[3];
  v14 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0));
  v15 = (float)(unsigned int)v5;
  v16 = v12 + (float)(v7 * v13);
  v17 = v10 + (float)(v7 * v11);
  v18 = v14[2] + (float)(v8 * v14[3]);
  v19 = *v14 + (float)(v8 * v14[1]);
  v20 = v9[2] + (float)((float)(v15 * 0.000000059605) * v9[3]);
  v21 = *v9 + (float)((float)(v15 * 0.000000059605) * v9[1]);
  v24[0] = v18 * v16;
  v24[4] = v18 * v17;
  v24[8] = -v19;
  v24[1] = (float)((float)(v21 * v19) * v16) - (float)(v20 * v17);
  v24[5] = (float)(v20 * v16) + (float)((float)(v21 * v19) * v17);
  v24[9] = v21 * v18;
  v24[2] = (float)(v19 * (float)(v20 * v16)) + (float)(v21 * v17);
  v24[6] = (float)(v19 * (float)(v20 * v17)) - (float)(v21 * v16);
  v24[10] = v20 * v18;
  v24[3] = FIELD_F32(a1, 108);
  v24[7] = FIELD_F32(a1, 112);
  v24[11] = FIELD_F32(a1, 116);
  v23 = FIELD_U32(a1, 6300);
  v22 = (_DWORD *)(a1 + 6300);
  (*(void (__fastcall **)(int, float *))(*(_DWORD *)v23 + 60))(v23, v24);
  (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v22 + 68))(*v22, v22 - 1539);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v22 + 52))(*v22);
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v22 + 56))(*v22);
}
