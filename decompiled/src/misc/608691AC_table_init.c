/* table_init
 * address: 0x608691AC   size: 2132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall table_init(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  float *v8; // r0
  float *v9; // r9
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s6
  float *v14; // r1
  int result; // r0
  float v16; // s8
  float v17; // s10
  float v18; // s12
  float v19; // s14
  bool v20; // zf
  const char *v21; // r8
  const char *v22; // r1
  const char *v23; // r1
  const char *v24; // r1
  const char *v25; // r1
  const char *v26; // r1
  const char *v27; // r1
  const char *v28; // r1
  const char *v29; // r1
  const char *v30; // r1
  const char *v31; // r1
  const char *v32; // r1
  const char *v33; // r1
  const char *v34; // r1
  const char *v35; // r1
  const char *v36; // r1
  const char *v37; // r1
  const char *v38; // r1
  const char *v39; // r1
  const char *v40; // r1
  const char *v41; // r1
  const char *v42; // r1
  const char *v43; // r1
  const char *v44; // r1

  v7 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
  if ( v7 )
  {
    v8 = (float *)(v7 + FIELD_U32(a1, 36));
    v9 = v8;
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  memset(v8, 0, 416);
  *v9 = 0.0;
  if ( (FIELD_U8(a1, 50) & 8) == 0 )
  {
    v10 = (float)FIELD_U8(a1, 7) * 0.0039216;
    v11 = (float)FIELD_U8(a1, 6) * 0.0039216;
    v12 = (float)FIELD_U8(a1, 5) * 0.0039216;
    v13 = (float)FIELD_U8(a1, 4) * 0.0039216;
    if ( (FIELD_U8(a1, 50) & 0x10) != 0 )
      goto LABEL_9;
LABEL_8:
    result = FIELD_U8(a1, 8);
    v16 = (float)FIELD_U8(a1, 11) * 0.0039216;
    v17 = (float)FIELD_U8(a1, 10) * 0.0039216;
    v18 = (float)FIELD_U8(a1, 9) * 0.0039216;
    v19 = (float)(unsigned int)result * 0.0039216;
    goto LABEL_10;
  }
  v14 = *(float **)(a1 + 4);
  v13 = *v14;
  v12 = v14[1];
  v11 = v14[2];
  v10 = v14[3];
  if ( (FIELD_U8(a1, 50) & 0x10) == 0 )
    goto LABEL_8;
LABEL_9:
  result = FIELD_U32(a1, 4);
  v19 = FIELD_F32(result, 16);
  v18 = FIELD_F32(result, 20);
  v17 = FIELD_F32(result, 24);
  v16 = FIELD_F32(result, 28);
LABEL_10:
  v20 = a3 == 0;
  v9[4] = v13;
  v9[5] = v12;
  v9[6] = v11;
  v9[7] = v10;
  v9[8] = v19;
  v9[9] = v18;
  v9[10] = v17;
  v9[11] = v16;
  if ( a3 )
    v20 = a4 == 0;
  if ( !v20 )
  {
    do
    {
      v21 = *(const char **)a3;
      v22 = *(const char **)a3;
      if ( *(_DWORD *)a3 )
        v22 += a3;
      if ( !strcmp("__CUS_Vec2_0", v22) )
      {
        v9[72] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[73] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v21 = *(const char **)a3;
      }
      v23 = v21;
      if ( v21 )
        v23 = &v21[a3];
      if ( !strcmp("__CUS_Vec2_1", v23) )
      {
        v9[76] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[77] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v21 = *(const char **)a3;
      }
      v24 = v21;
      if ( v21 )
        v24 = &v21[a3];
      if ( !strcmp("__CUS_Vec2_2", v24) )
      {
        v9[80] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[81] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v21 = *(const char **)a3;
      }
      v25 = v21;
      if ( v21 )
        v25 = &v21[a3];
      if ( !strcmp("__CUS_Vec2_3", v25) )
      {
        v9[84] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[85] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v21 = *(const char **)a3;
      }
      v26 = v21;
      if ( v21 )
        v26 = &v21[a3];
      if ( !strcmp("__CUS_Vec3_0", v26) )
      {
        v9[88] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[89] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v9[90] = *(float *)(a3 + FIELD_U32(a3, 4) + 8);
        v21 = *(const char **)a3;
      }
      v27 = v21;
      if ( v21 )
        v27 = &v21[a3];
      if ( !strcmp("__CUS_Vec3_1", v27) )
      {
        v9[92] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[93] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v9[94] = *(float *)(a3 + FIELD_U32(a3, 4) + 8);
        v21 = *(const char **)a3;
      }
      v28 = v21;
      if ( v21 )
        v28 = &v21[a3];
      if ( !strcmp("__CUS_Vec3_2", v28) )
      {
        v9[96] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[97] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v9[98] = *(float *)(a3 + FIELD_U32(a3, 4) + 8);
        v21 = *(const char **)a3;
      }
      v29 = v21;
      if ( v21 )
        v29 = &v21[a3];
      if ( !strcmp("__CUS_Vec3_3", v29) )
      {
        v9[100] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[101] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v9[102] = *(float *)(a3 + FIELD_U32(a3, 4) + 8);
        v21 = *(const char **)a3;
      }
      v30 = v21;
      if ( v21 )
        v30 = &v21[a3];
      if ( !strcmp("__CUS_Rgba_0", v30) )
      {
        v9[52] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[53] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v9[54] = *(float *)(a3 + FIELD_U32(a3, 4) + 8);
        v9[55] = *(float *)(a3 + FIELD_U32(a3, 4) + 12);
        v21 = *(const char **)a3;
      }
      v31 = v21;
      if ( v21 )
        v31 = &v21[a3];
      if ( !strcmp("__CUS_Rgba_1", v31) )
      {
        v9[56] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[57] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v9[58] = *(float *)(a3 + FIELD_U32(a3, 4) + 8);
        v9[59] = *(float *)(a3 + FIELD_U32(a3, 4) + 12);
        v21 = *(const char **)a3;
      }
      v32 = v21;
      if ( v21 )
        v32 = &v21[a3];
      if ( !strcmp("__CUS_Rgba_2", v32) )
      {
        v9[60] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[61] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v9[62] = *(float *)(a3 + FIELD_U32(a3, 4) + 8);
        v9[63] = *(float *)(a3 + FIELD_U32(a3, 4) + 12);
        v21 = *(const char **)a3;
      }
      v33 = v21;
      if ( v21 )
        v33 = &v21[a3];
      if ( !strcmp("__CUS_Rgba_3", v33) )
      {
        v9[64] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[65] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v9[66] = *(float *)(a3 + FIELD_U32(a3, 4) + 8);
        v9[67] = *(float *)(a3 + FIELD_U32(a3, 4) + 12);
        v21 = *(const char **)a3;
      }
      v34 = v21;
      if ( v21 )
        v34 = &v21[a3];
      if ( !strcmp("__CUS_IVec2_0", v34) )
      {
        v9[36] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[37] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v21 = *(const char **)a3;
      }
      v35 = v21;
      if ( v21 )
        v35 = &v21[a3];
      if ( !strcmp("__CUS_IVec2_1", v35) )
      {
        v9[40] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[41] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v21 = *(const char **)a3;
      }
      v36 = v21;
      if ( v21 )
        v36 = &v21[a3];
      if ( !strcmp("__CUS_IVec2_2", v36) )
      {
        v9[44] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[45] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v21 = *(const char **)a3;
      }
      v37 = v21;
      if ( v21 )
        v37 = &v21[a3];
      if ( !strcmp("__CUS_IVec2_3", v37) )
      {
        v9[48] = *(float *)(a3 + FIELD_U32(a3, 4));
        v9[49] = *(float *)(a3 + FIELD_U32(a3, 4) + 4);
        v21 = *(const char **)a3;
      }
      v38 = v21;
      if ( v21 )
        v38 = &v21[a3];
      if ( !strcmp("__CUS_Int_0", v38) )
      {
        v9[32] = *(float *)(a3 + FIELD_U32(a3, 4));
        v21 = *(const char **)a3;
      }
      v39 = v21;
      if ( v21 )
        v39 = &v21[a3];
      if ( !strcmp("__CUS_Int_1", v39) )
      {
        v9[33] = *(float *)(a3 + FIELD_U32(a3, 4));
        v21 = *(const char **)a3;
      }
      v40 = v21;
      if ( v21 )
        v40 = &v21[a3];
      if ( !strcmp("__CUS_Int_2", v40) )
      {
        v9[34] = *(float *)(a3 + FIELD_U32(a3, 4));
        v21 = *(const char **)a3;
      }
      v41 = v21;
      if ( v21 )
        v41 = &v21[a3];
      if ( !strcmp("__CUS_Int_3", v41) )
      {
        v9[35] = *(float *)(a3 + FIELD_U32(a3, 4));
        v21 = *(const char **)a3;
      }
      v42 = v21;
      if ( v21 )
        v42 = &v21[a3];
      if ( !strcmp("__CUS_Float_0", v42) )
      {
        v9[68] = *(float *)(a3 + FIELD_U32(a3, 4));
        v21 = *(const char **)a3;
      }
      v43 = v21;
      if ( v21 )
        v43 = &v21[a3];
      if ( !strcmp("__CUS_Float_1", v43) )
      {
        v9[69] = *(float *)(a3 + FIELD_U32(a3, 4));
        v21 = *(const char **)a3;
      }
      v44 = v21;
      if ( v21 )
        v44 = &v21[a3];
      if ( !strcmp("__CUS_Float_2", v44) )
      {
        v9[70] = *(float *)(a3 + FIELD_U32(a3, 4));
        v21 = *(const char **)a3;
      }
      if ( v21 )
        v21 += a3;
      result = strcmp("__CUS_Float_3", v21);
      if ( !result )
      {
        result = *(_DWORD *)(a3 + FIELD_U32(a3, 4));
        *((_DWORD *)v9 + 71) = result;
      }
      --a4;
      a3 += 12;
    }
    while ( a4 );
  }
  return result;
}
