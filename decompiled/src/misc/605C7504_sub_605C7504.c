/* sub_605C7504
 * address: 0x605C7504   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605C7504(int a1)
{
  _BOOL4 v2; // r5
  StateMethodExecuter *result; // r0
  int speed; // [sp+4h] [bp-14h] BYREF

  speed = 0x1000000;
  v2 = moveValueTo((int *)(a1 + 996), (int *)(a1 + 992), &speed);
  result = (StateMethodExecuter *)sub_60694FD4(a1);
  if ( v2 )
    return StateMgr__changeState((StateMgr *)(a1 + 1024), (StateBase *)&dword_60CB0B04);
  return result;
}
