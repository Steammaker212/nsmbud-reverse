/* sub_6028A8C0
 * address: 0x6028A8C0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028A8C0(_DWORD *a1, int a2, int a3)
{
  int v3; // r12

  v3 = 0;
  if ( !a1[1645] )
  {
    Enemy__collisionThrowableObject(a1, a2, a3);
    return 1;
  }
  return v3;
}
