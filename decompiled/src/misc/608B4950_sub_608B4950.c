/* sub_608B4950
 * address: 0x608B4950   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4950(int result, int a2, int a3)
{
  int v5; // r4
  bool v6; // zf
  int v7; // r6

  v5 = result;
  if ( a2 )
  {
    result = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 1380013894 )
    {
      result = FIELD_U16(a2, 4);
      v6 = result == 65279;
      if ( result == 65279 )
      {
        result = FIELD_U32(a2, 8);
        v6 = result == 0x10000;
      }
      if ( v6 )
      {
        *(_DWORD *)v5 = a2;
        FIELD_U32(v5, 4) = sub_608B47CC(a2) + 8;
        FIELD_U8(v5, 12) = 1;
        result = 0;
        FIELD_U32(v5, 8) = 0;
        if ( a3 == 1 )
        {
          v7 = *(_DWORD *)v5;
          result = *(_DWORD *)(v7 + sub_608B4850(*(_DWORD *)v5));
          if ( result == 1413568326 )
          {
            result = a2 + sub_608B4850(*(_DWORD *)v5) + 4;
            FIELD_U32(v5, 8) = result;
          }
        }
      }
    }
  }
  return result;
}
