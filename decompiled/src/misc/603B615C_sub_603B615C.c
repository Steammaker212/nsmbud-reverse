/* sub_603B615C
 * address: 0x603B615C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603B615C(int a1)
{
  int v2; // r5
  _DWORD *v3; // r6
  Actor *v4; // r0

  *(_DWORD *)a1 = off_60BF56E0;
  v2 = a1 + 6448;
  FIELD_U32(a1, 11824) = EffectWrapper_vtable;
  v3 = (_DWORD *)(a1 + 11824);
  sub_60237560(a1 + 11824);
  sead__IDisposer__dtor(v3);
  CollisionMgr_dtor(v2);
  *(_DWORD *)a1 = &Enemy__vtable;
  sub_602F36E0((_BYTE *)(a1 + 6152));
  *(_DWORD *)a1 =&CollisionActor__vtable;
  CollisionMgr_dtor(a1 + 648);
  v4 = StageActor__dtor((Actor *)a1);
  operator_delete(v4);
}
