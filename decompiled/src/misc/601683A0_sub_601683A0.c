/* sub_601683A0
 * address: 0x601683A0   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601683A0(ColliderBase *a1)
{
  _DWORD *v1; // r0

  v1 = ShapedCollider_dtor(a1);
  operator_delete(v1);
}
