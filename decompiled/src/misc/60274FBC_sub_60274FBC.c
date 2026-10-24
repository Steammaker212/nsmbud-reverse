/* sub_60274FBC
 * address: 0x60274FBC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60274FBC(Actor *a1)
{
  char *p_movementId; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BDCBD8;
  p_movementId = &a1[79].movementId;
  CollisionMgr_dtor((int)&a1[82].field_10);
  a1[80].settings1 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[80].settings1);
  sead__IDisposer__dtor(&a1[80].settings1);
  LightSource__dtor(p_movementId);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  v3 = StageActor__dtor(a1);
  operator_delete(v3);
}
