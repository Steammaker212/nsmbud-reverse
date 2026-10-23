/* sub_602BAEDC
 * address: 0x602BAEDC   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602BAEDC(_DWORD *a1, int a2, int a3)
{
  if ( a1[1589] == *(_DWORD *)(FIELD_U32(a3, 64) + 8) )
    return 0;
  else
    return Enemy__collisionThrowableObject(a1, a2, a3);
}
