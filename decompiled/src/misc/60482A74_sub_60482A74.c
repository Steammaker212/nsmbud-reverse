/* sub_60482A74
 * address: 0x60482A74   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60482A74(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0

  *a1 = off_60BFD52C;
  v2 = a1 + 835;
  sub_60504098(a1 + 1724);
  sub_60475AE8(v2);
  v3 = sub_60471D18(a1);
  operator_delete(v3);
}
