/* sub_607A5504
 * address: 0x607A5504   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607A5504(StateMethodExecuter *result)
{
  bool v1; // zf

  v1 = (result[101].currentState & 4) == 0;
  if ( (result[101].currentState & 4) != 0 )
    v1 = (BYTE2(result[102].vtable) & 0x10) == 0;
  if ( !v1 )
    return sub_60766314((int)result, &stru_60CBF37C, 0);
  return result;
}
