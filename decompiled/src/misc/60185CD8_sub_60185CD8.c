/* sub_60185CD8
 * address: 0x60185CD8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60185CD8(Actor *a1)
{
  int v2; // r1
  int result; // r0

  v2 = sub_601686E4((int)a1);
  result = 0;
  if ( v2 == 1 )
  {
    Actor__getProfileId(a1);
    return 1;
  }
  return result;
}
