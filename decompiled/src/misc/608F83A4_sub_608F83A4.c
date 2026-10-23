/* sub_608F83A4
 * address: 0x608F83A4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F83A4(int a1)
{
  int v2; // r7
  int v3; // r4
  __int16 v4; // r0
  int v5; // r0
  int result; // r0
  int v7; // r1

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
  v5 = FIELD_U32(a1, 148);
  if ( v5 != a1 + 144 )
  {
    do
      v5 = FIELD_U32(v5, 4);
    while ( v5 - FIELD_U32(a1, 156) != a1 + 144 - FIELD_U32(a1, 156) );
  }
  if ( v2 )
    sead__CriticalSection__unlock(v2);
  result = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    sead__CriticalSection__lock(a1 + 84);
    result = a1 + 84;
  }
  v7 = FIELD_U32(a1, 132);
  if ( v7 != a1 + 128 )
  {
    do
      v7 = FIELD_U32(v7, 4);
    while ( v7 - FIELD_U32(a1, 140) != a1 + 128 - FIELD_U32(a1, 140) );
  }
  if ( result )
    result = sead__CriticalSection__unlock(result);
  if ( v3 )
    return sead__CriticalSection__unlock(v3);
  return result;
}
