/* sub_60207E24
 * address: 0x60207E24   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60207E24(int a1)
{
  StateMethodExecuter *result; // r0
  _DWORD *v3; // r0
  int v4; // r1
  _DWORD *v5; // r0
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int a5[4]; // [sp+0h] [bp-10h] BYREF

  result = (StateMethodExecuter *)(FIELD_U32(a1, 356) - 1);
  FIELD_U32(a1, 356) = result;
  if ( !result )
  {
    v3 = *(_DWORD **)(a1 + 268);
    v4 = FIELD_U32(a1, 272);
    a5[0] = (int)&sead__SafeStringBase__vtable;
    a5[1] = (int)"wait";
    sub_60421938(v3, v4, (int)a5);
    v5 = *(_DWORD **)(a1 + 268);
    v6 = v5[3];
    v7 = v5[2];
    v8 = v5[17];
    if ( v7 > v8 )
      v6 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
    return StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8C678);
  }
  return result;
}
