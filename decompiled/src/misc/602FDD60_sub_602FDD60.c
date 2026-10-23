/* sub_602FDD60
 * address: 0x602FDD60   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602FDD60(Enemy *a1, int a2, int a3)
{
  if ( sub_602FD158((int)a1, a2, a3) )
    return j_Enemy_vf140(a1, a2, a3);
  else
    return 0;
}
