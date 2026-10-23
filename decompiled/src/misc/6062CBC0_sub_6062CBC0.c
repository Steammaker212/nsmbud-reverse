/* sub_6062CBC0
 * address: 0x6062CBC0   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6062CBC0(int a1)
{
  StateMethodExecuter *result; // r0
  float *v3; // r5
  int v4; // r0
  float v5; // s2
  float v6; // s4
  int v7; // r0
  char v8; // [sp+7h] [bp-19h] BYREF
  int v9; // [sp+8h] [bp-18h]
  int v10; // [sp+Ch] [bp-14h]

  v8 = 0;
  result = (StateMethodExecuter *)sub_6062CAE8(a1, &v8);
  v3 = (float *)result;
  if ( result )
  {
    sub_6062C954(a1, (int)result);
    v4 = FIELD_U8(a1, 6137);
    if ( (unsigned int)(v4 - 2) < 2 )
    {
      v7 = FIELD_U32(a1, 6144);
      v9 = FIELD_U32(a1, 6140);
      v10 = v7;
      sub_606D465C(a1 + 108, a1 + 6152);
      FIELD_F32(a1, 108) = FIELD_F32(a1, 108) - FIELD_F32(a1, 572);
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - FIELD_F32(a1, 576);
      FIELD_F32(a1, 116) = FIELD_F32(a1, 116) - FIELD_F32(a1, 580);
    }
    else if ( v4 == 1 )
    {
      if ( FIELD_U8(a1, 6139) )
        FIELD_U32(a1, 112) = FIELD_U32(a1, 6144);
      else
        FIELD_U32(a1, 108) = FIELD_U32(a1, 6140);
    }
    else if ( !FIELD_U8(a1, 6137) )
    {
      v5 = v3[28] + FIELD_F32(a1, 6144);
      v6 = v3[29] + FIELD_F32(a1, 6148);
      FIELD_F32(a1, 108) = v3[27] + FIELD_F32(a1, 6140);
      FIELD_F32(a1, 112) = v5;
      FIELD_F32(a1, 116) = v6;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 6104), &stru_60CB3E60);
  }
  return result;
}
