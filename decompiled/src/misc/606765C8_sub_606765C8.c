/* sub_606765C8
 * address: 0x606765C8   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606765C8(int a1)
{
  StateMethodExecuter *result; // r0
  float *v3; // r5
  int v4; // r0
  float v5; // s2
  float v6; // s4
  int v7; // r0
  unsigned __int8 v8; // [sp+7h] [bp-19h] BYREF
  int v9; // [sp+8h] [bp-18h]
  int v10; // [sp+Ch] [bp-14h]

  v8 = 0;
  result = (StateMethodExecuter *)sub_60676F28(a1, &v8);
  v3 = (float *)result;
  if ( result )
  {
    sub_60676FFC(a1, result, v8);
    v4 = FIELD_U8(a1, 6128);
    if ( (unsigned int)(v4 - 2) < 2 )
    {
      v7 = FIELD_U32(a1, 6112);
      v9 = FIELD_U32(a1, 6108);
      v10 = v7;
      sub_606D465C(a1 + 108, a1 + 6120);
      FIELD_F32(a1, 108) = FIELD_F32(a1, 108) - FIELD_F32(a1, 572);
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - FIELD_F32(a1, 576);
      FIELD_F32(a1, 116) = FIELD_F32(a1, 116) - FIELD_F32(a1, 580);
    }
    else if ( v4 == 1 )
    {
      if ( FIELD_U8(a1, 6131) )
        FIELD_U32(a1, 112) = FIELD_U32(a1, 6112);
      else
        FIELD_U32(a1, 108) = FIELD_U32(a1, 6108);
    }
    else if ( !FIELD_U8(a1, 6128) )
    {
      v5 = FIELD_F32(a1, 6112) + v3[1526];
      v6 = FIELD_F32(a1, 6116) + v3[1527];
      FIELD_F32(a1, 108) = FIELD_F32(a1, 6108) + v3[1525];
      FIELD_F32(a1, 112) = v5;
      FIELD_F32(a1, 116) = v6;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7C70);
  }
  return result;
}
