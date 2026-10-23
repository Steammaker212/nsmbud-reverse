/* sub_608B47F8
 * address: 0x608B47F8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B47F8(int a1)
{
  int v1; // r1
  int v2; // r0
  int v3; // t1

  v1 = a1 + 20;
  if ( FIELD_U16(a1, 20) != 26624 )
  {
    v3 = FIELD_U16(a1, 32);
    v2 = a1 + 32;
    if ( v3 != 26624 )
      v2 = 0;
    v1 = v2;
  }
  return FIELD_U32(v1, 4);
}
