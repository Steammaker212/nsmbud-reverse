/* SolidOnTopCollider_vf24_helper
 * address: 0x6015EE3C   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SolidOnTopCollider_vf24_helper(int a1, float *a2, float *a3, int a4, int a5)
{
  int v9; // r3
  unsigned int v10; // r7
  float *v11; // r0
  float *v12; // r1
  float v13; // s12
  float v14; // s0
  float v15; // s2
  float v16; // s6
  unsigned int v17; // r0
  int v18; // r3
  float *v19; // r1
  float *v20; // r2
  float v21; // s12
  float v22; // s0
  float v23; // s2
  float v24; // s6
  float v25; // s16
  float v26; // r10
  float v27; // s18
  int v29; // r0
  int v30; // r2
  float v31[2]; // [sp+0h] [bp-68h] BYREF
  float v32; // [sp+8h] [bp-60h] BYREF
  float v33; // [sp+Ch] [bp-5Ch]
  float v34; // [sp+10h] [bp-58h]
  float v35; // [sp+14h] [bp-54h]
  float v36; // [sp+18h] [bp-50h] BYREF
  float v37; // [sp+1Ch] [bp-4Ch]
  float v38; // [sp+20h] [bp-48h] BYREF
  float v39; // [sp+24h] [bp-44h]
  float v40; // [sp+28h] [bp-40h]
  float v41; // [sp+2Ch] [bp-3Ch]

  v10 = SolidOnTopCollider_vf24_helper_helper_15F088(a1, a3, a5);
  v11 = *(float **)(a1 + 152);
  v12 = *(float **)(a1 + 352);
  if ( FIELD_U32(a1, 348) > v10 )
    v12 += 8 * v10;
  v13 = v12[2];
  v14 = (float)(*v11 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 128);
  v15 = (float)(v11[1] + FIELD_F32(a1, 176)) + FIELD_F32(a1, 132);
  v32 = v14 + v12[1];
  v33 = v15 + v13;
  v16 = v12[4];
  v36 = v14 + v12[3];
  v37 = v15 + v16;
  sub_60166970(&v38, &v32, &v36, v9);
  if ( (float)((float)((float)(a3[1] - v39) * (float)(v40 - v38)) - (float)((float)(*a3 - v38) * (float)(v41 - v39))) > 0.0 )
    return 0;
  v17 = SolidOnTopCollider_vf24_helper_helper_15F1FC(a1, a2, a5);
  if ( (int)abs32(v10 - v17) > 1 )
    return 0;
  v19 = *(float **)(a1 + 156);
  v20 = *(float **)(a1 + 360);
  if ( FIELD_U32(a1, 356) > v17 )
    v20 += 8 * v17;
  v21 = v20[2];
  v22 = (float)(*v19 + FIELD_F32(a1, 180)) + FIELD_F32(a1, 128);
  v23 = (float)(v19[1] + FIELD_F32(a1, 184)) + FIELD_F32(a1, 132);
  v36 = v22 + v20[1];
  v37 = v23 + v21;
  v24 = v20[4];
  v31[0] = v22 + v20[3];
  v31[1] = v23 + v24;
  sub_60166970(&v32, &v36, v31, v18);
  v25 = *a2;
  v26 = a2[1];
  if ( a5 == 3 )
  {
    v27 = FIELD_F32(a1, 364);
    if ( v27 > 0.0 )
    {
      if ( (FIELD_U8(a4, 2232) & 1) != 0 )
      {
        v29 = sub_6014C4D4(a4);
        v30 = FIELD_U32(a1, 352);
        if ( FIELD_U32(a1, 348) > v10 )
          v30 += 32 * v10;
        if ( v29 == FIELD_U32(v30, 20) )
          return (float)((float)((float)(v26 - v33) * (float)(v34 - v32))
                       - (float)((float)(v25 - v32) * (float)(v35 - v33))) >= 0.0;
      }
      else if ( (float)(v26 - a3[1]) <= 0.0 )
      {
        return (float)((float)((float)(v26 - v33) * (float)(v34 - v32))
                     - (float)((float)(v25 - v32) * (float)(v35 - v33))) >= 0.0;
      }
      v26 = v26 + v27;
    }
  }
  return (float)((float)((float)(v26 - v33) * (float)(v34 - v32)) - (float)((float)(v25 - v32) * (float)(v35 - v33))) >= 0.0;
}
