/* sub_60775BD0
 * address: 0x60775BD0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60775BD0(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 52);
  switch ( result )
  {
    case 0:
      result = dword_60C9CF0C;
      if ( FIELD_S8(dword_60C9CF0C, 1404) >= 0 )
      {
        result = FIELD_U8(dword_60C9CF0C, 1406);
        if ( !FIELD_U8(dword_60C9CF0C, 1406) )
        {
          FIELD_U32(a1, 52) = 1;
          FIELD_U8(a1, 448) = 1;
          result = 1;
        }
      }
      break;
    case 1:
      result = FIELD_U32(a1, 388);
      if ( !result )
      {
        FIELD_U8(a1, 448) = 0;
        FIELD_U32(a1, 52) = 2;
        FIELD_U32(a1, 56) = 30;
        result = 2;
      }
      break;
    case 2:
      result = FIELD_U32(a1, 56);
      if ( !result )
      {
        sub_605E9424(dword_60CB1BE4);
        FIELD_U32(a1, 52) = 3;
        result = 3;
      }
      break;
    case 3:
      result = sub_605E9514(dword_60CB1BE4);
      if ( result == 1 )
      {
        StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CBFA94);
        FIELD_U32(a1, 52) = 0;
        FIELD_U32(a1, 56) = 0;
        result = 0;
      }
      break;
    default:
      return result;
  }
  return result;
}
