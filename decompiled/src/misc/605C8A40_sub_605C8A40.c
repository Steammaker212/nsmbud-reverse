/* sub_605C8A40
 * address: 0x605C8A40   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_605C8A40(int a1)
{
  ColliderBase *v2; // r5

  *(_DWORD *)a1 = off_60C0A45C;
  v2 = (ColliderBase *)(a1 + 1040);
  ShapedCollider_dtor((ColliderBase *)(a1 + 1696));
  ShapedCollider_dtor(v2);
  return StageActor__dtor((Actor *)a1);
}
