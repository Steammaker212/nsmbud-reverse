/* sub_607466B4
 * address: 0x607466B4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607466B4(int a1)
{
  int result; // r0
  Actor *v3; // r5

  sub_60421AD4(FIELD_U32(a1, 644));
  FIELD_U32(a1, 668) = FIELD_U32(a1, 656);
  FIELD_U32(a1, 672) = FIELD_U32(a1, 660);
  result = FIELD_U32(a1, 664);
  FIELD_U32(a1, 676) = result;
  v3 = *(Actor **)(a1 + 56);
  if ( v3 )
  {
    if ( Actor__getProfileId(*(Actor **)(a1 + 56)) == 34 || (result = Actor__getProfileId(v3), result == 35) )
    {
      result = v3[14].field_44;
      FIELD_U32(a1, 124) = result;
    }
  }
  return result;
}
