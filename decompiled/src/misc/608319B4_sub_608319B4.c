/* sub_608319B4
 * address: 0x608319B4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_608319B4(Actor *a1)
{
  FIELD_U32(a1, 0x0) = (int)off_60C2AFAC;
  PlayerLookTarget_vf0(&a1[76].field_20.next);
  FIELD_U32(a1, 0x0) = (int)&CollisionActor__vtable;
  CollisionMgr_dtor((int)&FIELD_U32(a1 + (8) * 80, 0x8));
  return StageActor__dtor(a1);
}
