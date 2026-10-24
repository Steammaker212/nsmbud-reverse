/* sub_6055DA94
 * address: 0x6055DA94   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055DA94(StateMethodExecuter *result)
{
  int owner; // r1

  owner = (int)result[1145].owner;
  result[1145].owner = (void *)(owner - 1);
  if ( owner <= 1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)FIELD_U32(result + (3) * 12, 0x4));
  return result;
}
