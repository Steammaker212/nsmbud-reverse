/* CircularCollider_vf24_helper_157D3C
 * address: 0x60157D3C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CircularCollider_vf24_helper_157D3C(int a1, int a2, int a3, float *a4, int a5, int a6)
{
  int v9; // r6
  float *v10; // r0
  float v11; // s6
  float v12; // s8
  float v13; // s0
  float v14; // s2
  float v15; // s4
  float v16; // s10
  float v17; // s12
  float v18; // s14
  float v19; // r0
  float *v20; // r5
  float v21; // r1
  float v22; // s20
  float v23; // s22
  float v24; // s16
  float v25; // s18
  unsigned int v26; // r9
  _BOOL4 v27; // r0
  float v28; // s0
  float v29; // r1
  float v30; // r2
  char v31; // r3
  int v32; // r3
  float v34; // [sp+0h] [bp-60h] BYREF
  float v35[3]; // [sp+4h] [bp-5Ch] BYREF
  float v36; // [sp+10h] [bp-50h] BYREF
  float v37; // [sp+14h] [bp-4Ch]
  float v38; // [sp+18h] [bp-48h]
  float v39; // [sp+1Ch] [bp-44h]

  v9 = 0;
  if ( (*(int (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)a1 + 40))(a1, 0, a4) == 1 )
  {
    v10 = *(float **)(a1 + 152);
    v11 = FIELD_F32(a1, 172);
    v12 = FIELD_F32(a1, 176);
    v13 = FIELD_F32(a1, 128);
    v14 = FIELD_F32(a1, 132);
    v15 = FIELD_F32(a1, 352);
    v16 = FIELD_F32(a1, 348);
    v9 = 0;
    v17 = *v10;
    v18 = v10[1];
    v19 = *a4;
    v37 = a4[1];
    v36 = v19;
    v20 = &flt_60AF7728[2 * a5];
    v21 = v20[1];
    v22 = (float)((float)(v17 + v11) + v16) + v13;
    v23 = (float)((float)(v18 + v12) + v15) + v14;
    v38 = *v20;
    v39 = v21;
    v35[0] = v22;
    v35[1] = v23;
    v35[2] = FIELD_F32(a1, 364);
    if ( sub_6090F2F0(&v36, v35, (unsigned int)&v34) )
    {
      v24 = v36 + (float)(v34 * v38);
      v25 = v37 + (float)(v34 * v39);
      v26 = sub_6000F7B8(v25 - v23, v24 - v22) - 0x40000000;
      if ( !(*(int (__fastcall **)(int, unsigned int, _DWORD))(*(_DWORD *)a1 + 16))(
              a1,
              v26,
              (unsigned __int8)(1 << (a5 ^ 1))) )
      {
        v27 = sub_60151114(a6, (_DWORD *)a1, a5);
        if ( v27 )
        {
          v28 = a4[1];
          if ( (float)((float)((float)(v28 - v25) * (float)(v28 - v25))
                     + (float)((float)(*a4 - v24) * (float)(*a4 - v24))) <= 64.0 )
          {
            v30 = v25;
            v29 = v24;
            v31 = 1;
            goto LABEL_10;
          }
          v26 = dword_60AF76E8[a5];
          v29 = *a4 + (float)(*v20 * 8.0);
          v30 = v28 + (float)(flt_60AF7728[2 * a5 + 1] * 8.0);
        }
        else
        {
          v26 = dword_60AF76E8[a5];
          v29 = *a4;
          v30 = a4[1];
        }
        v31 = 0;
LABEL_10:
        v9 = 1;
        *(_BYTE *)a2 = 1;
        FIELD_U8(a2, 1) = 1;
        FIELD_U8(a2, 2) = v31;
        FIELD_U8(a2, 3) = v27;
        v32 = FIELD_U32(a1, 308);
        FIELD_U32(a2, 40) = FIELD_U32(a1, 304);
        FIELD_U32(a2, 44) = v32;
        FIELD_U32(a2, 4) = -1;
        FIELD_U32(a2, 8) = v26;
        FIELD_F32(a2, 12) = v29;
        FIELD_F32(a2, 16) = v30;
        sub_6014A2F0(a2, a1);
      }
    }
  }
  return v9;
}
