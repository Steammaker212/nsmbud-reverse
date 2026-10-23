/* sub_60531178
 * address: 0x60531178   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60531178(int a1)
{
  char v1; // r12
  float *v3; // r3
  float *v4; // r1
  float *v5; // r0
  float v6; // s0
  float v7; // s1
  float v8; // s3
  float v9; // s2
  float v10; // s5
  float v11; // s7
  float v12; // s13
  float v13; // s15
  float v14; // s9
  float v15; // s11
  float v16; // r0
  float v17; // r1
  float v18; // s4
  float v19; // s12
  float v20; // s5
  float v21; // s8
  float v22; // s1
  float v23; // s0
  float v24; // s13
  float v25; // s9
  float v27[2]; // [sp+4h] [bp-4Ch] BYREF
  float v28; // [sp+Ch] [bp-44h]
  float v29[16]; // [sp+10h] [bp-40h] BYREF

  if ( ((unsigned int)&dword_60CAAB60[4] & ~(1616056728 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAAB60[4]) )
  {
    dword_60CAAB98 = 0;
    dword_60CAAB9C = 0;
    dword_60CAABA0 = 0;
    _cxa_guard_release(&dword_60CAAB60[4]);
  }
  v3 = (float *)((char *)sinLutTable + (((unsigned int)dword_60CAABA0 >> 20) & 0xFF0));
  v4 = (float *)((char *)sinLutTable + (((unsigned int)dword_60CAAB9C >> 20) & 0xFF0));
  v5 = (float *)((char *)sinLutTable + (((unsigned int)dword_60CAAB98 >> 20) & 0xFF0));
  v6 = (float)(dword_60CAABA0 & 0xFFFFFF) * 0.000000059605;
  v7 = *v4;
  v8 = v4[1];
  v9 = (float)(dword_60CAAB9C & 0xFFFFFF) * 0.000000059605;
  v10 = v4[2];
  v11 = v4[3];
  v12 = v5[2];
  v13 = v5[3];
  v14 = *v5;
  v15 = v5[1];
  v16 = FIELD_F32(a1, 72);
  v17 = FIELD_F32(a1, 64);
  v18 = (float)(dword_60CAAB98 & 0xFFFFFF) * 0.000000059605;
  v19 = v3[2] + (float)(v6 * v3[3]);
  v20 = v10 + (float)(v9 * v11);
  v21 = *v3 + (float)(v6 * v3[1]);
  v22 = v7 + (float)(v9 * v8);
  v23 = FIELD_F32(a1, 68);
  v24 = v12 + (float)(v18 * v13);
  v25 = v14 + (float)(v18 * v15);
  v29[0] = v20 * v19;
  v29[4] = v20 * v21;
  v29[8] = -v22;
  v29[1] = (float)((float)(v25 * v22) * v19) - (float)(v24 * v21);
  v29[5] = (float)(v24 * v19) + (float)((float)(v25 * v22) * v21);
  v29[9] = v25 * v20;
  v29[2] = (float)(v22 * (float)(v24 * v19)) + (float)(v25 * v21);
  v29[6] = (float)(v22 * (float)(v24 * v21)) - (float)(v25 * v19);
  v29[10] = v24 * v20;
  v29[3] = v17;
  v29[7] = v23 + -85.0;
  v29[11] = v16;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 52) + 60))(**(_DWORD **)(a1 + 52), v29);
  v28 = FIELD_F32(a1, 60);
  v27[0] = v28 + 1.5;
  v27[1] = v28 + 1.5;
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 52) + 68))(**(_DWORD **)(a1 + 52), v27);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 52));
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 52));
}
