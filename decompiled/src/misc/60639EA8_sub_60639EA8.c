/* sub_60639EA8
 * address: 0x60639EA8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60639EA8(int a1)
{
  sub_60639EF8();
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_60639D64((_DWORD *)a1);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6568));
  FIELD_U16(a1, 7022) = FIELD_U16(a1, 7020);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
