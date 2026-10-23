/* sub_608C5670
 * address: 0x608C5670   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5670(int result, int a2)
{
  FIELD_U16(result, 20) = (unsigned int)((a2 + 1) * (a2 + 1)) >> 2;
  return result;
}
