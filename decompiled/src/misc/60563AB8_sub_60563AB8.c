/* sub_60563AB8
 * address: 0x60563AB8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60563AB8(ColliderBase *a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  __int64 v6; // [sp+0h] [bp-18h] BYREF

  result = a1[21].field_E4;
  if ( result == 1 )
  {
    result = (*(int (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 360))(a1);
    if ( result )
    {
      v3 = a1[18].field_130;
      v4 = a1[18].field_134;
      v5 = (*(int (__fastcall **)(ColliderBase *))(FIELD_U32(a1, 0x0) + 360))(a1);
      HIDWORD(v6) = v4 | HIWORD(v5);
      LODWORD(v6) = v3 & 0xFF00FFFF | (v5 << 16);
      return sub_601604FC(a1 + 18, &v6);
    }
  }
  return result;
}
