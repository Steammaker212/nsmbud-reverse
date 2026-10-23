/* sub_607CEC70
 * address: 0x607CEC70   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607CEC70(int a1)
{
  int v2; // r0
  unsigned int result; // r0

  FIELD_U32(a1, 1232) &= ~0x10u;
  v2 = sub_607D6C28(a1);
  if ( v2 && FIELD_U32(v2, 1320) == 8 )
  {
    FIELD_U32(a1, 9808) = 5;
    return 9808;
  }
  else
  {
    FIELD_U32(a1, 9808) = 9;
    result = FIELD_U32(a1, 1232) & 0xFFFFFFDF;
    FIELD_U32(a1, 1232) = result;
  }
  return result;
}
