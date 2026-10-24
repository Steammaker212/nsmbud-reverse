/* sub_6073E10C
 * address: 0x6073E10C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073E10C(StateMethodExecuter *result)
{
  if ( !LOWORD(result[670].vtable) )
  {
    LOWORD(result[670].vtable) = 20;
    FIELD_U32(result + (10) * 12, 0x4) = (void *)1065353216;
  }
  if ( !LOWORD(result[670].owner) )
    return sub_605D79D0((int)result, (StateBase *)&dword_60CBE088, 0);
  return result;
}
