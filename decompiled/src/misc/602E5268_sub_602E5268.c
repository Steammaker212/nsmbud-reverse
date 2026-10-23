/* sub_602E5268
 * address: 0x602E5268   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602E5268(int *a1, int a2, int a3)
{
  if ( a1 + 47 == (int *)a2 )
    return Enemy__collisionGroundPound(a1, a2, a3);
  else
    return 0;
}
