/* sub_6013A98C
 * address: 0x6013A98C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013A98C(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // s0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  result = FIELD_U8(a1, 86);
  if ( result == 1 )
  {
    v4 = -991887360;
  }
  else
  {
    if ( result )
      return result;
    v3 = FIELD_U32(a1, 112);
    v5[0] = FIELD_U32(a1, 108);
    v5[1] = v3;
    result = ((int (__fastcall *)(int, _DWORD *, _DWORD))sub_60151960)(a1 + 648, v5, 0);
    v4 = 1162756096;
    if ( result == 1 )
    {
      result = a1 + 6236;
      if ( FIELD_F32(a1, 6236) < 0.0 )
        v4 = FIELD_U32(a1, 6236);
    }
  }
  FIELD_U32(a1, 116) = v4;
  return result;
}
