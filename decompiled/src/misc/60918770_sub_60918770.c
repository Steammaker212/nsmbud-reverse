/* sub_60918770
 * address: 0x60918770   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918770(int a1, int a2)
{
  int v3; // r0
  int v4; // r1

  v3 = 0;
  if ( (FIELD_U8(a1, 4) & 1) != 0 )
  {
    v3 = FIELD_U32(a1, 40);
    v4 = 9 * a2;
    if ( v3 )
      v3 += 8 * v4;
  }
  return sub_608354C4(v3);
}
