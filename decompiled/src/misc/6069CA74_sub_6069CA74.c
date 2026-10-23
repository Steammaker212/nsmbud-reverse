/* sub_6069CA74
 * address: 0x6069CA74   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069CA74(int a1)
{
  ColliderBase *v1; // r4

  v1 = (ColliderBase *)(a1 + 6112);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 228))(a1);
  return ShapedCollider_execute(v1);
}
