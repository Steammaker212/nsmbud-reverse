/* sub_603E49F8
 * address: 0x603E49F8   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E49F8(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r5

  sub_60024240(FIELD_U32(a1, 24));
  v2 = 0;
  FIELD_U8(a1, 29) = 0;
  if ( FIELD_U32(a1, 24) < 4u )
    v2 = FIELD_U32(a1, 24);
  result = PlayerMgr_instance + 4 * v2;
  v4 = FIELD_U32(result, 32);
  if ( v4 )
  {
    sub_6076DF24(FIELD_U32(result, 32));
    result = FIELD_U32(a1, 32);
    switch ( result )
    {
      case 0:
        result = sub_607A6B04(v4);
        break;
      case 1:
        result = sub_607A72C8(v4);
        break;
      case 2:
        result = sub_607A75D8(v4);
        break;
      case 3:
        result = sub_607A6ADC(v4);
        break;
      case 4:
        result = sub_607A6AF0(v4);
        break;
      default:
        return result;
    }
  }
  return result;
}
