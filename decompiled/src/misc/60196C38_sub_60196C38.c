/* sub_60196C38
 * address: 0x60196C38   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60196C38(int a1, float a2)
{
  StateMethodExecuter *result; // r0
  unsigned int currentState; // r3
  char *vtable; // r1
  _DWORD *v6; // r1
  int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r1
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  _DWORD *v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  _DWORD *v18; // r0
  int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r0
  _DWORD *v22; // r0
  int v23; // r1
  unsigned int v24; // r2
  unsigned int v25; // r0
  int v26; // r0

  result = *(StateMethodExecuter **)(a1 + 480);
  if ( result == (StateMethodExecuter *)1 )
  {
    result = (StateMethodExecuter *)(FIELD_U32(a1, 476) - 1);
    FIELD_U32(a1, 476) = result;
    if ( !result )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C89B50);
    }
  }
  else if ( !result )
  {
    result = *(StateMethodExecuter **)(a1 + 300);
    currentState = result[5].currentState;
    vtable = (char *)result[1].vtable;
    if ( FIELD_U32(result, 0x8) > currentState )
      vtable += 4 * currentState;
    if ( (*(_BYTE *)(*(_DWORD *)vtable + 28) & 0x20) != 0 )
    {
      v6 = *(_DWORD **)(a1 + 308);
      v7 = v6[3];
      v8 = v6[2];
      v9 = v6[17];
      if ( v8 > v9 )
        v7 += 4 * v9;
      if ( (*(_BYTE *)(*(_DWORD *)v7 + 28) & 0x20) != 0 )
      {
        if ( FIELD_U8(a1, 516) )
        {
          sub_60421938(result, FIELD_U32(a1, 304), (int)&dword_60C89CAC);
          v10 = *(_DWORD **)(a1 + 300);
          v11 = v10[3];
          v12 = v10[2];
          v13 = v10[17];
          if ( v12 > v13 )
            v11 += 4 * v13;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
          v14 = *(_DWORD **)(a1 + 300);
          v15 = v14[3];
          v16 = v14[2];
          v17 = v14[17];
          if ( v16 > v17 )
            v15 += 4 * v17;
          *(_DWORD *)(*(_DWORD *)v15 + 24) = 1065353216;
          FIELD_U8(a1, 516) = 0;
        }
        if ( FIELD_U8(a1, 517) )
        {
          sub_60421938(*(_DWORD **)(a1 + 308), FIELD_U32(a1, 312), (int)&dword_60C89CCC);
          v18 = *(_DWORD **)(a1 + 308);
          v19 = v18[3];
          v20 = v18[2];
          v21 = v18[17];
          if ( v20 > v21 )
            v19 += 4 * v21;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v19 + 4), 1);
          v22 = *(_DWORD **)(a1 + 308);
          v23 = v22[3];
          v24 = v22[2];
          v25 = v22[17];
          if ( v24 > v25 )
            v23 += 4 * v25;
          *(_DWORD *)(*(_DWORD *)v23 + 24) = 1065353216;
          FIELD_U8(a1, 517) = 0;
        }
        koopaJr_clown_expression_ref_1983B4(a1, 0, a2);
        v26 = **(_DWORD **)(FIELD_U32(a1, 308) + 20);
        FIELD_U32(v26, 20) = 0;
        FIELD_U32(v26, 28) |= 2u;
        *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 308) + 20) + 24) = 0;
        FIELD_U32(a1, 476) = 15;
        result = (StateMethodExecuter *)(FIELD_U32(a1, 480) + 1);
        FIELD_U32(a1, 480) = result;
      }
    }
  }
  return result;
}
