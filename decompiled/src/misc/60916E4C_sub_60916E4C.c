/* sub_60916E4C
 * address: 0x60916E4C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916E4C(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r3
  int v5; // r1

  v4 = a4 - 50;
  if ( a3 )
    a3 = 512;
  if ( v4 >= 5 && a2 != 1 )
    return a3;
  v5 = a3 | 8;
  if ( v4 > 4 )
    return a3 | 8;
  if ( (FIELD_U8(a1, 41) & 4) != 0 )
    return a3 | 0x88;
  return v5;
}
