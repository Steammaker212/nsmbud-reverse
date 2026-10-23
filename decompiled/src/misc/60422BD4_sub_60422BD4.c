/* sub_60422BD4
 * address: 0x60422BD4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60422BD4(int a1)
{
  int v2; // r4
  int v3; // r6
  int v4; // r0
  int v5; // r5
  int v6; // r7
  int v7; // r0

  v2 = a1 + 648;
  sead__CriticalSection__lock(a1 + 648);
  v3 = FIELD_U32(a1, 636);
  v4 = a1 + 632;
  if ( v3 != a1 + 632 )
  {
    v5 = FIELD_U32(a1, 644);
    v6 = v4 - v5;
    v7 = v3 - v5;
    do
    {
      sub_60444DD8(v7);
      v3 = FIELD_U32(v3, 4);
      v7 = v3 - v5;
    }
    while ( v3 - v5 != v6 );
  }
  return sead__CriticalSection__unlock(v2);
}
