/* sub_602A16B8
 * address: 0x602A16B8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_602A16B8(int a1)
{
  *(_DWORD *)a1 = off_60BE24F4;
  LightSource__dtor((_DWORD *)(a1 + 6508));
  FIELD_U32(a1, 6300) = EffectWrapper_vtable;
  sub_60237560(a1 + 6300);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6300));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0(a1 + 6152);
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
