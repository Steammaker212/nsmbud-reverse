/* sub_6042FE94
 * address: 0x6042FE94   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042FE94(int a1, int *a2)
{
  int result; // r0
  int *v5; // r7
  int v6; // r6
  int v7; // t1

  result = *a2;
  if ( *a2 >= 1 )
  {
    v5 = (int *)a2[2];
    v6 = 4 * result;
    do
    {
      v7 = *v5++;
      sub_6042FCCC(a1, v7);
      v6 -= 4;
    }
    while ( v6 );
    *a2 = 0;
    return 0;
  }
  return result;
}
