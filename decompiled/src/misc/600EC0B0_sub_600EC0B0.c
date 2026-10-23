/* sub_600EC0B0
 * address: 0x600EC0B0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EC0B0(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 80) ^ 1;
  if ( v1 >= 2 )
    v1 = 0;
  FIELD_U32(result, 132) = *(_DWORD *)(result + 4 * v1 + 8240);
  return result;
}
