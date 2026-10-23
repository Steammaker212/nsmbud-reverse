/* sub_6073C09C
 * address: 0x6073C09C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073C09C(int result)
{
  FIELD_U32(result, 80) ^= 1u;
  FIELD_U32(result, 120) = 0;
  return result;
}
