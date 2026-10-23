/* sub_601EAA3C
 * address: 0x601EAA3C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601EAA3C()
{
  _DWORD v1[24]; // [sp+0h] [bp-60h] BYREF

  v1[0] = 0;
  memset(&v1[2], 0, 72);
  sub_601905DC(v1);
  v1[0] = 4;
  v1[1] = sub_601916C8(dword_60C8996C, 4);
  return sub_60191160((_DWORD *)dword_60C8996C, v1);
}
