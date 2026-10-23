/* ShapedCollider_vf2C
 * address: 0x60164DDC   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall ShapedCollider_vf2C(int a1, _DWORD *a2)
{
  if ( a2 )
    *a2 = FIELD_U32(a1, 0x15C);
  return 1;
}
