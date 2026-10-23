/* sub_608DDD00
 * address: 0x608DDD00   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DDD00(int a1, int a2)
{
  int result; // r0
  int v5; // r5
  int *v6; // r4
  int v7; // t1
  int *v8; // r0

  result = FIELD_U8(a1, 192);
  if ( result )
  {
    v5 = a1 + 144;
    sead__CriticalSection__lock(a1 + 144);
    if ( sub_608DE684(a1 + 128, FIELD_U32(a1, 140) + a2) < 0 )
    {
      v6 = (int *)(a1 + 136);
    }
    else
    {
      sead__ListNode__erase(FIELD_U32(a1, 140) + a2);
      v7 = FIELD_U32(a1, 136);
      v6 = (int *)(a1 + 136);
      *v6 = v7 - 1;
    }
    sead__CriticalSection__unlock(v5);
    result = *v6;
    if ( !*v6 )
    {
      v8 = sub_608C3C60();
      return sub_608C402C((int)v8);
    }
  }
  return result;
}
