/* sub_607869D0
 * address: 0x607869D0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607869D0(int a1)
{
  int result; // r0
  unsigned int v3; // r1

  result = 0;
  if ( !FIELD_U8(dword_60C9A1F0, 6553) )
  {
    v3 = FIELD_U32(a1, 12);
    result = 1;
    if ( (v3 & 8) == 0 )
      return (v3 >> 12) & 1;
  }
  return result;
}
