/* sub_603B1E5C
 * address: 0x603B1E5C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_603B1E5C(int a1)
{
  *(_DWORD *)a1 = off_60BF5158;
  LightSource__dtor((_DWORD *)(a1 + 6536));
  FIELD_U32(a1, 6316) = EffectWrapper_vtable;
  sub_60237560(a1 + 6316);
  sead__IDisposer__dtor((_DWORD *)(a1 + 6316));
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
