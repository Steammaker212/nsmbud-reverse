/* sub_608F7AE8
 * address: 0x608F7AE8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F7AE8(int a1)
{
  int v2; // r4
  int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r6

  v2 = 0;
  v3 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v3 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v4 = FIELD_U32(a1, 132);
  if ( v4 != a1 + 128 )
  {
    v5 = FIELD_U32(a1, 140);
    v2 = 0;
    v6 = a1 + 128 - v5;
    v7 = v4 - v5;
    do
    {
      v4 = FIELD_U32(v4, 4);
      v2 += FIELD_U32(v7, 12);
      v7 = v4 - v5;
    }
    while ( v4 - v5 != v6 );
  }
  if ( v3 )
    sead__CriticalSection__unlock(v3);
  return v2;
}
