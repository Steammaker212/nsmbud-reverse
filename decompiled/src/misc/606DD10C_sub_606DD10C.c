/* sub_606DD10C
 * address: 0x606DD10C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_606DD10C(Actor *a1)
{
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
  CollisionMgr_dtor((int)&a1[8].id);
  return StageActor__dtor(a1);
}
