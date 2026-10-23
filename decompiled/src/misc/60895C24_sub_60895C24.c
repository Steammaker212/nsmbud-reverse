/* sub_60895C24
 * address: 0x60895C24   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60895C24(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int result; // r0
  int v7; // r2

  v4 = sub_60882028();
  sub_60896484(a1 + 32, a2, v4);
  v5 = sub_60882028();
  sub_60896484(a1 + 440, a2, v5);
  result = FIELD_U32(a1, 4);
  if ( result == 3 )
  {
    v7 = sub_60882028();
    return sub_60896484(a1 + 848, a2, v7);
  }
  return result;
}
