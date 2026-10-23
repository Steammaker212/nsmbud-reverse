/* sub_606E40DC
 * address: 0x606E40DC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E40DC(Actor *a1)
{
  int result; // r0

  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = Actor__getProfileId(a1);
    if ( result == 347 )
    {
      result = a1[78].field_48 | 0x20000;
      a1[78].field_48 = result;
    }
  }
  return result;
}
