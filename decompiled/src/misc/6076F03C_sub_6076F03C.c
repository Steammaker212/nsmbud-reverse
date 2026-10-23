/* sub_6076F03C
 * address: 0x6076F03C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6076F03C(int a1, int a2)
{
  signed int result; // r0
  float v4; // r6
  unsigned int v5; // r5
  int v6; // r0
  Vec3 v7; // [sp+4h] [bp-1Ch] BYREF

  result = FIELD_U8(a1, 6900);
  if ( (result & 1) != 0 )
  {
    result = FIELD_U8(a1, 6904);
    if ( (result & 0x18) != 0 )
    {
      result = FIELD_U32(a1, 1204) | 0x20000000;
      FIELD_U32(a1, 1204) = result;
    }
    else if ( a2 == 1 )
    {
      v4 = FIELD_F32(a1, 112);
      v7.x = FIELD_F32(a1, 108);
      v7.y = v4;
      v7.z = sub_600024C4(a1);
      v5 = FIELD_S8(a1, 84);
      v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1256))(a1);
      return sub_60236E40(v5, v6, &v7, 0, 0);
    }
  }
  return result;
}
