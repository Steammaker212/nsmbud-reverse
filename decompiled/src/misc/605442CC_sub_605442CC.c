/* sub_605442CC
 * address: 0x605442CC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605442CC(StateMethodExecuter *result)
{
  if ( FIELD_U32(dword_60C99DD0, 3796) == 3 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC11C);
  return result;
}
