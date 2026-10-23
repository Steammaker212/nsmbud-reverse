/* sub_608B9E94
 * address: 0x608B9E94   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B9E94(int a1, int a2, _DWORD *a3, int a4)
{
  int result; // r0
  unsigned int v7; // r5

  result = 0;
  if ( (*a3 & 0x3F) == 0 )
  {
    v7 = *a3 + ((388 * a2 + 63) & 0xFFFFFFC0);
    if ( (int)(v7 - a4) <= 0 )
    {
      sub_608D6DB8(a1 + 72);
      *a3 = v7;
      return 1;
    }
  }
  return result;
}
