/* sub_6055D768
 * address: 0x6055D768   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055D768(int a1)
{
  unsigned int v1; // r1

  v1 = FIELD_U8(a1, 13752) ^ 1;
  if ( v1 >= 2 )
    v1 = 0;
  return sub_60473DE4((_DWORD *)(a1 + 3540 * v1 + 13756), 0, &dword_60CADD68, 0);
}
