/* sub_607CBCA4
 * address: 0x607CBCA4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CBCA4(int a1, unsigned __int8 a2)
{
  int result; // r0

  FIELD_U8(a1, 84) = a2;
  if ( a2 == 255 )
  {
    sub_6078667C((_DWORD *)(a1 + 688), 0);
    FIELD_U32(a1, 964) = -1;
    return -1;
  }
  else
  {
    sub_607865BC(a1 + 688, 0);
    sub_60786324((_DWORD *)(a1 + 688), FIELD_S8(a1, 84));
    result = FIELD_S8(a1, 84);
    FIELD_U32(a1, 964) = result;
  }
  return result;
}
