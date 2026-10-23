/* sub_608C6780
 * address: 0x608C6780   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608C6780(int a1, int a2, int a3)
{
  unsigned int v3; // r3

  if ( a3 == 2 )
  {
    a2 += FIELD_U32(a1, 12);
  }
  else if ( a3 == 1 )
  {
    a2 = FIELD_U32(a1, 8) - a2;
  }
  else
  {
    v3 = 0x80000000;
    if ( a3 )
      return v3;
  }
  v3 = 0;
  FIELD_U32(a1, 12) = a2;
  return v3;
}
