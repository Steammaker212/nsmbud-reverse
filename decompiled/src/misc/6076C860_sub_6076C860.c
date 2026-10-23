/* sub_6076C860
 * address: 0x6076C860   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6076C860(int a1)
{
  _DWORD *v2; // r5
  int *v3; // r0
  float v4; // s0
  float *v5; // r5
  float *v6; // r6
  float v7; // s2
  int v8; // r0
  int v9; // r1
  int *v10; // r4
  int v11; // t1
  float v12; // r0
  __n64 v13; // d0
  float result; // s0
  float v15[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (_DWORD *)(a1 + 9820);
  ((void (__fastcall *)(int, _DWORD))loc_6076BC8C)(a1, FIELD_U32(a1, 9820));
  FIELD_U32(a1, 9856) = 1;
  FIELD_U32(a1, 9848) = 0;
  FIELD_U32(a1, 9852) = 0;
  switch ( *v2 )
  {
    case 0:
      v3 = (int *)(a1 + 9840);
      v4 = FIELD_F32(a1, 9836);
      goto LABEL_8;
    case 1:
      v3 = (int *)(a1 + 112);
      v4 = FIELD_F32(a1, 9836);
      goto LABEL_8;
    case 2:
      v7 = -16.0;
      goto LABEL_7;
    case 3:
      v7 = 16.0;
LABEL_7:
      v4 = FIELD_F32(a1, 9836) + v7;
      v3 = (int *)(a1 + 112);
LABEL_8:
      v8 = *v3;
      v6 = (float *)(a1 + 9824);
      v9 = FIELD_U32(a1, 116);
      FIELD_F32(a1, 9824) = v4;
      FIELD_U32(a1, 9828) = v8;
      v5 = (float *)(a1 + 9828);
      FIELD_U32(a1, 9832) = v9;
      break;
    default:
      v5 = (float *)(a1 + 9828);
      v6 = (float *)(a1 + 9824);
      break;
  }
  v11 = FIELD_U32(a1, 9876);
  v10 = (int *)(a1 + 9876);
  sub_60160210(v11, (int)(v10 - 2137));
  v12 = *v5;
  v15[0] = *v6;
  v15[1] = v12;
  v13.n64_u64[0] = sub_601614BC(*v10, v15).n64_u64[0];
  *v6 = *v6 + v13.n64_f32[0];
  *v5 = v13.n64_f32[1] + *v5;
  *((float *)v10 - 2442) = v13.n64_f32[0] + *((float *)v10 - 2442);
  result = v13.n64_f32[1] + *((float *)v10 - 2441);
  *((float *)v10 - 2441) = result;
  return result;
}
