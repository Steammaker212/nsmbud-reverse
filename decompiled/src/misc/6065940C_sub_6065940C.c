/* sub_6065940C
 * address: 0x6065940C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065940C(int a1, int a2, _DWORD *a3)
{
  int v5; // r1
  int result; // r0

  v5 = StoneEye_vf57(a1);
  result = 0;
  if ( v5 == 1 )
  {
    *a3 += FIELD_U32(a1, 6708);
    return 1;
  }
  return result;
}
