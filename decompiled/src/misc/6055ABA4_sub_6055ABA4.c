/* sub_6055ABA4
 * address: 0x6055ABA4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6055ABA4(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C00F04;
  v2 = a1 + 10;
  sub_6045C0A0((int)(a1 + 902));
  sub_60475AE8(v2);
  operator_delete(a1);
}
