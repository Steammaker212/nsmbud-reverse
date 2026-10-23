/* SolidOnTopCollider_vf24
 * address: 0x6015F904   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SolidOnTopCollider_vf24(_DWORD *a1, int a2, float *a3, float *a4, int a5, int a6)
{
  int v6; // r6
  _BOOL4 v11; // r1
  _BOOL4 result; // r0
  int v13; // r1
  float v14; // s16
  unsigned int v15; // r11
  _DWORD *v16; // r0
  int v17; // r9
  _BYTE *v18; // r0
  float v19; // r0
  int v20; // s2
  int v21; // s3
  int v22; // r1
  int v23; // r10
  _BOOL4 v24; // r0
  float v25; // s0
  float v26; // s2
  char v27; // r12
  float v28; // r1
  float v29; // r2
  float v30; // s18
  int v31; // r3
  int v32; // r0
  int v33; // r3
  int v34; // r8
  int v35; // r9
  _DWORD *v36; // [sp+8h] [bp-78h]
  int v37; // [sp+Ch] [bp-74h]
  char v38; // [sp+14h] [bp-6Ch]
  double v39; // [sp+20h] [bp-60h] BYREF
  int v40; // [sp+28h] [bp-58h]
  int v41; // [sp+2Ch] [bp-54h]
  _DWORD v42[2]; // [sp+30h] [bp-50h] BYREF
  __int64 v43; // [sp+38h] [bp-48h]
  float v44; // [sp+40h] [bp-40h] BYREF
  float v45; // [sp+44h] [bp-3Ch]

  v6 = a6;
  v11 = SolidOnTopCollider_vf24_helper((int)a1, a3, a4, a6, a5);
  result = 0;
  if ( v11 )
  {
    v13 = a1[87];
    if ( v13 >= 1 )
    {
      v14 = 3.4028e38;
      v37 = a2;
      v15 = 0;
      v16 = (_DWORD *)(a2 + 40);
      v17 = 0;
      v36 = v16;
      v38 = 0;
      do
      {
        v18 = (_BYTE *)a1[88];
        if ( v13 > v15 )
          v18 += v17;
        if ( (*v18 & (unsigned __int8)(1 << a5)) != 0 )
        {
          v19 = *a4;
          *(float *)&v42[1] = a4[1];
          *(float *)v42 = v19;
          v43 = *(_QWORD *)&flt_60AF7728[2 * a5];
          v39 = SolidOnTopCollider_vf24_helper_15F370((int)a1, v15, a5, v6);
          v40 = v20;
          v41 = v21;
          if ( ((int (__fastcall *)(double *, float *, _DWORD *))loc_60166CF0)(&v39, &v44, v42) == 1 )
          {
            v22 = a1[88];
            if ( a1[87] > v15 )
              v22 += v17;
            v23 = FIELD_U32(v22, 20);
            v24 = sub_60151114(v6, a1, a5);
            if ( v24 )
            {
              v25 = v44;
              v26 = v45;
              v27 = 1;
              v28 = v45;
              v29 = v44;
            }
            else
            {
              v29 = *a4;
              v27 = 0;
              v44 = v29;
              v23 = dword_60AF76E8[a5];
              v25 = v29;
              v28 = a4[1];
              v26 = v28;
              v45 = v28;
            }
            v38 = 1;
            v30 = (float)((float)(a3[1] - v26) * (float)(a3[1] - v26))
                + (float)((float)(*a3 - v25) * (float)(*a3 - v25));
            if ( v30 <= v14 )
            {
              *(_BYTE *)v37 = 1;
              v38 = 1;
              FIELD_U8(v37, 1) = 1;
              FIELD_U8(v37, 2) = v27;
              FIELD_U8(v37, 3) = v24;
              v31 = a1[88];
              if ( a1[87] > v15 )
                v31 += v17;
              v32 = FIELD_U32(v31, 24);
              v33 = FIELD_U32(v31, 28);
              *v36 = v32;
              v36[1] = v33;
              FIELD_U32(v37, 4) = v15;
              FIELD_U32(v37, 8) = v23;
              FIELD_F32(v37, 12) = v29;
              FIELD_F32(v37, 16) = v28;
              sub_6014A2F0(v37, (int)a1);
              v14 = v30;
            }
          }
          v13 = a1[87];
          v6 = a6;
        }
        ++v15;
        v17 += 32;
      }
      while ( (int)v15 < v13 );
      result = 0;
      if ( (v38 & 1) != 0 )
      {
        FIELD_U32(v6, 5344) = v37;
        v34 = a1[32];
        v35 = a1[33];
        ((void (__fastcall *)(_DWORD *, int, int))loc_60160BD8)(a1, v6, a5);
        sub_601609C4(a1, v6, a5);
        a1[32] = v34;
        a1[33] = v35;
        return *(_BYTE *)v37 && !sub_60150EE8(v6, (int)a1, a5);
      }
    }
  }
  return result;
}
