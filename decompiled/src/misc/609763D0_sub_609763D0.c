/* sub_609763D0
 * address: 0x609763D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609763D0(int a1, int a2)
{
  int result; // r0
  _DWORD v4[13]; // [sp+4h] [bp-34h] BYREF

  result = FIELD_U32(a1, 3620);
  if ( result )
  {
    sub_60958528((int)v4, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
    v4[0] = FIELD_U8(a1, 4) + 2;
    result = FIELD_U32(a1, 3620);
    if ( (FIELD_U8(result, 32) & 1) != 0 )
      return (**(int (__fastcall ***)(int, _DWORD *))(result + 36))(result + 36, v4);
  }
  return result;
}
