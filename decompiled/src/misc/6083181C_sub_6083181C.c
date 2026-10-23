/* sub_6083181C
 * address: 0x6083181C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083181C(int a1)
{
  int v2; // r0

  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CC7188);
  v2 = dword_60CC6484;
  FIELD_F32(a1, 6112) = FIELD_F32(dword_60CC6484, 104) * 0.5;
  FIELD_U32(a1, 6108) = FIELD_U32(v2, 112);
  return 1;
}
