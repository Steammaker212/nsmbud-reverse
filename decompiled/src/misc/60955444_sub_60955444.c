/* sub_60955444
 * address: 0x60955444   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60955444(int a1, int a2)
{
  int v2; // r7
  int v4; // r6
  int v5; // r5
  int v6; // r0

  v2 = FIELD_U32(a1, 120);
  if ( !v2 )
    return 0;
  v4 = FIELD_U32(a1, 124);
  v5 = 0;
  do
  {
    v6 = sub_60958690(v4, a2);
    v4 += 1044;
    v5 += v6;
    --v2;
  }
  while ( v2 );
  return v5;
}
