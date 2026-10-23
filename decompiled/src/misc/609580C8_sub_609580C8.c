/* sub_609580C8
 * address: 0x609580C8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609580C8(int a1, int a2)
{
  int v4; // r5
  int v5; // r7
  int *v6; // r6

  v4 = a1 + 800;
  sead__CriticalSection__lock(a1 + 800);
  v5 = FIELD_U32(a1, 32);
  if ( v5 )
  {
    v6 = *(int **)(a1 + 36);
    do
    {
      if ( *v6 )
        sub_60955444(*v6, a2);
      --v5;
      ++v6;
    }
    while ( v5 );
  }
  return sead__CriticalSection__unlock(v4);
}
