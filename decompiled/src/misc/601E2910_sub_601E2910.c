/* sub_601E2910
 * address: 0x601E2910   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E2910(int a1)
{
  int v1; // r5
  int v2; // r6
  int v3; // r4
  float v4; // s0

  if ( FIELD_S32(a1, 320) < 1 )
    return 0;
  v1 = FIELD_U32(a1, 316);
  if ( !v1 )
    return 0;
  v2 = a1 + 312;
  while ( 1 )
  {
    v3 = FIELD_U32(v1, 8);
    if ( v3 )
    {
      v4 = (*(float (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 16))(FIELD_U32(v1, 8));
      if ( v4 <= 0.00000011921 && v4 >= -0.00000011921 )
        break;
    }
    v1 = FIELD_U32(v1, 4);
    if ( v1 == v2 )
      v1 = 0;
    if ( !v1 )
      return 0;
  }
  return v3;
}
