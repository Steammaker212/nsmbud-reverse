/* StateMgr__execute
 * address: 0x608181D4   size: 80   group: state
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall StateMgr__execute(StateMgr *this)
{
  StateMethodExecuter *result; // r0

  if ( FIELD_U32(this, 0x4) )
  {
    result = (StateMethodExecuter *)(*((int (**)(void))FIELD_U32(this, 0x0) + 2))();
    FIELD_U32(this, 0x4) = 0;
    FIELD_U32(this, 0x8) = result;
  }
  else
  {
    result = FIELD_U32(this, 0x8);
  }
  if ( result )
    return (*((StateMethodExecuter *(__fastcall **)(StateMethodExecuter *))FIELD_U32(result, 0x0) + 3))(result);
  return result;
}
