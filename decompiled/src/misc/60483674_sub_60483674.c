/* sub_60483674
 * address: 0x60483674   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60483674(int a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 3648);
  v2 = 2;
  if ( v1 <= 2 )
    v2 = dword_60B02B24[v1];
  if ( v2 >= 4 )
    v2 = 0;
  result = *(_DWORD *)(a1 + 4 * v2 + 3652);
  FIELD_U32(result, 36) = FIELD_U32(result, 36) & 0xFFFFFFEB | 4;
  return result;
}
