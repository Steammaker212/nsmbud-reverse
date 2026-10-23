/* sub_6061C198
 * address: 0x6061C198   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061C198(int a1)
{
  ColliderBase *v2; // r5

  v2 = (ColliderBase *)(a1 + 6112);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  ShapedCollider_execute(v2);
  ((void (__fastcall *)(int))loc_6061BDD8)(a1);
  return 1;
}
