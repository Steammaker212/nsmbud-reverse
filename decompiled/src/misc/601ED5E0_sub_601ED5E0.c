/* sub_601ED5E0
 * address: 0x601ED5E0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601ED5E0(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0
  int speed; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 376);
  if ( v2 )
  {
    result = (StateMethodExecuter *)(v2 - 1);
    FIELD_U32(a1, 376) = result;
  }
  else
  {
    speed = 0x10000000;
    moveValueTo((int *)(a1 + 180), (int *)(a1 + 412), &speed);
    result = *(StateMethodExecuter **)(a1 + 180);
    if ( result == *(StateMethodExecuter **)(a1 + 412) )
      return StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B2A8);
  }
  return result;
}
