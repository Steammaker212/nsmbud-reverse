/* sub_607F34CC
 * address: 0x607F34CC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F34CC(int a1, int a2)
{
  *(_DWORD *)a1 = &off_60C27560;
  FIELD_U32(a1, 4) = &off_60C275A4;
  FIELD_U32(a1, 8) = &off_60C275B4;
  FIELD_U32(a1, 12) = &off_60C275D8;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CC5FD4);
  FIELD_U32(a1, 4) = &off_60C27594;
  FIELD_U32(a1, 40) = a2;
  FIELD_U8(a1, 44) = 0;
  FIELD_U32(a1, 48) = 0;
  FIELD_U8(a1, 52) = 0;
  return a1;
}
