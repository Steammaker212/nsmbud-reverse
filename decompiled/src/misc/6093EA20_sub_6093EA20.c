/* sub_6093EA20
 * address: 0x6093EA20   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093EA20(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11)
{
  int v11; // r3
  int v14; // [sp+24h] [bp-14h]

  v11 = 5;
  if ( !a7 )
    v11 = 1;
  return sub_6093E3D8(a1, a2, a1 + 1848, a3, a4, v11, a5, a6, 1, a7, 1, a8, 0, v14, 0, a11);
}
