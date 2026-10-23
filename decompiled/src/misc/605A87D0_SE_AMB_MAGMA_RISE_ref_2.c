/* SE_AMB_MAGMA_RISE_ref_2
 * address: 0x605A87D0   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_MAGMA_RISE_ref_2(int a1)
{
  ModelWrapper **v2; // r5
  float v3; // s2
  float v4; // s0
  float v5; // s4
  float v6; // s6
  float v7; // s8
  float v8; // s6
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r4
  int v13; // s1
  float *v14; // r6
  float *v15; // r1
  float v16; // s4
  float v17; // s13
  float v18; // s14
  float v19; // s1
  float v20; // s9
  float v21; // s18
  float v22; // s5
  float v23; // s15
  float v24; // s26
  float v25; // s22
  int result; // r0
  int v27; // r1
  bool v28; // zf
  float v29; // r2
  float v30[12]; // [sp+4h] [bp-94h] BYREF
  float v31[25]; // [sp+34h] [bp-64h] BYREF

  v2 = (ModelWrapper **)(a1 + 72324);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 72324));
  v3 = *((float *)v2 - 18054);
  v4 = *((float *)v2 - 18052);
  v5 = *((float *)v2 - 18053);
  if ( !*(v2 - 16372) && (FIELD_U8(a1, 21) & 8) == 0 )
    v5 = v5 - 8.0;
  v6 = FIELD_F32(a1, 6856);
  v7 = FIELD_F32(a1, 6852);
  v31[0] = v7 * 0.0625;
  v8 = v6 + 32.0;
  v31[1] = v8 * 0.0625;
  v31[2] = 1.0;
  v9 = FIELD_U32(a1, 156);
  v10 = FIELD_U32(a1, 160);
  v11 = FIELD_U32(a1, 164);
  v12 = (v11 >> 20) & 0xFF0;
  v13 = v10 & 0xFFFFFF;
  v14 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v15 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
  v16 = (float)((float)(v5 + 32.0) + FIELD_F32(a1, 6876)) - (float)(v8 * 0.5);
  v17 = (float)(v9 & 0xFFFFFF);
  v18 = (float)(v11 & 0xFFFFFF) * 0.000000059605;
  v19 = (float)(unsigned int)v13 * 0.000000059605;
  v20 = *(float *)((char *)&sinLutTable[2] + v12) + (float)(v18 * *(float *)((char *)&sinLutTable[3] + v12));
  v21 = v14[2] + (float)(v19 * v14[3]);
  v22 = *(float *)((char *)sinLutTable + v12) + (float)(v18 * *(float *)((char *)&sinLutTable[1] + v12));
  v23 = *v14 + (float)(v19 * v14[1]);
  v24 = v15[2] + (float)((float)(v17 * 0.000000059605) * v15[3]);
  v25 = *v15 + (float)((float)(v17 * 0.000000059605) * v15[1]);
  v30[0] = v21 * v20;
  v30[4] = v21 * v22;
  v30[8] = -v23;
  v30[1] = (float)((float)(v25 * v23) * v20) - (float)(v24 * v22);
  v30[5] = (float)(v24 * v20) + (float)((float)(v25 * v23) * v22);
  v30[9] = v25 * v21;
  v30[2] = (float)(v23 * (float)(v24 * v20)) + (float)(v25 * v22);
  v30[6] = (float)(v23 * (float)(v24 * v22)) - (float)(v25 * v20);
  v30[10] = v24 * v21;
  v30[3] = v3 + (float)(v7 * 0.5);
  v30[7] = v16;
  v30[11] = v4 + -8.0;
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)(*v2)->model + 60))((*v2)->model, v30);
  (*(void (__fastcall **)(void *, float *))(*(_DWORD *)(*v2)->model + 68))((*v2)->model, v31);
  ModelWrapper_updateModel(*v2);
  result = LevelInfo_instance;
  v27 = FIELD_U8(LevelInfo_instance, 16);
  v28 = v27 == 7;
  if ( v27 == 7 )
  {
    result = FIELD_U8(LevelInfo_instance, 17);
    v28 = result == 41;
  }
  if ( v28 )
  {
    result = a1 + 6868;
    if ( FIELD_F32(a1, 6868) != 0.0 )
    {
      result = FIELD_U8(a1, 72323);
      if ( FIELD_U8(a1, 72323) )
      {
        LODWORD(v29) = (int)(float)(FIELD_F32(dword_60CC6484, 132)
                                  - (float)((float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 6876)) - FIELD_F32(a1, 6872)));
        return (*(int (__fastcall **)(int, const char *, float, _DWORD, float))(*(_DWORD *)dword_60C7F538 + 48))(
                 dword_60C7F538,
                 "SE_AMB_MAGMA_RISE",
                 COERCE_FLOAT(LODWORD(v29)),
                 0,
                 v29);
      }
    }
  }
  return result;
}
