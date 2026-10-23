/* sub_607A651C
 * address: 0x607A651C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A651C(_DWORD *a1)
{
  int result; // r0

  result = a1[2428];
  if ( !result )
  {
    sub_60767194((int)a1);
    a1[2426] = 5;
    a1[171] = 3;
    return 3;
  }
  return result;
}
