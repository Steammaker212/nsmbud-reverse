/* sub_601EAC20
 * address: 0x601EAC20   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601EAC20()
{
  int result; // r0
  int v1; // r0
  int v2; // r1
  _DWORD v3[24]; // [sp+0h] [bp-60h] BYREF

  result = FIELD_S8(dword_60CC6D78, 109036);
  if ( result >= 0 )
  {
    v3[0] = 0;
    memset(&v3[2], 0, 72);
    sub_601905DC(v3);
    v3[4] = *(_DWORD *)(*(_DWORD *)sub_601693A0(901) + 8);
    v1 = sub_601D08B0();
    v2 = 118;
    if ( v1 )
      v2 = 119;
    v3[0] = v2;
    v3[1] = sub_601916C8(dword_60C8996C, v2);
    return sub_60191160((_DWORD *)dword_60C8996C, v3);
  }
  return result;
}
