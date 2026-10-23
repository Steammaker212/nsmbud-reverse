/* sub_606AE248
 * address: 0x606AE248   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AE248(int a1, _DWORD *a2, unsigned int a3)
{
  int result; // r0

  result = 0;
  *a2 = 0;
  a2[1] = 0;
  if ( a3 <= 0xF && *(_BYTE *)(a1 + 8 * a3 + 6104) == 1 )
  {
    *a2 = FIELD_U32(a1, 6324);
    a2[1] = FIELD_U32(a1, 6328);
    return 1;
  }
  return result;
}
