/* sub_601ABC5C
 * address: 0x601ABC5C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601ABC5C(int a1)
{
  int result; // r0
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // s2
  float *v7; // r3
  int v8; // lr
  float *v9; // r1
  float v10; // s14
  float v11; // s0
  float v12; // s2
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s13
  float v17; // s1
  float v18; // s9
  float v19[16]; // [sp+0h] [bp-40h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 268));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 272));
  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 268) + 68))(**(_DWORD **)(a1 + 268), a1 + 128);
    v3 = FIELD_U32(a1, 176);
    v4 = FIELD_U32(a1, 180);
    v5 = FIELD_U32(a1, 184);
    v6 = v4 & 0xFFFFFF;
    v7 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v8 = (v5 >> 20) & 0xFF0;
    v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v10 = (float)(v3 & 0xFFFFFF);
    v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v12 = (float)(unsigned int)v6 * 0.000000059605;
    v13 = *(float *)((char *)&sinLutTable[2] + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v8));
    v14 = v7[2] + (float)(v12 * v7[3]);
    v15 = *(float *)((char *)sinLutTable + v8) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v8));
    v16 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
    v17 = *v7 + (float)(v12 * v7[1]);
    v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
    v19[0] = v14 * v13;
    v19[4] = v14 * v15;
    v19[8] = -v17;
    v19[1] = (float)((float)(v18 * v17) * v13) - (float)(v16 * v15);
    v19[5] = (float)(v16 * v13) + (float)((float)(v18 * v17) * v15);
    v19[9] = v18 * v14;
    v19[2] = (float)(v17 * (float)(v16 * v13)) + (float)(v18 * v15);
    v19[6] = (float)(v17 * (float)(v16 * v15)) - (float)(v18 * v13);
    v19[10] = v16 * v14;
    v19[3] = FIELD_F32(a1, 80);
    v19[7] = FIELD_F32(a1, 84);
    v19[11] = FIELD_F32(a1, 88);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v19);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
    sub_60421880(FIELD_U32(a1, 268));
    sub_601ABAD4(a1);
    return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 272));
  }
  return result;
}
