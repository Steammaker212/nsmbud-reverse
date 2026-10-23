/* sub_601A51FC
 * address: 0x601A51FC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A51FC(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 308);
  if ( result )
  {
    if ( !sub_60190968(dword_60C8996C) || (result = sub_601916EC(dword_60C8996C), result == 33) )
    {
      result = FIELD_U8(dword_60C8B144, 67);
      if ( FIELD_U8(dword_60C8B144, 67) )
      {
        result = FIELD_U8(dword_60C8D408, 1446);
        if ( !FIELD_U8(dword_60C8D408, 1446) )
          return (int)StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8A0A0);
      }
    }
  }
  return result;
}
