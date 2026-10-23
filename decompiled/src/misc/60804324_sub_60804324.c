/* sub_60804324
 * address: 0x60804324   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60804324(int result)
{
  unsigned int v1; // r2

  v1 = FIELD_U32(result, 16) - 1;
  if ( v1 <= 3 )
    return ((int (__fastcall *)(float))((char *)dword_60804348 + dword_60804348[v1]))(1.0);
  return result;
}
