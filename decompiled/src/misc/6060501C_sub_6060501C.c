/* sub_6060501C
 * address: 0x6060501C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060501C(int result)
{
  FIELD_U16(result, 6120) = 2
                            * (4 * (unsigned __int8)BYTE1(FIELD_U32(result, 20))
                             + (unsigned __int8)__ROR4__(FIELD_U32(result, 20), 8));
  return result;
}
