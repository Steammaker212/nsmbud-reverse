/* sub_607CE444
 * address: 0x607CE444   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CE444(_DWORD *a1)
{
  int v1; // r2
  int v2; // r1

  v1 = a1[305];
  if ( (v1 & 0x4000000) != 0 )
  {
    a1[305] = v1 & 0xFBFFFFFF;
    (*(void (__fastcall **)(_DWORD *, _DWORD, int))(*a1 + 1168))(a1, 0, 5);
    return 1;
  }
  v2 = 0;
  if ( (v1 & 0x8000000) != 0 )
  {
    a1[305] = v1 & 0xF7FFFFFF;
    sub_607701BC((int)a1);
    return 1;
  }
  return v2;
}
