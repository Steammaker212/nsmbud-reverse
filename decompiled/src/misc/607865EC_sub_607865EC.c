/* sub_607865EC
 * address: 0x607865EC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607865EC(int result)
{
  int v1; // r12

  v1 = FIELD_U32(result, 12);
  if ( FIELD_U8(dword_60C9A1F0, 6553) == 0 && (v1 & 1) != 0 || (v1 & 4) != 0 )
    FIELD_U32(result, 4) |= 0x200u;
  return result;
}
