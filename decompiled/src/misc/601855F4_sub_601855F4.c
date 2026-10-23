/* sub_601855F4
 * address: 0x601855F4   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601855F4(int a1)
{
  int result; // r0
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // r3
  int v7; // s2
  float *v8; // r6
  float *v9; // r1
  float v10; // s14
  float v11; // s0
  float v12; // s2
  float v13; // s10
  float v14; // s5
  float v15; // s6
  float v16; // s1
  float v17; // s13
  float v18; // s9
  int v19; // r0
  int (__fastcall *v20)(int, _DWORD *); // r2
  int v21; // r5
  float v22; // s2
  _DWORD v23[3]; // [sp+0h] [bp-70h] BYREF
  float v24; // [sp+Ch] [bp-64h]
  float v25; // [sp+1Ch] [bp-54h]
  float v26; // [sp+2Ch] [bp-44h]
  float v27[16]; // [sp+30h] [bp-40h] BYREF

  result = FIELD_U8(a1, 216);
  if ( (result & 8) == 0 )
  {
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 268));
    v3 = FIELD_U32(a1, 176);
    v4 = FIELD_U32(a1, 180);
    v5 = FIELD_U32(a1, 184);
    v6 = (v5 >> 20) & 0xFF0;
    v7 = v4 & 0xFFFFFF;
    v8 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
    v10 = (float)(v3 & 0xFFFFFF);
    v11 = (float)(v5 & 0xFFFFFF) * 0.000000059605;
    v12 = (float)(unsigned int)v7 * 0.000000059605;
    v13 = *(float *)((char *)&sinLutTable[2] + v6) + (float)(v11 * *(float *)((char *)&sinLutTable[3] + v6));
    v14 = v8[2] + (float)(v12 * v8[3]);
    v15 = *(float *)((char *)sinLutTable + v6) + (float)(v11 * *(float *)((char *)&sinLutTable[1] + v6));
    v16 = *v8 + (float)(v12 * v8[1]);
    v17 = v9[2] + (float)((float)(v10 * 0.000000059605) * v9[3]);
    v18 = *v9 + (float)((float)(v10 * 0.000000059605) * v9[1]);
    v27[0] = v14 * v13;
    v27[4] = v14 * v15;
    v27[8] = -v16;
    v27[1] = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
    v27[5] = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
    v27[9] = v18 * v14;
    v27[2] = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
    v27[6] = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
    v27[10] = v17 * v14;
    v27[3] = FIELD_F32(a1, 80);
    v27[7] = FIELD_F32(a1, 84);
    v27[11] = FIELD_F32(a1, 88);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v27);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 56))(**(_DWORD **)(a1 + 268));
    v19 = **(_DWORD **)(a1 + 268);
    v20 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v19 + 84);
    v23[0] = &sead__SafeStringBase__vtable;
    v23[1] = &unk_60ABF3B9;
    v21 = v20(v19, v23);
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 268) + 108))(**(_DWORD **)(a1 + 268), v21, v23);
    v22 = FIELD_F32(a1, 276);
    v24 = FIELD_F32(a1, 272) + v24;
    v25 = v22 + v25;
    v26 = v26 + 0.0;
    return (*(int (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 268) + 104))(
             **(_DWORD **)(a1 + 268),
             v21,
             v23);
  }
  return result;
}
