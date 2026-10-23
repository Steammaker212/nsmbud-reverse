/* sub_601E1CF4
 * address: 0x601E1CF4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E1CF4(int a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6
  int v4; // r7
  float v5; // s0

  v1 = 0;
  v2 = 0;
  if ( FIELD_S32(a1, 320) >= 1 )
  {
    v3 = FIELD_U32(a1, 316);
    v2 = 0;
    if ( v3 )
    {
      v4 = a1 + 312;
      while ( 1 )
      {
        v2 = FIELD_U32(v3, 8);
        if ( v2 )
        {
          v5 = (*(float (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 16))(FIELD_U32(v3, 8));
          if ( v5 <= 0.00000011921 && v5 >= -0.00000011921 )
            break;
        }
        v3 = FIELD_U32(v3, 4);
        if ( v3 == v4 )
          v3 = 0;
        if ( !v3 )
        {
          v2 = 0;
          break;
        }
      }
    }
  }
  if ( !v2 )
    return 1;
  return v1;
}
