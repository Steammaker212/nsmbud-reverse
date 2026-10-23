/* sub_60218784
 * address: 0x60218784   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60218784(StateMethodExecuter *result)
{
  int v1; // r1

  v1 = **((_DWORD **)result[25].owner + 3);
  if ( FIELD_F32(v1, 20) > 15.0 )
    BYTE1(result[44].owner) = 0;
  if ( (FIELD_U8(v1, 28) & 0x20) != 0 )
    return StateMgr__changeState((StateMgr *)&result[24], (StateBase *)&dword_60C8D320);
  return result;
}
