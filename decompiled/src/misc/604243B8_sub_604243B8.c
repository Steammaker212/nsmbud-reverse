/* sub_604243B8
 * address: 0x604243B8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604243B8(int a1)
{
  StateMethodExecuter *result; // r0

  FIELD_U8(a1, 92) = 1;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 1065353216;
  StateMgr__changeState((StateMgr *)(a1 + 128), (StateBase *)&dword_60C9BBB4);
  FIELD_U8(a1, 164) = 1;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 1065353216;
  result = StateMgr__changeState((StateMgr *)(a1 + 200), (StateBase *)&dword_60C9BBB4);
  FIELD_U8(a1, 64) = 0;
  return result;
}
