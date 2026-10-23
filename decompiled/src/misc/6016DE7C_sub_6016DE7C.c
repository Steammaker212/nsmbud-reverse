/* sub_6016DE7C
 * address: 0x6016DE7C   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016DE7C(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  int result; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int *v11; // r2
  int v12; // r0
  float v13; // s0
  int v14; // r2
  int v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r0
  int v23; // r1

  result = FIELD_U32(a1, 896);
  switch ( result )
  {
    case 0:
      goto LABEL_6;
    case 1:
      LODWORD(a2) = FIELD_U32(a1, 888);
      if ( *(float *)&a2 <= 0.0 )
        break;
      goto LABEL_18;
    case 2:
      v7 = FIELD_U32(dword_60C88BC8, 80);
      v8 = FIELD_U32(dword_60C88BC8, 84);
      FIELD_U32(a1, 804) = FIELD_U32(dword_60C88BC8, 76);
      FIELD_U32(a1, 808) = v7;
      FIELD_U32(a1, 812) = v8;
      if ( FIELD_S32(a1, 800) < 0 )
        FIELD_U32(a1, 800) = sub_601E4EA4(dword_60C8B13C, 88, 0, a1 + 804, 1);
LABEL_6:
      v9 = FIELD_U32(a1, 884) + 1;
      FIELD_U32(a1, 884) = v9;
      v10 = FIELD_U32(a1, 912);
      if ( v9 >= v10 )
      {
        v11 = (int *)(a1 + 888);
        v12 = v9 - v10;
        v13 = FIELD_F32(a1, 928) + FIELD_F32(a1, 888);
        FIELD_F32(a1, 888) = v13;
        if ( v13 > FIELD_F32(a1, 932) )
          v11 = (int *)(a1 + 932);
        v14 = *v11;
        FIELD_U32(a1, 884) = v12;
        FIELD_U32(a1, 888) = v14;
        if ( FIELD_U32(a1, 896) == 2 )
        {
          v15 = FIELD_U32(a1, 924);
          if ( v15 )
          {
            v16 = v15 - 1;
            FIELD_U32(a1, 924) = v16;
            if ( !v16 )
              FIELD_U32(a1, 896) = 3;
          }
        }
      }
      break;
    case 3:
      v17 = FIELD_U32(dword_60C88BC8, 80);
      v18 = FIELD_U32(dword_60C88BC8, 84);
      FIELD_U32(a1, 804) = FIELD_U32(dword_60C88BC8, 76);
      FIELD_U32(a1, 808) = v17;
      FIELD_U32(a1, 812) = v18;
      if ( FIELD_S32(a1, 800) < 0 )
        FIELD_U32(a1, 800) = sub_601E4EA4(dword_60C8B13C, 88, 0, a1 + 804, 1);
      goto LABEL_16;
    case 4:
      v21 = FIELD_U32(a1, 924);
      if ( v21 )
      {
        FIELD_U32(a1, 924) = v21 - 1;
      }
      else
      {
        v22 = FIELD_U32(a1, 884) + 1;
        FIELD_U32(a1, 884) = v22;
        v23 = FIELD_U32(a1, 920);
        if ( v22 >= v23 )
        {
          FIELD_U32(a1, 884) = v22 - v23;
          LODWORD(a2) = FIELD_U32(a1, 888);
          if ( *(float *)&a2 > 0.0 )
          {
LABEL_18:
            a5.n64_u32[0] = 0;
            *(float *)&a2 = *(float *)&a2 - FIELD_F32(a1, 892);
            FIELD_U32(a1, 888) = vmax_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
          }
          else
          {
            FIELD_U32(a1, 896) = 5;
          }
        }
      }
      break;
    case 5:
      return result;
    default:
LABEL_16:
      v19 = FIELD_U32(a1, 884) + 1;
      FIELD_U32(a1, 884) = v19;
      v20 = FIELD_U32(a1, 920);
      if ( v19 < v20 )
        break;
      FIELD_U32(a1, 884) = v19 - v20;
      LODWORD(a2) = FIELD_U32(a1, 888);
      if ( *(float *)&a2 > 0.0 )
        goto LABEL_18;
      FIELD_U32(a1, 896) = 5;
      if ( FIELD_S32(a1, 800) >= 0 )
      {
        sub_601E4F60(dword_60C8B13C);
        FIELD_U32(a1, 800) = -1;
      }
      break;
  }
  FIELD_F32(a1, 900) = FIELD_F32(a1, 888)
                       * (float)(COERCE_FLOAT((sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9) | 0x3F800000)
                               + -1.0);
  FIELD_F32(a1, 904) = FIELD_F32(a1, 888)
                       * (float)(COERCE_FLOAT((sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9) | 0x3F800000)
                               + -1.0);
  FIELD_F32(a1, 908) = FIELD_F32(a1, 888)
                       * (float)(COERCE_FLOAT((sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9) | 0x3F800000)
                               + -1.0);
  result = FIELD_U32(a1, 936);
  if ( result )
  {
    FIELD_U32(a1, 936) = --result;
    if ( !result )
      return sub_6019B874(FIELD_U32(a1, 940), 0);
  }
  return result;
}
