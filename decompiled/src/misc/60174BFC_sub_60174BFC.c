/* sub_60174BFC
 * address: 0x60174BFC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60174BFC(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  bool v5; // cc

  result = FIELD_U32(a1, 624);
  if ( result == 2 )
  {
    v4 = FIELD_U32(a1, 620);
    v5 = v4 <= 1;
    result = v4 - 1;
    FIELD_U32(a1, 620) = result;
    if ( v5 )
      return (int)StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C88C58);
  }
  else if ( result == 1 )
  {
    v3 = dword_60C8996C;
    result = sub_60190968(dword_60C8996C);
    if ( result == 1 )
    {
      result = FIELD_U8(v3, 1384);
      if ( FIELD_U8(v3, 1384) )
      {
        result = sub_6019112C(v3);
        if ( result == 200 )
        {
          result = 0;
          FIELD_U32(a1, 620) = 0;
          FIELD_U32(a1, 624) = 2;
        }
      }
    }
  }
  return result;
}
