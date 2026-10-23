/* sub_6060EBE8
 * address: 0x6060EBE8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_6060EBE8(StateActor *result)
{
  if ( (*(_BYTE *)(**(_DWORD **)(FIELD_U32(result, 0x284) + 12) + 28) & 0x20) != 0 )
    return (StateActor *)StageActor__delete(result, 1);
  return result;
}
