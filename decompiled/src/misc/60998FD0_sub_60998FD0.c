/* sub_60998FD0
 * address: 0x60998FD0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998FD0(int *a1, unsigned int a2, int a3, int a4)
{
  int v4; // r12
  int result; // r0
  int v6; // lr
  int *v7; // r3

  v4 = *a1;
  result = 0;
  if ( v4 )
  {
    v6 = a4 | (a3 << 16);
    do
    {
      if ( __PAIR64__(v6, a2) >= FIELD_U64(v4, 24) )
      {
        if ( FIELD_U64(v4, 24) >= __PAIR64__(v6, a2) )
          return v4;
        v7 = (int *)(v4 + 20);
      }
      else
      {
        v7 = (int *)(v4 + 16);
      }
      v4 = *v7;
    }
    while ( *v7 );
  }
  return result;
}
