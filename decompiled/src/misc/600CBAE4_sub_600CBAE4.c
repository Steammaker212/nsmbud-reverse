/* sub_600CBAE4
 * address: 0x600CBAE4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_600CBAE4(Actor *a1)
{
  int *v2; // r5

  FIELD_U32(a1, 0x0) = (int)off_60BCA9F8;
  a1[78].field_44 = (int)EffectWrapper_vtable;
  v2 = &a1[78].field_44;
  sub_60237560((int)&a1[78].field_44);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor(&a1[8].id);
  return StageActor__dtor(a1);
}
