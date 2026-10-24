/* sub_60556084
 * address: 0x60556084   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60556084(StateMethodExecuter *result)
{
  bool v1; // zf

  v1 = LOBYTE(FIELD_U32(result + (304) * 12, 0x0)) == 0;
  if ( LOBYTE(FIELD_U32(result + (304) * 12, 0x0)) )
    v1 = BYTE1(FIELD_U32(result + (304) * 12, 0x0)) == 0;
  if ( v1 && !BYTE1(result[965].owner) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD468);
  return result;
}
