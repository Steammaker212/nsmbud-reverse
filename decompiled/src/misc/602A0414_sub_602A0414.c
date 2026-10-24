/* sub_602A0414
 * address: 0x602A0414   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602A0414(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BE2120;
  LightSource__dtor(&a1[80].field_4C);
  a1[78].field_4C = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[78].field_4C);
  sead__IDisposer__dtor(&a1[78].field_4C);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
