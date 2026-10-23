/* sub_6099A454
 * address: 0x6099A454   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A454(int a1, char a2)
{
  int result; // r0

  result = FIELD_U32(a1, 16);
  FIELD_U16(result, 4) = a2;
  return result;
}
