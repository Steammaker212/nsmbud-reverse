/* sub_608B47CC
 * address: 0x608B47CC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B47CC(int a1)
{
  int v1; // r1

  v1 = a1 + 20;
  if ( FIELD_U16(a1, 20) != 26624 )
  {
    v1 = a1 + 32;
    if ( FIELD_U16(a1, 32) != 26624 )
      v1 = 0;
  }
  return a1 + FIELD_U32(v1, 4);
}
