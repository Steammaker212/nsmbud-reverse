/* sub_603C1874
 * address: 0x603C1874   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C1874(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6104) = v1 & 3;
  FIELD_U8(a1, 6105) = ((v1 & 0x10) != 0) + 1;
  FIELD_U8(a1, 6106) = BYTE1(v1) & 0xF;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C98604);
  return 1;
}
