/* sub_60001F3C
 * address: 0x60001F3C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60001F3C(StageActor *a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r2
  int v7; // r0

  v5 = sub_6014B758(a2, 0, a3);
  v7 = sub_6014B758(a2, 1, v6);
  if ( sub_60001F90((int)a1, v7) )
    return 1;
  else
    return sub_60001F90((int)a1, v5);
}
