/* sub_606593D0
 * address: 0x606593D0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606593D0(int a1, _DWORD *a2)
{
  int v4; // r1
  int result; // r0

  v4 = StoneEye_vf56();
  result = 0;
  if ( v4 == 1 )
  {
    *a2 += FIELD_U32(a1, 6708);
    return 1;
  }
  return result;
}
