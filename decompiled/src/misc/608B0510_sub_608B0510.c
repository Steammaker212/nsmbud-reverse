/* sub_608B0510
 * address: 0x608B0510   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0510(int result, int a2, int a3, int a4)
{
  int v6; // r5
  int *v7; // r5
  int v8; // t1
  int v9; // r5
  int v10; // r6

  if ( FIELD_U32(result, 260) )
  {
    v6 = result + 4 * a2;
    v8 = FIELD_U32(v6, 388);
    v7 = (int *)(v6 + 388);
    result = v8;
    if ( v8 )
    {
      result = sub_608B0FF8(result);
      if ( result == 1 )
      {
        v9 = *v7;
        sub_608B0FE8(v9, a3, a4);
        v10 = 0;
        sub_608B0FCC(v9, 0);
        result = *(_DWORD *)(sub_608B0F64(v9) + 200);
        if ( result >= 1 )
        {
          while ( sub_608B0FD8(v9, a3) != 1 )
          {
            ++v10;
            result = *(_DWORD *)(sub_608B0F64(v9) + 200);
            if ( v10 >= result )
              return result;
          }
          return sub_608B0FCC(v9, 1);
        }
      }
    }
  }
  return result;
}
