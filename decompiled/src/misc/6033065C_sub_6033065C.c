/* sub_6033065C
 * address: 0x6033065C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033065C(int a1, int a2, int a3)
{
  int v4; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a3 + 64) + 1192))(FIELD_U32(a3, 64));
  sub_602856EC((int *)(a1 + 6292), v4);
  return Enemy__collisionStar(a1);
}
