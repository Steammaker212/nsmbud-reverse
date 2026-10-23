/* sub_601C5B4C
 * address: 0x601C5B4C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C5B4C(int result, int a2)
{
  if ( (FIELD_U32(result, 264) | 1) != 7 )
    return sub_601E4A74(dword_60C8B13C, a2);
  return result;
}
