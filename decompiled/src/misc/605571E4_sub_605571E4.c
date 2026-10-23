/* sub_605571E4
 * address: 0x605571E4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605571E4(int a1)
{
  int result; // r0
  bool v3; // zf

  result = FIELD_U8(a1, 18824);
  if ( result )
  {
    v3 = (FIELD_U32(a1, 3656) & 0x7FF0) == 0;
    FIELD_U32(a1, 18812) = FIELD_U32(a1, 3656) & 0x7FF0;
    FIELD_U32(a1, 18816) = 0;
    if ( v3 )
      FIELD_U32(a1, 18816) = FIELD_U32(a1, 5272) & 0x7FF0;
    StateMgr__execute((StateMgr *)(a1 + 24));
    sub_6050229C(a1 + 5820);
    sub_6050A8A4(a1 + 11596);
    sub_60473B58((_DWORD *)(a1 + 44), 5u, 0);
    sub_60558700(a1 + 7900);
    if ( FIELD_U8(a1, 3648) && (*(_BYTE *)(sub_6047482C(a1 + 44, 0) + 51) & 1) != 0 )
      FIELD_U8(a1, 3648) = 0;
    result = FIELD_U8(a1, 3649);
    if ( FIELD_U8(a1, 3649) )
    {
      result = *(unsigned __int8 *)(sub_6047482C(a1 + 44, 1u) + 51);
      if ( (result & 1) != 0 )
      {
        FIELD_U8(a1, 3649) = 0;
        return 0;
      }
    }
  }
  return result;
}
