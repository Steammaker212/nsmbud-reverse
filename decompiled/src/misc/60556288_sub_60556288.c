/* sub_60556288
 * address: 0x60556288   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60556288(StateMethodExecuter *result)
{
  bool v1; // zf

  v1 = LOBYTE(result[304].vtable) == 0;
  if ( LOBYTE(result[304].vtable) )
    v1 = BYTE1(result[304].vtable) == 0;
  if ( v1 && !BYTE1(result[965].owner) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CAD568);
  return result;
}
