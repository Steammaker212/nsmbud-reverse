/* sub_607B6D60
 * address: 0x607B6D60   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607B6D60(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0

  v2 = sub_607BB53C(a1);
  result = 0;
  if ( v2 == 1 )
    return FIELD_U32(a1, 14868) != 0;
  return result;
}
