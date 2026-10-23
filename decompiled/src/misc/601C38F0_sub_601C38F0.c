/* sub_601C38F0
 * address: 0x601C38F0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C38F0(int a1)
{
  int v2; // r2
  int result; // r0

  v2 = FIELD_U32(a1, 264) | 1;
  result = 4;
  if ( v2 == 7 )
    return BYTE1(FIELD_U32(a1, 20));
  return result;
}
