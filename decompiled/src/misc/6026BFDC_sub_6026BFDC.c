/* sub_6026BFDC
 * address: 0x6026BFDC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6026BFDC(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)off_60BDC23C;
  CollisionMgr_dtor((int)&a1[79].field_20);
  FIELD_U32(a1, 0x0) = (int)&Enemy__vtable;
  sub_602F36E0(&a1[76].field_48);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
