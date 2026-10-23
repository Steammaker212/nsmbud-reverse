/* sub_608D3BAC
 * address: 0x608D3BAC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3BAC(int a1, _BYTE *a2, int a3, int a4)
{
  int v4; // r2
  int v5; // r1

  FIELD_U32(a1, 196) = a2;
  if ( a4 >= 1 )
  {
    *a2 = 0;
    if ( a4 != 1 )
    {
      if ( (((_BYTE)a4 + 3) & 3) != 0 )
      {
        v4 = 1;
        do
          *(_BYTE *)(FIELD_U32(a1, 196) + v4++) = 0;
        while ( v4 - (((_BYTE)a4 + 3) & 3) != 1 );
      }
      else
      {
        v4 = 1;
      }
      if ( (unsigned int)(a4 - 2) >= 3 )
      {
        v5 = v4 + 3;
        do
        {
          *(_BYTE *)(FIELD_U32(a1, 196) + v5 - 3) = 0;
          *(_BYTE *)(FIELD_U32(a1, 196) + v5 - 2) = 0;
          *(_BYTE *)(FIELD_U32(a1, 196) + v5 - 1) = 0;
          *(_BYTE *)(FIELD_U32(a1, 196) + v5) = 0;
          v5 += 4;
        }
        while ( v5 - a4 != 3 );
      }
    }
  }
  FIELD_U32(a1, 200) = a4;
  return 1;
}
