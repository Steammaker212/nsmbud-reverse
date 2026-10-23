/* sub_606B281C
 * address: 0x606B281C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B281C(int result)
{
  --FIELD_U32(result, 40);
  FIELD_U8(result, 53) = 0;
  return result;
}
