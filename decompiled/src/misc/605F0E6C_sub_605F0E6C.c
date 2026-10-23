/* sub_605F0E6C
 * address: 0x605F0E6C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605F0E6C(StateMethodExecuter *result)
{
  if ( (int)result[573].owner <= FIELD_U32(dword_60CAF15C, 33812) + FIELD_U32(dword_60CAF15C, 33808) )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB20C8);
  return result;
}
