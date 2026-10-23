/* sub_6099CFD4
 * address: 0x6099CFD4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099CFD4(int a1)
{
  int v2; // r5
  int v3; // r4
  __int16 v4; // r0
  int result; // r0

  v2 = 0;
  v3 = 0;
  v4 = FIELD_U16(a1, 120);
  if ( (v4 & 1) != 0 )
  {
    sead__CriticalSection__lock(a1 + 84);
    v4 = FIELD_U16(a1, 120);
    v3 = a1 + 84;
  }
  if ( (v4 & 1) != 0 )
  {
    sead__CriticalSection__lock(a1 + 84);
    v2 = a1 + 84;
  }
  result = FIELD_U32(a1, 128);
  if ( result != a1 + 124 )
  {
    do
      result = FIELD_U32(result, 4);
    while ( result - 8 != a1 + 116 );
  }
  if ( v2 )
    result = sead__CriticalSection__unlock(v2);
  if ( v3 )
    return sead__CriticalSection__unlock(v3);
  return result;
}
