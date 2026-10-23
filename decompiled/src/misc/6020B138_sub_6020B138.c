/* sub_6020B138
 * address: 0x6020B138   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020B138(int a1)
{
  int result; // r0
  unsigned int v3; // r0
  int v4; // r1

  if ( !sub_60190968(dword_60C8996C) || (result = sub_60185D08((Actor *)a1), result == 1) )
  {
    result = sub_6020AE98();
    if ( result == 1 )
    {
      v3 = FIELD_U32(a1, 352);
      if ( v3 >= 5 )
        v3 = 0;
      result = dword_60C8D4EC + 4 * v3;
      v4 = FIELD_U32(result, 36);
      FIELD_U32(a1, 376) = v4;
      if ( v4 )
      {
        sub_6020AE5C(a1);
        FIELD_U8(a1, 540) = 0;
        return (int)StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8CAD4);
      }
    }
  }
  return result;
}
