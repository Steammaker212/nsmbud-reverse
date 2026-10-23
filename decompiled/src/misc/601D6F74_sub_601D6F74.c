/* sub_601D6F74
 * address: 0x601D6F74   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D6F74(int a1)
{
  int v2; // r1

  FIELD_U8(a1, 280) = 1;
  if ( FIELD_U32(a1, 1032) == 7 )
    v2 = 35;
  else
    v2 = 34;
  sub_601863B8(a1, v2, 0);
  return sub_601B488C(a1, 5);
}
