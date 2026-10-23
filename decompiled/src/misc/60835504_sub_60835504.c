/* sub_60835504
 * address: 0x60835504   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60835504(int result)
{
  if ( (FIELD_U8(result, 1) & 2) != 0 )
    return dword_60CC7474(FIELD_U32(result, 8));
  return result;
}
