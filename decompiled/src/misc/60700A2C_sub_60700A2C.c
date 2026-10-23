/* sub_60700A2C
 * address: 0x60700A2C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60700A2C(int a1)
{
  unsigned int v2; // r5

  v2 = FIELD_U32(a1, 20);
  sub_606F4650(a1, v2);
  FIELD_U8(a1, 8221) = 15 * (BYTE1(v2) & 0xF);
  FIELD_U8(a1, 8222) = HIBYTE(v2);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBC66C);
  ef_waterpillar_ref(a1);
  return 1;
}
