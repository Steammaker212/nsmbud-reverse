/* sub_608B1C60
 * address: 0x608B1C60   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B1C60(int a1)
{
  int result; // r0
  unsigned int v3; // r3
  int v4; // r1

  result = 0;
  v3 = FIELD_U32(a1, 20);
  if ( (v3 & 0x100) != 0 )
  {
    v4 = (v3 & 1)
       + ((v3 >> 1) & 1)
       + ((v3 >> 2) & 1)
       + ((v3 >> 3) & 1)
       + ((v3 >> 4) & 1)
       + ((v3 >> 5) & 1)
       + ((v3 >> 6) & 1)
       + ((v3 >> 7) & 1);
    if ( v4 != -1 )
      return a1 + *(_DWORD *)(a1 + 20 + 4 * (v4 + 1));
  }
  return result;
}
