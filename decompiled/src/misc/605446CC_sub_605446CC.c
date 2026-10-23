/* sub_605446CC
 * address: 0x605446CC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605446CC(StateMethodExecuter *result)
{
  if ( !FIELD_U8(dword_60C99DD0, 3793) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAC1FC);
  return result;
}
