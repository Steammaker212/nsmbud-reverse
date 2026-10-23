/* sub_606F45A8
 * address: 0x606F45A8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F45A8(int a1)
{
  int result; // r0
  int v3; // r1
  StateBase *v4; // r1

  result = 2;
  if ( FIELD_U32(dword_60C99DD4, 764) != 3 )
  {
    sub_606F4650(a1, FIELD_U32(a1, 20));
    v3 = (FIELD_U32(a1, 24) >> 28) & 7;
    FIELD_U8(a1, 6516) = v3;
    if ( v3 == 1 )
      v4 = (StateBase *)&unk_60CBC398;
    else
      v4 = (StateBase *)&dword_60CBC374;
    StateMgr__changeState((StateMgr *)(a1 + 6084), v4);
    ef_waterpillar_ref(a1);
    result = 1;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      FIELD_U32(a1, 76) |= 4u;
  }
  return result;
}
