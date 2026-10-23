/* ShapedCollider_vf24_helper
 * address: 0x60163440   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ShapedCollider_vf24_helper(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  _BOOL4 v10; // r7
  _BOOL4 v11; // r0
  int v12; // r0
  float *v13; // r1
  float *v14; // r7
  float *v15; // r0
  float v16; // s16
  float v17; // s18
  float v18; // s20
  float v19; // s22
  float v20; // s28
  float v21; // s30
  float v22; // s24
  float v23; // s26
  int v24; // r0
  int v25; // r1
  int v26; // r2
  float v27; // r3
  float v28; // s4
  int v30; // r0
  int v31; // r7
  int v32; // r8
  float v33; // s18
  float v34; // s16
  float *v35; // r1
  float v36; // s2
  float v37; // s4
  float v38; // s6
  int v39; // r4
  int v40; // r0
  _DWORD *v41; // [sp+Ch] [bp-8Ch]
  ColliderNodeUnk1 v42; // [sp+10h] [bp-88h] BYREF
  ColliderNodeUnk1 v43; // [sp+20h] [bp-78h] BYREF

  v10 = sub_60151114(a6, (_DWORD *)a1, a5);
  v11 = sub_60150D70(a6, a1, a5);
  if ( !v10 )
  {
    v12 = sub_6014FBD0(a6, a5);
    v13 = *(float **)(a6 + 2204);
    v14 = (float *)v12;
    v15 = *(float **)(a1 + 152);
    v16 = FIELD_F32(a1, 128);
    v17 = FIELD_F32(a1, 132);
    v18 = FIELD_F32(a1, 172);
    v19 = FIELD_F32(a1, 176);
    v20 = *v13;
    v21 = v13[1];
    v22 = *v15;
    v23 = v15[1];
    ColliderNodeUnk1_ctor(&v43);
    switch ( a5 )
    {
      case 0:
        v28 = v20 + v14[2];
        *(float *)&v26 = v21 + *v14;
        *(float *)&v24 = v21 + v14[1];
        goto LABEL_8;
      case 1:
        v28 = v20 + v14[2];
        *(float *)&v26 = v21 + v14[1];
        *(float *)&v24 = v21 + *v14;
LABEL_8:
        *(float *)&v25 = v28;
        v27 = v28;
        break;
      case 2:
        v27 = v20 + v14[1];
        *(float *)&v24 = v21 + v14[2];
        *(float *)&v25 = v20 + *v14;
        goto LABEL_11;
      case 3:
        v27 = v20 + *v14;
        *(float *)&v24 = v21 + v14[2];
        *(float *)&v25 = v20 + v14[1];
LABEL_11:
        v26 = v24;
        break;
      default:
        break;
    }
    v43.field_0 = v25;
    v43.field_4 = v24;
    v43.field_8 = v27;
    v43.field_C = v26;
    ColliderNodeUnk1_ctor(&v42);
    v30 = FIELD_U32(a1, 348);
    if ( v30 <= 0 )
    {
LABEL_19:
      v39 = 0;
      if ( (*(int (__fastcall **)(int, _DWORD, ColliderNodeUnk1 *))(*(_DWORD *)a1 + 40))(a1, 0, &v43) != 1 )
        return v39;
      v39 = 1;
      *(_DWORD *)a2 = 1;
      FIELD_U64(a2, 40) = FIELD_U64(a1, 304);
      FIELD_U32(a2, 4) = -1;
      FIELD_U32(a2, 8) = dword_60AF76E8[a5];
      FIELD_U32(a2, 12) = *a4;
      v40 = a4[1];
    }
    else
    {
      v41 = a4;
      v31 = 0;
      v32 = 0;
      v33 = (float)(v23 + v19) + v17;
      v34 = (float)(v22 + v18) + v16;
      while ( 1 )
      {
        v35 = *(float **)(a1 + 352);
        if ( v30 > (unsigned int)v32 )
          v35 = (float *)((char *)v35 + v31);
        v36 = v35[2];
        v37 = v35[3];
        v38 = v35[4];
        *(float *)&v42.field_0 = v34 + v35[1];
        *(float *)&v42.field_4 = v33 + v36;
        v42.field_8 = v34 + v37;
        *(float *)&v42.field_C = v33 + v38;
        if ( ((int (__fastcall *)(ColliderNodeUnk1 *, _DWORD, ColliderNodeUnk1 *, float *))loc_60166AE0)(
               &v42,
               0,
               &v43,
               &v43.field_8) == 1 )
          break;
        v30 = FIELD_U32(a1, 348);
        ++v32;
        v31 += 32;
        if ( v32 >= v30 )
        {
          a4 = v41;
          goto LABEL_19;
        }
      }
      v39 = 1;
      *(_DWORD *)a2 = 1;
      FIELD_U64(a2, 40) = FIELD_U64(a1, 304);
      FIELD_U32(a2, 4) = -1;
      FIELD_U32(a2, 8) = dword_60AF76E8[a5];
      FIELD_U32(a2, 12) = *v41;
      v40 = v41[1];
    }
    FIELD_U32(a2, 16) = v40;
    sub_6014A2F0(a2, a1);
    return v39;
  }
  if ( a5 != 3 || v11 )
    JUMPOUT(0x601644C4);
  return ((int (__fastcall *)(int, int, int, _DWORD *, int, int))loc_601638EC)(a1, a2, a3, a4, 3, a6);
}
