/* sub_606C0AB4
 * address: 0x606C0AB4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C0AB4(int a1)
{
  sub_606C0AF8();
  sub_6069AFA0(a1 + 6784, a1 + 108, (_DWORD *)(a1 + 492), (_DWORD *)(a1 + 6824), (ColliderBase *)(a1 + 6128));
  return ShapedCollider_execute((ColliderBase *)(a1 + 6128));
}
