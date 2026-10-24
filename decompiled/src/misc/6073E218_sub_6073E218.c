/* sub_6073E218
 * address: 0x6073E218   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073E218(StateMethodExecuter *result)
{
  if ( !HIWORD(result[669].currentState) && ((int)FIELD_U32(result + (239) * 12, 0x4) & 1) != 0 )
    return sub_605D79D0((int)result, (StateBase *)&dword_60CBE088, 0);
  return result;
}
