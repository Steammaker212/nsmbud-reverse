/* sub_603F7B18
 * address: 0x603F7B18   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F7B18(int a1, int a2, unsigned int a3)
{
  int result; // r0

  result = dword_60C99DD4;
  if ( FIELD_U32(dword_60C99DD4, 764) == 2 )
  {
    if ( a3 >= 6 )
      a3 = 0;
    result = dword_60C99DD4 + 72 * a3;
    FIELD_U32(result, 356) += a2;
  }
  return result;
}
