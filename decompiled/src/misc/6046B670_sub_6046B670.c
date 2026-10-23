/* sub_6046B670
 * address: 0x6046B670   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046B670(int result)
{
  FIELD_U32(result, 120) = dword_60AF2170[FIELD_U32(result, 80)];
  return result;
}
