/* sub_605E2144
 * address: 0x605E2144   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E2144(int a1, int a2)
{
  int result; // r0

  result = 0;
  if ( a2
    && (FIELD_U32(a1, 6260) & 2) == 0
    && !(FIELD_U32(a1, 6264) & 0x2000 | FIELD_U32(a1, 6260) & 0x800 | FIELD_U32(a1, 6264) & 0x4000) )
  {
    FIELD_U32(a1, 6788) = FIELD_U32(a2, 8);
    sub_605D79D0(a1, (StateBase *)&unk_60CB1788, 0);
    FIELD_U32(a1, 8020) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB1A84);
    return 1;
  }
  return result;
}
