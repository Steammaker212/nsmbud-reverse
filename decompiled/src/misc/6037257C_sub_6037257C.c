/* sub_6037257C
 * address: 0x6037257C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6037257C(int a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = off_60BF08AC;
  FIELD_U32(a1, 11972) = EffectWrapper_vtable;
  v2 = (_DWORD *)(a1 + 11972);
  sub_60237560(a1 + 11972);
  sead__IDisposer__dtor(v2);
  *(_DWORD *)a1 = off_60BF0B90;
  FIELD_U32(a1, 11852) = EffectWrapper_vtable;
  sub_60237560(a1 + 11852);
  sead__IDisposer__dtor((_DWORD *)(a1 + 11852));
  CollisionMgr_dtor(a1 + 6304);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  return StageActor__dtor((Actor *)a1);
}
