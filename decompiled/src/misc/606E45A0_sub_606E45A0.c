/* sub_606E45A0
 * address: 0x606E45A0   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606E45A0(int a1, float a2, float a3, float a4, float a5, float a6, int a7, int a8)
{
  int v9; // r1
  bool v10; // cc
  _DWORD *v11; // r0
  int v12; // r3
  float v13; // s2
  float v14; // s3
  float v15; // s1
  int v16; // r1
  bool v17; // cc
  int v18; // r0
  float v19; // s0
  int v20; // r0
  int v21; // r0
  int v22; // r2
  bool v23; // cc
  float result; // s0

  v9 = FIELD_U32(a1, 664);
  v10 = v9 < 1;
  if ( v9 >= 1 )
  {
    a8 = FIELD_U32(a1, 668);
    v10 = a8 < 1;
  }
  if ( v10 )
    goto LABEL_25;
  v11 = (_DWORD *)(a1 + 672);
  v12 = FIELD_U32(a1, 672);
  switch ( v12 )
  {
    case 2:
      v20 = FIELD_U32(a1, 676);
      v19 = 0.0;
      v15 = 0.025;
      v13 = 0.01;
      v14 = 0.001;
      if ( v20 > a8 )
      {
        v21 = 0;
        FIELD_U32(a1, 672) = 0;
      }
      else
      {
        v21 = v20 + 1;
      }
      FIELD_U32(a1, 676) = v21;
LABEL_23:
      v18 = a1 + 652;
LABEL_24:
      ((void (__fastcall *)(int, float, float, float, float, float))loc_60832560)(v18, v19, v15, v13, v14, a6);
      break;
    case 1:
      v15 = 0.025;
      v13 = 0.01;
      v14 = 0.001;
      v19 = 1.0;
      v22 = FIELD_U32(a1, 676);
      v23 = v22 <= v9;
      if ( v22 <= v9 )
      {
        v11 = (_DWORD *)(a1 + 676);
      }
      else
      {
        v9 = 0;
        v22 = 1;
      }
      if ( !v23 )
        FIELD_U32(a1, 676) = v9;
      *v11 = v22 + 1;
      goto LABEL_23;
    case 0:
      a6 = 1.0;
      v13 = 0.1;
      v14 = 0.01;
      v15 = 0.5;
      v16 = FIELD_U32(a1, 676);
      v17 = v16 < 181;
      if ( v16 < 181 )
        v11 = (_DWORD *)(a1 + 676);
      else
        v16 = 0;
      if ( !v17 )
        FIELD_U32(a1, 676) = v16;
      *v11 = v16 + 1;
      v18 = a1 + 652;
      v19 = (float)(1.0 / FIELD_F32(a1, 648)) * 0.1;
      goto LABEL_24;
  }
LABEL_25:
  result = (float)(FIELD_F32(a1, 648) * FIELD_F32(a1, 652)) * FIELD_F32(a1, 656);
  FIELD_F32(a1, 644) = result;
  return result;
}
