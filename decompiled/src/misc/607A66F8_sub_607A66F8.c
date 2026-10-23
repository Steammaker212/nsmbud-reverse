/* sub_607A66F8
 * address: 0x607A66F8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A66F8(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( (FIELD_U8(a1, 1219) & 8) != 0 )
  {
    sub_60798D60(a1);
    return 1;
  }
  return v1;
}
