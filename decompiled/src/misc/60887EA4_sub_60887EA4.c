/* sub_60887EA4
 * address: 0x60887EA4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60887EA4(_DWORD *a1, __int64 a2)
{
  int result; // r0
  int v5; // lr
  int v6; // r1
  int v7; // r4

  result = 0;
  if ( ((unsigned int)a2 & HIDWORD(a2)) != 0xFFFFFFFF )
  {
    v5 = a1[14];
    if ( v5 < 1 )
    {
LABEL_6:
      if ( a1[247] )
      {
        result = sub_60887EA4(a1[247]);
        if ( !result )
        {
          debugPrintRelated("Appointed Primitive is not found from Resident Resource.\n");
          return 0;
        }
      }
    }
    else
    {
      v6 = a1[16];
      v7 = 0;
      while ( FIELD_U64(v6, 24) != a2 )
      {
        ++v7;
        v6 += 112;
        if ( v7 >= v5 )
          goto LABEL_6;
      }
      return v6;
    }
  }
  return result;
}
