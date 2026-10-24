/* sub_604E9794
 * address: 0x604E9794   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E9794(StateMethodExecuter *result)
{
  void *v1; // r1

  v1 = *(void **)(dword_60C9A1F0 + 6500);
  if ( FIELD_U32(result + (45) * 12, 0x4) != v1 )
  {
    FIELD_U32(result + (45) * 12, 0x4) = v1;
    return StateMgr__changeState((StateMgr *)&result[378], (StateBase *)&dword_60CA5DA4);
  }
  return result;
}
