/* sub_604B4EE4
 * address: 0x604B4EE4   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B4EE4(int a1)
{
  int result; // r0

  result = sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    switch ( FIELD_U32(AreaTask_intance, 1868) )
    {
      case 4:
        result = sub_6047459C(FIELD_U32(a1, 4), 7u);
        break;
      case 5:
        result = sub_6047459C(FIELD_U32(a1, 4), 8u);
        break;
      case 6:
        result = sub_6047459C(FIELD_U32(a1, 4), 6u);
        break;
      case 7:
        result = sub_6047459C(FIELD_U32(a1, 4), 5u);
        break;
      default:
        result = sub_604B5858(a1);
        break;
    }
  }
  return result;
}
