/* sub_60207C5C
 * address: 0x60207C5C   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60207C5C(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  StateMethodExecuter **v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  StateMethodExecuter *result; // r0
  _DWORD *v8; // r0
  int v9; // r1
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  int a5[4]; // [sp+0h] [bp-10h] BYREF

  v2 = FIELD_U32(a1, 356);
  if ( v2 )
  {
    FIELD_U32(a1, 356) = v2 - 1;
    v3 = *(_DWORD **)(a1 + 268);
    v4 = (StateMethodExecuter **)v3[3];
    v5 = v3[2];
    v6 = v3[17];
    if ( v5 > v6 )
      v4 += v6;
    result = *v4;
    if ( *(float *)&(*v4)[1].currentState == 125.0 )
      return (StateMethodExecuter *)sub_601E4C88((_DWORD *)dword_60C8B13C, 169, (_DWORD *)(a1 + 80));
  }
  else
  {
    FIELD_U8(a1, 365) = 0;
    v8 = *(_DWORD **)(a1 + 268);
    v9 = FIELD_U32(a1, 272);
    a5[0] = (int)&sead__SafeStringBase__vtable;
    a5[1] = (int)"wait";
    sub_60421938(v8, v9, (int)a5);
    v10 = *(_DWORD **)(a1 + 268);
    v11 = v10[3];
    v12 = v10[2];
    v13 = v10[17];
    if ( v12 > v13 )
      v11 += 4 * v13;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
    return StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8C678);
  }
  return result;
}
