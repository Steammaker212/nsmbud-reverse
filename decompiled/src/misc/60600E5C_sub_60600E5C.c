/* sub_60600E5C
 * address: 0x60600E5C   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60600E5C(int a1)
{
  ModelWrapper **v2; // r5
  int result; // r0
  int v4; // r3
  int v5; // r1
  unsigned int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r1
  unsigned int v9; // r2
  int v10; // r6
  int v11; // r1
  int v12; // s4
  float *v13; // r6
  float *v14; // r3
  unsigned int v15; // r0
  float *v16; // r7
  float *v17; // r0
  float v18; // s0
  float v19; // s2
  float v20; // s4
  float v21; // s10
  float v22; // s3
  float v23; // s6
  float v24; // s14
  float v25; // s7
  float v26; // s11
  unsigned int v27; // r0
  ModelWrapper *v28; // r6
  int v29; // [sp+8h] [bp-70h]
  int v30; // [sp+Ch] [bp-6Ch]
  int v31; // [sp+10h] [bp-68h]
  int v32; // [sp+14h] [bp-64h]
  float v33[24]; // [sp+18h] [bp-60h] BYREF

  v2 = (ModelWrapper **)(a1 + 27212);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 27212) + 68))(**(_DWORD **)(a1 + 27212), a1 + 6124);
  ModelWrapper_updateModel(*v2);
  result = FIELD_U8(a1, 6101);
  if ( FIELD_U8(a1, 6101) )
  {
    v4 = 0;
    do
    {
      v5 = 0;
      if ( (unsigned int)v4 < 4 )
        v5 = v4;
      v32 = *(_DWORD *)(a1 + 220 * v5 + 6868);
      if ( v32 >= 1 )
      {
        v6 = 0;
        v29 = v4;
        v30 = a1 + 220 * v5;
        v31 = v32 * v4;
        do
        {
          v7 = FIELD_U32(a1, 156);
          v8 = FIELD_U32(a1, 160);
          v9 = FIELD_U32(a1, 164);
          v10 = (v8 >> 20) & 0xFF0;
          v11 = v8 & 0xFFFFFF;
          v12 = v7 & 0xFFFFFF;
          v13 = (float *)((char *)sinLutTable + v10);
          v14 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
          v15 = 0;
          v16 = (float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0));
          if ( v6 < 0x10 )
            v15 = v6;
          v17 = (float *)(v30 + 12 * v15);
          v18 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
          v19 = (float)(unsigned int)v11 * 0.000000059605;
          v20 = (float)(unsigned int)v12 * 0.000000059605;
          v21 = v16[2] + (float)(v18 * v16[3]);
          v22 = v13[2] + (float)(v19 * v13[3]);
          v23 = *v16 + (float)(v18 * v16[1]);
          v24 = *v13 + (float)(v19 * v13[1]);
          v25 = *v14 + (float)(v20 * v14[1]);
          v26 = v14[2] + (float)(v20 * v14[3]);
          v33[0] = (float)(v22 * v21) + (float)(v25 * (float)(v24 * v23));
          v33[4] = v26 * v23;
          v33[8] = (float)(v25 * (float)(v22 * v23)) - (float)(v24 * v21);
          v33[1] = (float)(v25 * (float)(v24 * v21)) - (float)(v22 * v23);
          v33[5] = v26 * v21;
          v33[9] = (float)(v24 * v23) + (float)(v25 * (float)(v22 * v21));
          v33[2] = v26 * v24;
          v33[6] = -v25;
          v33[10] = v26 * v22;
          v33[3] = v17[1721];
          v33[7] = v17[1722];
          v33[11] = v17[1723];
          v27 = v31 + v6;
          if ( v31 + v6 >= 0x20 )
            v27 = 0;
          v28 = *(ModelWrapper **)(a1 + 4 * v27 + 27216);
          ModelWrapper_updateAnims(v28);
          (*(void (__fastcall **)(void *, float *))(*(_DWORD *)FIELD_U32(v28, 0x0) + 60))(FIELD_U32(v28, 0x0), v33);
          ModelWrapper_updateModel(v28);
          ++v6;
        }
        while ( v32 != v6 );
        v4 = v29;
        result = FIELD_U8(a1, 6101);
      }
      ++v4;
    }
    while ( v4 < (unsigned __int8)result );
  }
  return result;
}
