/* sub_605E1E04
 * address: 0x605E1E04   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1E04(int a1)
{
  int result; // r0
  bool v3; // zf

  result = 0;
  v3 = FIELD_U8(dword_60CC6D78, 109032) == 0;
  if ( FIELD_U8(dword_60CC6D78, 109032) )
    v3 = (FIELD_U8(a1, 6267) & 2) == 0;
  if ( !v3 )
  {
    FIELD_U32(a1, 8020) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB18A0);
    sub_605D79D0(a1, &stru_60CB16B4, 0);
    return 1;
  }
  return result;
}
