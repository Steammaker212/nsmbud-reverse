/* sub_6061BC30
 * address: 0x6061BC30   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061BC30(int a1, ActorBuildInfo *a2)
{
  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C10BE8;
  FIELD_U32(a1, 6100) = 0;
  FIELD_U32(a1, 6104) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 6112));
  FIELD_U32(a1, 6112) = off_60BC30D8;
  FIELD_U8(a1, 6768) = 0;
  FIELD_U32(a1, 6784) = 0;
  FIELD_U32(a1, 6780) = 0;
  FIELD_U32(a1, 6776) = 0;
  FIELD_U32(a1, 6772) = 0;
  FIELD_U32(a1, 6788) = 1028443341;
  FIELD_U32(a1, 6792) = 1008981770;
  FIELD_U32(a1, 6796) = 1036831949;
  FIELD_U32(a1, 6800) = 0x40000000;
  FIELD_U32(a1, 6804) = off_60C10CBC;
  return a1;
}
