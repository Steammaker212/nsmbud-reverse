/* sub_605E21D8
 * address: 0x605E21D8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E21D8(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = 0;
  if ( (FIELD_U8(a1, 6265) & 0x40) == 0 )
    return v2;
  v3 = sub_605D792C(a1, FIELD_U32(a1, 80));
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = v3;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 8020) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18A0);
  v2 = 1;
  sub_605DAD24(a1, 1);
  if ( (FIELD_U8(a1, 6805) & 8) == 0 )
  {
    sub_605D9550(a1, 0, 0.0, 3.0);
    return v2;
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1069547520;
  FIELD_U32(a1, 128) = 0;
  sub_605D79D0(a1, (StateBase *)&dword_60CB1B24, 1);
  return 1;
}
