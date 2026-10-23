/* sub_604E1360
 * address: 0x604E1360   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E1360(int result)
{
  unsigned int v1; // r3
  _DWORD *v2; // r5
  unsigned int v3; // r2
  int v4; // r12
  int v5; // r2

  if ( FIELD_U8(result, 5745) )
  {
    v2 = (_DWORD *)(result + 5712);
    v1 = FIELD_U32(result, 5712);
    if ( v1 <= 0x2F )
    {
      v3 = FIELD_U32(result, 5724);
      if ( v3 >= 6 )
        v3 = 0;
      v4 = dword_60C99DD4;
      v5 = dword_60C99DD4 + 72 * v3 + 4 * (v1 >> 5);
      FIELD_U32(v5, 324) |= 1 << (v1 & 0x1F);
      if ( *v2 == 8 )
      {
        FIELD_U32(v4, 324) |= 0x100u;
        if ( *v2 < 0x30u )
        {
          *(_DWORD *)(v4 + 4 * (*v2 >> 5) + 396) |= 1 << (*v2 & 0x1F);
          if ( *v2 <= 0x2Fu )
          {
            *(_DWORD *)(v4 + 4 * (*v2 >> 5) + 468) |= 1 << (*v2 & 0x1F);
            if ( *v2 <= 0x2Fu )
              *(_DWORD *)(v4 + 4 * (*v2 >> 5) + 540) |= 1 << (*v2 & 0x1F);
          }
        }
      }
    }
    FIELD_U8(result, 5745) = 0;
  }
  FIELD_U8(result, 5744) = 0;
  return result;
}
