/* sub_60628254
 * address: 0x60628254   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60628254(int a1)
{
  unsigned int v2; // r5

  v2 = FIELD_U32(a1, 20);
  sandpillar_ref(a1, v2);
  FIELD_U8(a1, 7508) = 15 * (BYTE1(v2) & 0xF);
  FIELD_U8(a1, 7509) = HIBYTE(v2);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB3C14);
  return 1;
}
