/* sub_60793F40
 * address: 0x60793F40   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60793F40(int result, int *a2, int a3)
{
  int *v3; // r4
  _DWORD v4[14]; // [sp+0h] [bp-38h] BYREF

  v3 = a2;
  if ( a3 >= 0 )
  {
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(result + 24) + 108))(
      **(_DWORD **)(result + 24),
      a3,
      v4);
    a3 = v4[3];
    a2 = (int *)v4[7];
    result = v4[11];
  }
  *v3 = a3;
  v3[1] = (int)a2;
  v3[2] = result;
  return result;
}
