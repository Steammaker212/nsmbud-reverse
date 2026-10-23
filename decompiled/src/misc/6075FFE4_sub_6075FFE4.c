/* sub_6075FFE4
 * address: 0x6075FFE4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075FFE4(int a1, int a2)
{
  int v2; // r3
  char v3; // r2

  v2 = FIELD_S8(a1, 1314);
  v3 = FIELD_U8(a1, 1314);
  if ( v2 < a2 )
  {
    v3 = v2 + 1;
    FIELD_U8(a1, 1314) = v2 + 1;
  }
  return v3;
}
