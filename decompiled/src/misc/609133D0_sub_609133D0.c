/* sub_609133D0
 * address: 0x609133D0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609133D0(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 v2; // r2
  unsigned __int8 *v3; // r3
  unsigned int v4; // r0
  int v5; // t1

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1 + 1;
    v4 = 0;
    do
    {
      v4 = 1170 * v4 + v2;
      v5 = *v3++;
      v2 = v5;
    }
    while ( v5 );
  }
  else
  {
    v4 = 0;
  }
  return v4 % a2;
}
