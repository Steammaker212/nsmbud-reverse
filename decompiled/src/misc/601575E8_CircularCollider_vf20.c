/* CircularCollider_vf20
 * address: 0x601575E8   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CircularCollider_vf20(int a1, int a2, _BYTE *a3, _DWORD *a4, int a5, int a6)
{
  float *v9; // r0
  float v10; // s2
  int v11; // r0
  int v12; // r1
  int v13; // r3
  int v14; // r6
  float v15; // s1
  float v16; // s0
  unsigned int v17; // r7
  int v18; // r0
  bool v19; // zf
  int v20; // r1
  unsigned int v21; // r8
  int v22; // r0
  char v23; // r9
  float v24; // s1
  float v25; // s0
  int v26; // r0
  unsigned int v27; // r0
  int v28; // r10
  int v29; // r6
  float *v30; // r0
  float v31; // s4
  float v32; // s0
  unsigned int v33; // r0
  unsigned int v34; // r1
  float v36[2]; // [sp+0h] [bp-68h] BYREF
  float v37; // [sp+8h] [bp-60h]
  float v38; // [sp+Ch] [bp-5Ch]
  float v39; // [sp+10h] [bp-58h] BYREF
  float v40; // [sp+14h] [bp-54h]
  _DWORD v41[4]; // [sp+18h] [bp-50h] BYREF
  float v42[2]; // [sp+28h] [bp-40h] BYREF
  float v43; // [sp+30h] [bp-38h]
  float v44; // [sp+34h] [bp-34h]
  float v45; // [sp+38h] [bp-30h] BYREF
  float v46; // [sp+3Ch] [bp-2Ch]

  if ( *a3 )
    goto LABEL_2;
  v18 = (*(int (__fastcall **)(int, float *, _DWORD *))(*(_DWORD *)a1 + 40))(a1, v42, a4);
  v19 = v18 == 1;
  if ( v18 == 1 )
    v19 = LOBYTE(v42[0]) == 0;
  if ( v19 )
  {
    if ( a2 )
    {
      *(_BYTE *)a2 = 15;
      FIELD_U32(a2, 4) = *a4;
      FIELD_U32(a2, 8) = a4[1];
      FIELD_U32(a2, 12) = 0;
      FIELD_U32(a2, 16) = 0;
      v20 = FIELD_U32(a1, 308);
      FIELD_U32(a2, 24) = FIELD_U32(a1, 304);
      FIELD_U32(a2, 28) = v20;
      FIELD_U32(a2, 32) = a1;
    }
    return 1;
  }
  else
  {
LABEL_2:
    v9 = *(float **)(a1 + 152);
    v10 = (float)((float)(v9[1] + FIELD_F32(a1, 176)) + FIELD_F32(a1, 352)) + FIELD_F32(a1, 132);
    v45 = (float)((float)(*v9 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 348)) + FIELD_F32(a1, 128);
    v46 = v10;
    v11 = sub_60166970(v42, a4, a5, a4);
    v12 = FIELD_U32(a1, 364);
    *(float *)&v41[1] = v46;
    *(float *)v41 = v45;
    v41[2] = v12;
    v14 = 0;
    if ( sub_60166DF0(v11, &v39, v41) == 1 )
    {
      sub_60166970(v36, &v45, &v39, v13);
      v15 = v37 - v36[0];
      v16 = v38 - v36[1];
      if ( (float)(v37 - v36[0]) > 0.0001 || v15 < -0.0001 )
      {
        if ( v16 > 0.0001 || v16 < -0.0001 )
        {
          v17 = sub_6000F7B8(v16, v15);
        }
        else
        {
          v17 = 0x80000000;
          if ( v15 >= 0.0 )
            v17 = 0;
        }
      }
      else
      {
        v17 = -1073741824;
        if ( v16 >= 0.0 )
          v17 = 0x40000000;
      }
      v21 = v17 - 0x40000000;
      v22 = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 20))(a1, v17 - 0x40000000);
      v23 = v22;
      if ( (v22 & a6) != 0 )
      {
        v24 = v43 - v42[0];
        v25 = v44 - v42[1];
        if ( (float)(v43 - v42[0]) <= 0.0001 && v24 >= -0.0001 )
        {
          v26 = -1073741824;
          if ( v25 >= 0.0 )
            v26 = 0x40000000;
          if ( v26 == v21 )
            return v14;
          goto LABEL_35;
        }
        if ( v25 > 0.0001 || v25 < -0.0001 )
        {
          if ( sub_6000F7B8(v25, v24) == v21 )
            return v14;
          goto LABEL_35;
        }
        v27 = 0x80000000;
        if ( v24 >= 0.0 )
          v27 = 0;
        if ( v27 != v21 )
        {
LABEL_35:
          if ( (FIELD_U32(a1, 308) & 0xF) != 2 )
            goto LABEL_40;
          v28 = FIELD_U32(a1, 380);
          v29 = FIELD_U32(a1, 384);
          if ( v29 == v28 )
            goto LABEL_40;
          v30 = *(float **)(a1 + 152);
          v31 = (float)((float)(*v30 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 348)) + FIELD_F32(a1, 128);
          v32 = (float)((float)(v30[1] + FIELD_F32(a1, 176)) + FIELD_F32(a1, 352)) + FIELD_F32(a1, 132);
          if ( v39 == v31 && v40 == v32 )
            goto LABEL_40;
          v33 = sub_6000F7B8(v40 - v32, v39 - v31);
          v34 = v29 - v28;
          v14 = 0;
          if ( v33 - FIELD_U32(a1, 380) <= v34 )
          {
LABEL_40:
            v14 = 1;
            if ( a2 )
            {
              *(_BYTE *)a2 = v23;
              FIELD_F32(a2, 4) = v39;
              FIELD_F32(a2, 8) = v40;
              FIELD_U32(a2, 12) = v21;
              FIELD_U32(a2, 16) = v17 + 0x40000000;
              FIELD_U64(a2, 24) = FIELD_U64(a1, 304);
              FIELD_U32(a2, 32) = a1;
            }
          }
        }
      }
    }
  }
  return v14;
}
