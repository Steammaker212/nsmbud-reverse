/* sub_6068B428
 * address: 0x6068B428   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068B428(int a1)
{
  float v2; // s0
  float v3; // s2
  int v4; // r6
  float v5; // s16
  float v6; // s8
  float v7; // s9
  float v8; // s11
  float v9; // s14
  int v10; // r5
  float v11; // s7
  float v12; // s5
  float v13; // s12
  float v14; // s4
  float v15; // s1
  float v16; // s10
  float v17; // s2
  float v18; // s0
  float v19; // s16
  float v20; // s8
  float v21; // s9
  unsigned __int64 v22; // kr00_8
  float *v23; // r7
  float v24; // s9
  float *v25; // r0
  float v26; // s11
  float v27; // s13
  float v28; // s6
  float v29; // s4
  float v30; // s0
  int v32; // [sp+4h] [bp-84h] BYREF
  _DWORD v33[12]; // [sp+8h] [bp-80h] BYREF
  float32x2_t v34; // [sp+38h] [bp-50h] BYREF
  float v35; // [sp+40h] [bp-48h]
  float v36; // [sp+44h] [bp-44h]
  float v37; // [sp+48h] [bp-40h]
  float v38; // [sp+4Ch] [bp-3Ch]
  float v39; // [sp+50h] [bp-38h]
  float v40; // [sp+54h] [bp-34h]
  float v41; // [sp+58h] [bp-30h]
  float v42; // [sp+5Ch] [bp-2Ch]
  float v43; // [sp+60h] [bp-28h]
  float v44; // [sp+64h] [bp-24h]

  if ( sub_6068C438(MaskMgr_instance) == 1 )
  {
    v2 = FIELD_F32(a1, 88);
    v3 = FIELD_F32(a1, 92);
    v4 = 0;
    memset(v33, 0, 16);
    v5 = v3 * 252.0;
    *(float *)&v33[4] = v3 * 252.0;
    v33[5] = 0;
    *(float *)&v33[6] = v2 * 324.8;
    *(float *)&v33[7] = v3 * 252.0;
    v33[8] = 0;
    *(float *)&v33[9] = v2 * 324.8;
    v33[10] = 0;
    v33[11] = 0;
    v32 = -FIELD_U32(a1, 84);
    sub_6083279C((int)&v34, (unsigned int *)&v32);
    Mtx34_rotateY(&v34, (unsigned int *)(a1 + 80));
    v6 = FIELD_F32(a1, 64);
    v7 = FIELD_F32(a1, 68);
    v8 = FIELD_F32(a1, 72);
    v9 = v35;
    v10 = 0;
    v11 = v36 + (float)((float)((float)(v34.n64_f32[1] * v7) + (float)(v34.n64_f32[0] * v6)) + (float)(v35 * v8));
    v36 = v11;
    v12 = v38;
    v13 = v37;
    v14 = v39;
    v15 = v40 + (float)((float)((float)(v38 * v7) + (float)(v37 * v6)) + (float)(v39 * v8));
    v40 = v15;
    v16 = v42;
    v17 = v41;
    v18 = v43;
    v19 = v5 * 0.5;
    v20 = v44 + (float)((float)((float)(v42 * v7) + (float)(v41 * v6)) + (float)(v43 * v8));
    v21 = 0.0;
    v44 = v20;
    v22 = v34.n64_u64[0];
    while ( 1 )
    {
      v23 = (float *)&v33[v4];
      v24 = v21 - v19;
      v25 = (float *)(a1 + v4 * 4);
      v26 = *(float *)&v33[v4];
      v27 = *(float *)&v33[v4 + 2];
      v28 = (float)(v11
                  + (float)((float)((float)(v24 * *((float *)&v22 + 1)) + (float)(*(float *)&v22 * v26))
                          + (float)(v9 * v27)))
          + FIELD_F32(a1, 52);
      *v23 = v28;
      v29 = (float)(v15 + (float)((float)((float)(v24 * v12) + (float)(v26 * v13)) + (float)(v27 * v14)))
          + FIELD_F32(a1, 56);
      v23[1] = v29;
      v30 = (float)(v20 + (float)((float)((float)(v24 * v16) + (float)(v26 * v17)) + (float)(v27 * v18)))
          + FIELD_F32(a1, 60);
      v23[2] = v30;
      v25[1] = v28;
      v25[2] = v29;
      v25[3] = v30;
      v25[3] = FIELD_F32(a1, 112);
      sub_6068A7C8(FIELD_U32(a1, 104), (_DWORD *)(a1 + v4 * 4 + 4), v10);
      if ( v4 == 9 )
        break;
      v20 = v44;
      v18 = v43;
      v16 = v42;
      v17 = v41;
      v15 = v40;
      v14 = v39;
      v12 = v38;
      v13 = v37;
      v22 = v34.n64_u64[0];
      v9 = v35;
      v11 = v36;
      v21 = v23[4];
      ++v10;
      v4 += 3;
    }
  }
  return 1;
}
