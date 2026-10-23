/* LavaGeyser_vf173
 * address: 0x6070CB70   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LavaGeyser_vf173(int *a1)
{
  int *v2; // r1
  int result; // r0

  v2 = a1 + 1578;
  result = a1[1578] - 1;
  *v2 = result;
  if ( !result )
  {
    (*(void (__fastcall **)(int *))(*a1 + 660))(a1);
    return (*(int (__fastcall **)(int *, void *))(*a1 + 192))(a1, &unk_60CBCAC8);
  }
  return result;
}
