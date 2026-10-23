/* sub_604754E4
 * address: 0x604754E4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604754E4(int result, int *a2, _DWORD *a3, int a4)
{
  int v4; // r4
  int v7; // r7

  v4 = a4;
  v7 = result;
  if ( a4 >= 1 )
  {
    do
    {
      result = sub_60474C5C(v7, a3);
      *a2++ = result;
      --v4;
      a3 += 2;
    }
    while ( v4 );
  }
  return result;
}
