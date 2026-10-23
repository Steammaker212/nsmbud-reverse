/* sub_607A5248
 * address: 0x607A5248   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607A5248(_DWORD *a1)
{
  int *result; // r0

  sub_6076B644(a1);
  if ( sub_6079D894((int)a1) )
    sub_6079EA38(a1);
  result = (int *)sub_607B7028(a1);
  if ( result )
    return Player_ReleaseCarryableEnemy(result, (int)a1);
  return result;
}
