/* sub_6091AE30
 * address: 0x6091AE30   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091AE30(int result, int *a2, unsigned int a3)
{
  unsigned int v4; // r5
  int (**v5)(); // r6

  if ( a3 >> 2 )
  {
    v4 = a3 >> 2;
    v5 = &off_60C5CAFC[(result == 0) + 4];
    do
    {
      result = ((int (__fastcall *)(int))*v5)(*a2);
      *a2++ = result;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
