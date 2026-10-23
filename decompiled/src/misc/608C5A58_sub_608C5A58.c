/* sub_608C5A58
 * address: 0x608C5A58   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5A58(int result)
{
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 24) = 1065353216;
  FIELD_U16(result, 28) = 0;
  return result;
}
