/* sub_605E9424
 * address: 0x605E9424   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E9424(int a1)
{
  StateMethodExecuter *result; // r0

  if ( !FIELD_U32(a1, 228) )
    return StateMgr__changeState((StateMgr *)(a1 + 332), (StateBase *)&dword_60CB1BE8);
  switch ( FIELD_U8(a1, 296) )
  {
    case 0:
    case 1:
    case 7:
    case 0x19:
    case 0x22:
      result = StateMgr__changeState((StateMgr *)(a1 + 332), (StateBase *)&dword_60CB1C28);
      break;
    default:
      result = StateMgr__changeState((StateMgr *)(a1 + 332), (StateBase *)&dword_60CB1C08);
      break;
  }
  return result;
}
