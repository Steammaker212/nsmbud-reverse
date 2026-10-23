/* sub_608C5358
 * address: 0x608C5358   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5358(int a1)
{
  int result; // r0
  int *v3; // r0

  result = FIELD_U8(a1, 317);
  if ( result )
  {
    FIELD_U8(a1, 316) = 1;
    v3 = sub_608C4DF4();
    sub_608C52D0((int)v3);
    sub_608D0864(a1 + 8);
    sub_608D0868(a1 + 8);
    FIELD_U8(a1, 317) = 0;
    return 0;
  }
  return result;
}
