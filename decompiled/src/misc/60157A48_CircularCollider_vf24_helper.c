/* CircularCollider_vf24_helper
 * address: 0x60157A48   size: 748   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CircularCollider_vf24_helper(int a1, int a2, float *a3, float *a4, int a5, int a6)
{
  int v10; // r6
  float *v11; // r0
  float v12; // s0
  float v13; // s2
  float v14; // s6
  float v15; // s4
  float *v16; // r0
  int v17; // r1
  float v18; // s8
  float v19; // s10
  int v20; // r0
  unsigned int v21; // r11
  float v22; // s18
  float v23; // s16
  int v24; // r0
  float v25; // r0
  __int64 v26; // r2
  float v27; // r0
  signed int v28; // r0
  float v29; // s22
  float v30; // s20
  float v31; // s12
  unsigned int v32; // r5
  unsigned int v33; // r9
  unsigned int v34; // r0
  unsigned int v35; // r1
  bool v36; // cc
  _BOOL4 v37; // r0
  float v38; // r1
  float v39; // r2
  char v40; // r3
  int v41; // r3
  float v43; // [sp+0h] [bp-80h] BYREF
  float v44; // [sp+4h] [bp-7Ch] BYREF
  float v45; // [sp+8h] [bp-78h] BYREF
  float v46; // [sp+Ch] [bp-74h]
  float v47; // [sp+10h] [bp-70h]
  float v48; // [sp+14h] [bp-6Ch]
  float v49[3]; // [sp+1Ch] [bp-64h] BYREF
  _BYTE v50[88]; // [sp+28h] [bp-58h] BYREF

  v10 = 0;
  v11 = *(float **)(a1 + 156);
  v12 = FIELD_F32(a1, 128);
  v13 = FIELD_F32(a1, 132);
  v14 = a3[1] - (float)(v13 + (float)((float)(v11[1] + FIELD_F32(a1, 184)) + FIELD_F32(a1, 360)));
  v15 = *a3 - (float)(v12 + (float)((float)(*v11 + FIELD_F32(a1, 180)) + FIELD_F32(a1, 356)));
  if ( (float)((float)(v14 * v14) + (float)(v15 * v15)) >= (float)(FIELD_F32(a1, 368) * FIELD_F32(a1, 368)) )
  {
    v16 = *(float **)(a1 + 152);
    v17 = FIELD_U32(a1, 384);
    v18 = *v16;
    v19 = v16[1];
    v20 = FIELD_U32(a1, 380);
    v21 = v17 - v20;
    v22 = (float)((float)(v19 + FIELD_F32(a1, 176)) + FIELD_F32(a1, 352)) + v13;
    v23 = (float)((float)(v18 + FIELD_F32(a1, 172)) + FIELD_F32(a1, 348)) + v12;
    if ( v17 == v20 || sub_6000F7B8(a4[1] - v22, *a4 - v23) - FIELD_U32(a1, 380) <= v21 )
    {
      v24 = sub_60166970(v50, a3, a4, a4);
      v49[0] = v23;
      v49[1] = v22;
      v10 = 0;
      v49[2] = FIELD_F32(a1, 364);
      if ( sub_60166DF0(v24, 0, v49) == 1 )
      {
        v25 = *a4;
        LODWORD(v26) = &v44;
        HIDWORD(v26) = &v43;
        v46 = a4[1];
        v45 = v25;
        v27 = flt_60AF7728[2 * a5 + 1];
        v47 = flt_60AF7728[2 * a5];
        v48 = v27;
        v28 = sub_6090F2F0(&v45, v49, v26);
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            v29 = v46 + (float)(v44 * v48);
            v30 = v45 + (float)(v44 * v47);
          }
          else
          {
            v31 = a4[1];
            v29 = v46 + (float)(v44 * v48);
            v30 = v45 + (float)(v44 * v47);
            if ( (float)((float)((float)(v31 - v29) * (float)(v31 - v29))
                       + (float)((float)(*a4 - v30) * (float)(*a4 - v30))) <= (float)((float)((float)(v31 - (float)(v46 + (float)(v48 * v43)))
                                                                                            * (float)(v31 - (float)(v46 + (float)(v48 * v43))))
                                                                                    + (float)((float)(*a4 - (float)(v45 + (float)(v47 * v43)))
                                                                                            * (float)(*a4 - (float)(v45 + (float)(v47 * v43))))) )
            {
              v30 = v45 + (float)(v47 * v43);
              v29 = v46 + (float)(v48 * v43);
            }
          }
          v32 = sub_6000F7B8(v29 - v22, v30 - v23);
          v33 = v32 - 0x40000000;
          if ( !(*(int (__fastcall **)(int, unsigned int, _DWORD))(*(_DWORD *)a1 + 16))(
                  a1,
                  v32 - 0x40000000,
                  (unsigned __int8)(1 << (a5 ^ 1))) )
          {
            v34 = FIELD_U32(a1, 380);
            v35 = FIELD_U32(a1, 384);
            v36 = v34 > v35;
            if ( v34 != v35 )
              v36 = v32 - v34 > v21;
            if ( !v36 )
            {
              v37 = sub_60151114(a6, (_DWORD *)a1, a5);
              v10 = 1;
              if ( v37 )
              {
                v38 = v30;
                v39 = v29;
                v40 = 1;
              }
              else
              {
                v40 = 0;
                v33 = dword_60AF76E8[a5];
                v38 = *a4;
                v39 = a4[1];
              }
              *(_BYTE *)a2 = 1;
              FIELD_U8(a2, 1) = 1;
              FIELD_U8(a2, 2) = v40;
              FIELD_U8(a2, 3) = v37;
              v41 = FIELD_U32(a1, 308);
              FIELD_U32(a2, 40) = FIELD_U32(a1, 304);
              FIELD_U32(a2, 44) = v41;
              FIELD_U32(a2, 4) = -1;
              FIELD_U32(a2, 8) = v33;
              FIELD_F32(a2, 12) = v38;
              FIELD_F32(a2, 16) = v39;
              sub_6014A2F0(a2, a1);
            }
          }
        }
      }
    }
  }
  return v10;
}
