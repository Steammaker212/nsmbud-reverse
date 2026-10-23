/* sub_60957EEC
 * address: 0x60957EEC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60957EEC(int result, int a2)
{
  int v2; // r2
  bool v3; // zf
  int v4; // r4
  int *v5; // r5
  int v6; // t1

  if ( !(FIELD_U8(result, 866) % (unsigned int)FIELD_U8(result, 867)) )
  {
    v2 = FIELD_U8(result, 252);
    v3 = v2 == 1;
    if ( v2 == 1 )
      v3 = a2 == 0;
    if ( v3 )
    {
      v4 = FIELD_U32(result, 24);
      if ( v4 )
      {
        v5 = *(int **)(result + 28);
        do
        {
          v6 = *v5++;
          result = sub_60976810(v6, 0);
          --v4;
        }
        while ( v4 );
      }
    }
  }
  return result;
}
