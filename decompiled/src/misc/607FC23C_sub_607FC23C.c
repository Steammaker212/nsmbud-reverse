/* sub_607FC23C
 * address: 0x607FC23C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FC23C(int a1, char a2)
{
  int result; // r0

  result = FIELD_U32(a1, 180);
  if ( result )
  {
    FIELD_U8(result, 22) = 1;
    FIELD_U8(result, 23) = a2;
  }
  return result;
}
