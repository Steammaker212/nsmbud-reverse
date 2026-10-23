/* sub_6099CCE0
 * address: 0x6099CCE0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6099CCE0(int a1, unsigned int a2)
{
  _BOOL4 result; // r0
  unsigned int v4; // r3

  result = 0;
  v4 = FIELD_U32(a1, 28);
  if ( v4 <= a2 )
    return FIELD_U32(a1, 32) + v4 > a2;
  return result;
}
