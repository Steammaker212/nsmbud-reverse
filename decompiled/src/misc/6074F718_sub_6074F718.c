/* sub_6074F718
 * address: 0x6074F718   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074F718(int a1)
{
  int v2; // r2
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // r6
  float *v7; // r4
  float *v8; // r5
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s12
  float v13; // s5
  float v14; // s8
  float v15; // s1
  float v16; // s9
  float v17; // s13
  int result; // r0
  float v19; // s2
  int v20; // r1
  _DWORD v21[12]; // [sp+0h] [bp-78h] BYREF
  float v22[18]; // [sp+30h] [bp-48h] BYREF

  v2 = a1 + 156;
  v3 = FIELD_U32(a1, 156);
  v4 = FIELD_U32(v2, 4);
  v5 = FIELD_U32(v2, 8);
  v6 = (v5 >> 20) & 0xFF0;
  v5 &= 0xFFFFFFu;
  v7 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v8 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v9 = (float)v5 * 0.000000059605;
  v10 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v12 = *(float *)((char *)&sinLutTable[2] + v6) + (float)(v9 * *(float *)((char *)&sinLutTable[3] + v6));
  v13 = v8[2] + (float)(v10 * v8[3]);
  v14 = *(float *)((char *)sinLutTable + v6) + (float)(v9 * *(float *)((char *)&sinLutTable[1] + v6));
  v15 = *v8 + (float)(v10 * v8[1]);
  v16 = *v7 + (float)(v11 * v7[1]);
  v17 = v7[2] + (float)(v11 * v7[3]);
  v22[0] = (float)(v13 * v12) + (float)(v16 * (float)(v15 * v14));
  v22[4] = v17 * v14;
  v22[8] = (float)(v16 * (float)(v13 * v14)) - (float)(v15 * v12);
  v22[1] = (float)(v16 * (float)(v15 * v12)) - (float)(v13 * v14);
  v22[5] = v17 * v12;
  v22[9] = (float)(v15 * v14) + (float)(v16 * (float)(v13 * v12));
  v22[2] = v17 * v15;
  v22[6] = -v16;
  v22[10] = v17 * v13;
  v22[3] = FIELD_F32(a1, 108);
  v22[7] = FIELD_F32(a1, 112);
  v22[11] = FIELD_F32(a1, 116);
  ((void (__fastcall *)(_DWORD, float *, unsigned int))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 644) + 4), v22, v5);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 644) + 4) + 148))(*(_DWORD *)(FIELD_U32(a1, 644) + 4));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 648));
  result = FIELD_U32(a1, 700);
  if ( result == 2 )
  {
    result = 2;
    if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 648) + 12) + 28) & 0x20) != 0 )
    {
      result = 0;
      FIELD_U32(a1, 700) = 0;
    }
  }
  v19 = FIELD_F32(dword_60CC6484, 132);
  v20 = FIELD_U32(dword_60CC6484, 120);
  FIELD_U32(a1, 688) = v20;
  FIELD_F32(a1, 692) = v19 + 56.0;
  FIELD_U32(a1, 696) = 1161527296;
  if ( result )
  {
    v21[0] = 1065353216;
    v21[1] = 0;
    v21[2] = 0;
    v21[4] = 0;
    v21[5] = 1065353216;
    v21[6] = 0;
    v21[8] = 0;
    v21[9] = 0;
    v21[10] = 1065353216;
    v21[3] = v20;
    *(float *)&v21[7] = v19 + 56.0;
    v21[11] = 1161527296;
    (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 648) + 60))(**(_DWORD **)(a1 + 648), v21);
    return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 648));
  }
  return result;
}
