/* sub_606AE22C
 * address: 0x606AE22C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AE22C(int a1, unsigned int a2)
{
  int v3; // r0

  if ( a2 > 0xF )
    return 0;
  v3 = a1 + 8 * a2 + 6100;
  if ( !FIELD_U8(v3, 5) )
    return 0;
  FIELD_U8(v3, 5) = 0;
  return 1;
}
