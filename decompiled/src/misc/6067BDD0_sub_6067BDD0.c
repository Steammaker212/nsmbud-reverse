/* sub_6067BDD0
 * address: 0x6067BDD0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067BDD0(int a1, ActorBuildInfo *a2)
{
  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C1673C;
  sub_6067BE94(a1 + 6100);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 9152));
  RectCollider_ctor((RectCollider *)(a1 + 9520));
  FIELD_U32(a1, 9520) = off_60BC30D8;
  FIELD_U32(a1, 10176) = off_60C16818;
  FIELD_U8(a1, 10188) = 0;
  FIELD_U32(a1, 10184) = 0;
  FIELD_U32(a1, 10180) = 0;
  FIELD_U8(a1, 10189) = 1;
  FIELD_U8(a1, 10194) = 0;
  FIELD_U8(a1, 10191) = 0;
  FIELD_U8(a1, 10190) = 0;
  FIELD_U8(a1, 10193) = 0;
  FIELD_U8(a1, 10192) = 0;
  return a1;
}
