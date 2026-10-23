/* sub_60999C38
 * address: 0x60999C38   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60999C38(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 8);
  if ( result )
  {
    sub_6099A9B4(a1);
    return sub_6099A198(a1);
  }
  return result;
}
