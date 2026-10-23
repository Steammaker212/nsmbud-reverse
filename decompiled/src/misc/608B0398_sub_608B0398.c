/* sub_608B0398
 * address: 0x608B0398   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0398(int result)
{
  FIELD_U32(result, 256) = *(_DWORD *)(FIELD_U32(result, 16) + 60);
  return result;
}
