/* sub_601EE184
 * address: 0x601EE184   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601EE184(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  StateMethodExecuter *result; // r0
  signed int v6; // [sp+4h] [bp-Ch] BYREF

  v6 = FIELD_U32(a1, 384);
  sub_6083246C((int *)(a1 + 180), (int *)(a1 + 412), &v6);
  v2 = FIELD_U32(a1, 180);
  if ( v2 == FIELD_U32(a1, 412) )
  {
    v3 = -894784854;
    if ( v2 == -894784854 )
      v3 = 894784853;
    v4 = -FIELD_U32(a1, 384);
    FIELD_U32(a1, 412) = v3;
    FIELD_U32(a1, 384) = v4;
  }
  result = (StateMethodExecuter *)(FIELD_U32(a1, 376) - 1);
  FIELD_U32(a1, 376) = result;
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B35C);
  return result;
}
