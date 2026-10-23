/* sub_601BDEB8
 * address: 0x601BDEB8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BDEB8(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r0
  int *v5; // r1
  bool v6; // zf
  int v7; // r0
  float v8; // s18
  float v9; // s22
  float v10; // s16
  float v11; // s0
  float v12; // s0
  int v13; // r3
  int v14; // r0

  result = *(StateMethodExecuter **)(a1 + 288);
  FIELD_U32(a1, 288) = (char *)result - 1;
  if ( (int)result <= 0 )
  {
    v3 = FIELD_U32(a1, 1044);
    if ( v3 >= 2 )
    {
      FIELD_U32(a1, 1044) = v3 - 1;
      v4 = sub_601C46E4(a1);
      v5 = dword_601BE018;
      v6 = v4 == 5;
      v7 = FIELD_U32(a1, 1044);
      if ( v6 )
        v5 = &dword_601BE018[1];
      if ( v7 <= 1 )
        v7 = 1;
      FIELD_F32(a1, 296) = FIELD_F32(a1, 296)
                           + (float)((float)(*(float *)v5 - FIELD_F32(a1, 296)) * (float)(1.0 / (float)v7));
    }
    result = (StateMethodExecuter *)&unk_60AFC2B0;
    v8 = FIELD_F32(a1, 952) - FIELD_F32(a1, 84);
    v9 = FIELD_F32(a1, 948) - FIELD_F32(a1, 80);
    v10 = FIELD_F32(a1, 956) - FIELD_F32(a1, 88);
    v11 = sqrtf((float)((float)(v8 * v8) + (float)(v9 * v9)) + (float)(v10 * v10));
    if ( v11 <= 5.0 )
    {
      v13 = FIELD_U32(a1, 952);
      v14 = FIELD_U32(a1, 956);
      FIELD_U32(a1, 80) = FIELD_U32(a1, 948);
      FIELD_U32(a1, 84) = v13;
      FIELD_U32(a1, 88) = v14;
      FIELD_U8(a1, 216) |= 2u;
      FIELD_U32(a1, 1108) &= ~0x40000u;
      return sub_601B69F4(a1, &stru_60C8ADFC);
    }
    else
    {
      v12 = 1.0 / v11;
      FIELD_F32(a1, 80) = FIELD_F32(a1, 80) + (float)(5.0 * (float)(v9 * v12));
      FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + (float)(5.0 * (float)(v8 * v12));
      FIELD_F32(a1, 88) = FIELD_F32(a1, 88) + (float)(5.0 * (float)(v10 * v12));
    }
  }
  return result;
}
