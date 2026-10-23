/* sub_6060A3B4
 * address: 0x6060A3B4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060A3B4(int a1, int a2)
{
  int *v2; // r0

  v2 = *(int **)(a2 + 144);
  if ( !v2[267] && *((float *)v2 + 268) < 0.3 )
  {
    v2[268] = 1065353216;
    v2[267] = 90;
    v2[269] = -(int)(float)((float)v2[264] + (float)v2[264]);
    v2[271] = 64;
    v2[273] = 0;
  }
  return 1;
}
