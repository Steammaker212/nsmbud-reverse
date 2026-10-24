/* sub_606DD1C0
 * address: 0x606DD1C0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606DD1C0(Actor *a1)
{
  Actor *v2; // r0

  FIELD_U32(a1, 0x0) = (int)off_60C1E95C;
  PlayerLookTarget_vf0(&a1[82].field_30);
  a1[79].profile = (Profile *)EffectWrapper_vtable;
  sub_60237560((int)&a1[79].profile);
  sead__IDisposer__dtor(&a1[79].profile);
  a1[77].field_44 = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[77].field_44);
  sead__IDisposer__dtor(&a1[77].field_44);
  a1[76].field_2C = (int)EffectWrapper_vtable;
  sub_60237560((int)&a1[76].field_2C);
  sead__IDisposer__dtor(&a1[76].field_2C);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  v2 = StageActor__dtor(a1);
  operator_delete(v2);
}
