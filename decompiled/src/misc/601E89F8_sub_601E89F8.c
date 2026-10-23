/* sub_601E89F8
 * address: 0x601E89F8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601E89F8()
{
  int result; // r0
  unsigned int v1; // r1
  _DWORD v2[24]; // [sp+0h] [bp-60h] BYREF

  result = dword_60CC6D78;
  v1 = FIELD_U32(dword_60CC6D78, 452);
  if ( v1 <= 5 && ((1 << v1) & 0x2C) != 0 )
  {
    result = FIELD_U8(dword_60CC6D78, 521);
    if ( (result & 1) == 0 )
    {
      v2[0] = 0;
      memset(&v2[2], 0, 72);
      sub_601905DC(v2);
      v2[0] = 4;
      v2[1] = sub_601916C8(dword_60C8996C, 4);
      return sub_60191160((_DWORD *)dword_60C8996C, v2);
    }
  }
  return result;
}
