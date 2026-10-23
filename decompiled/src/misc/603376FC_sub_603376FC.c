/* sub_603376FC
 * address: 0x603376FC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603376FC(_DWORD *a1, int a2, int a3)
{
  Actor *v6; // r0

  v6 = *(Actor **)(a3 + 64);
  if ( v6 && Actor__getProfileId(v6) == 392 )
    return Enemy__collisionThrowableObject(a1, a2, a3);
  else
    return 0;
}
