/* sub_60955490
 * address: 0x60955490   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60955490(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v4; // r0

  v3 = FIELD_U32(a1, 120);
  v4 = FIELD_U32(a1, 124);
  if ( v3 > a2 )
    v4 += 1044 * a2;
  return sub_60958690(v4, a3);
}
