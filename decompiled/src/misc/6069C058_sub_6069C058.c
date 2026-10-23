/* sub_6069C058
 * address: 0x6069C058   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069C058(int a1, int a2)
{
  _DWORD *v4; // r1
  _DWORD *v5; // r2

  ((void (__fastcall *)(int, float))loc_6069B6F4)(a1 + 20, FIELD_F32(a1, 472));
  ((void (__fastcall *)(int, int, float))loc_6069B6F4)(a1 + 60, a2, FIELD_F32(a1, 472));
  v4 = *(_DWORD **)(a1 + 448);
  *v4 = FIELD_U32(a1, 52);
  v4[1] = FIELD_U32(a1, 56);
  v5 = *(_DWORD **)(a1 + 448);
  if ( FIELD_U32(a1, 444) > 3u )
    v5 += 6;
  *v5 = FIELD_U32(a1, 92);
  v5[1] = FIELD_U32(a1, 96);
  return SolidOnTopCollider_execute((ColliderBase *)(a1 + 104));
}
