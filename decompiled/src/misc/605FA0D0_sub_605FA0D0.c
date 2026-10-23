/* sub_605FA0D0
 * address: 0x605FA0D0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_605FA0D0(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60C0D364;
  v2 = (_DWORD *)(a1 + 6376);
  LightSource__dtor((_DWORD *)(a1 + 6520));
  LightSource__dtor((_DWORD *)(a1 + 6448));
  LightSource__dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
