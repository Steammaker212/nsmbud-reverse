/* sub_601F1434
 * address: 0x601F1434   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F1434(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  float v4; // s0
  float v5; // s4
  int v6; // r1
  float v7; // s0
  float v8; // s4
  int v9; // r1
  float v10; // s0
  float v11; // s4
  float v12; // s0
  float v13; // s2
  float v14; // s4
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s0
  float v19; // s2
  float v20; // s4
  float v21; // s6
  int v22; // r0
  int v23; // r0
  float v24; // s6
  float v25; // s6

  skl_root_ref_1F115C(a1);
  result = *(StateMethodExecuter **)(a1 + 596);
  if ( result == (StateMethodExecuter *)2 )
  {
    v6 = FIELD_U32(a1, 672) + 1;
    FIELD_U32(a1, 672) = v6;
    v7 = FIELD_F32(a1, 656);
    v8 = FIELD_F32(a1, 668);
    if ( (v6 & 8) != 0 )
    {
      if ( (v6 & 4) == 0 )
      {
LABEL_22:
        v15 = v7 - v8;
        FIELD_F32(a1, 656) = v15;
        v16 = v8 + FIELD_F32(a1, 660);
        FIELD_F32(a1, 660) = v16;
        v17 = FIELD_F32(a1, 664) - v8;
LABEL_23:
        FIELD_F32(a1, 664) = v17;
        v24 = FIELD_F32(a1, 636);
        FIELD_F32(a1, 128) = v15 * v24;
        FIELD_F32(a1, 132) = v16 * v24;
        FIELD_F32(a1, 136) = v17 * v24;
        result = (StateMethodExecuter *)(FIELD_U32(a1, 708) - 1);
        FIELD_U32(a1, 708) = result;
        if ( !result )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
          return StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&unk_60C8B654);
        }
        return result;
      }
    }
    else if ( (v6 & 4) != 0 )
    {
      goto LABEL_22;
    }
    v15 = v8 + v7;
    FIELD_F32(a1, 656) = v15;
    v16 = FIELD_F32(a1, 660) - v8;
    FIELD_F32(a1, 660) = v16;
    v17 = v8 + FIELD_F32(a1, 664);
    goto LABEL_23;
  }
  if ( result == (StateMethodExecuter *)1 )
  {
    v9 = FIELD_U32(a1, 672) + 1;
    FIELD_U32(a1, 672) = v9;
    v10 = FIELD_F32(a1, 656);
    v11 = FIELD_F32(a1, 668);
    if ( (v9 & 8) != 0 )
    {
      if ( (v9 & 4) == 0 )
      {
LABEL_25:
        v18 = v10 - v11;
        FIELD_F32(a1, 656) = v18;
        v19 = v11 + FIELD_F32(a1, 660);
        FIELD_F32(a1, 660) = v19;
        v20 = FIELD_F32(a1, 664) - v11;
        goto LABEL_26;
      }
    }
    else if ( (v9 & 4) != 0 )
    {
      goto LABEL_25;
    }
    v18 = v11 + v10;
    FIELD_F32(a1, 656) = v18;
    v19 = FIELD_F32(a1, 660) - v11;
    FIELD_F32(a1, 660) = v19;
    v20 = v11 + FIELD_F32(a1, 664);
LABEL_26:
    FIELD_F32(a1, 664) = v20;
    v25 = FIELD_F32(a1, 636);
    FIELD_F32(a1, 128) = v18 * v25;
    FIELD_F32(a1, 132) = v19 * v25;
    FIELD_F32(a1, 136) = v20 * v25;
    FIELD_U32(a1, 692) += FIELD_U32(a1, 688);
    FIELD_F32(a1, 200) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 332))(a1);
    FIELD_U32(a1, 588) = 0x100000000LL / FIELD_S32(a1, 692);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 320))(a1, 1);
    result = (StateMethodExecuter *)(FIELD_U32(a1, 708) - 1);
    FIELD_U32(a1, 708) = result;
    if ( result )
      return result;
    v23 = 60;
    FIELD_U32(a1, 200) = 0;
    goto LABEL_28;
  }
  if ( result )
    return result;
  v3 = FIELD_U32(a1, 672) + 1;
  FIELD_U32(a1, 672) = v3;
  v4 = FIELD_F32(a1, 656);
  v5 = FIELD_F32(a1, 668);
  if ( (v3 & 8) == 0 )
  {
    if ( (v3 & 4) != 0 )
      goto LABEL_19;
LABEL_14:
    v12 = v5 + v4;
    FIELD_F32(a1, 656) = v12;
    v13 = FIELD_F32(a1, 660) - v5;
    FIELD_F32(a1, 660) = v13;
    v14 = v5 + FIELD_F32(a1, 664);
    goto LABEL_20;
  }
  if ( (v3 & 4) != 0 )
    goto LABEL_14;
LABEL_19:
  v12 = v4 - v5;
  FIELD_F32(a1, 656) = v12;
  v13 = v5 + FIELD_F32(a1, 660);
  FIELD_F32(a1, 660) = v13;
  v14 = FIELD_F32(a1, 664) - v5;
LABEL_20:
  FIELD_F32(a1, 664) = v14;
  v21 = FIELD_F32(a1, 636);
  FIELD_F32(a1, 128) = v12 * v21;
  FIELD_F32(a1, 132) = v13 * v21;
  FIELD_F32(a1, 136) = v14 * v21;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 320))(a1, 1);
  result = *(StateMethodExecuter **)(a1 + 180);
  if ( (int)result > 0x40000000 - FIELD_U32(a1, 680) )
  {
    v22 = FIELD_U32(a1, 624);
    FIELD_U32(a1, 688) = v22 / 4;
    FIELD_U32(a1, 692) = v22;
    v23 = FIELD_U32(a1, 684);
LABEL_28:
    FIELD_U32(a1, 708) = v23;
    result = (StateMethodExecuter *)(FIELD_U32(a1, 596) + 1);
    FIELD_U32(a1, 596) = result;
  }
  return result;
}
