/* sub_603FBB70
 * address: 0x603FBB70   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603FBB70(int a1, void *a2)
{
  StateMethodExecuter *result; // r0

  result = *(StateMethodExecuter **)(a1 + 256);
  if ( result )
  {
    result[5].owner = a2;
    FIELD_U32(result + (4) * 12, 0x4) = (void *)1;
    return StateMgr__changeState((StateMgr *)&result[2], &stru_60CAA520);
  }
  return result;
}
