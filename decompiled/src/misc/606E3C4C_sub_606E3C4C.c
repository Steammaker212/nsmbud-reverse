/* sub_606E3C4C
 * address: 0x606E3C4C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E3C4C(int a1)
{
  int result; // r0

  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = Actor__getProfileId((Actor *)a1);
    if ( result == 346 )
    {
      FIELD_U8(a1, 6919) = 1;
      return 6919;
    }
  }
  return result;
}
