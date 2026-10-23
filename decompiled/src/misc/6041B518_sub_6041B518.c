/* sub_6041B518
 * address: 0x6041B518   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041B518(int a1)
{
  int v2; // r4
  void *v3; // r0

  v2 = a1 + 32;
  sead__CriticalSection__lock(a1 + 32);
  if ( !FIELD_U8(a1, 29) )
  {
    if ( (FIELD_U8(a1, 24) & 2) != 0 )
    {
      sub_609213B8(a1 + 4520);
      sub_609213B8(a1 + 4424);
      if ( FIELD_U32(a1, 3628) )
      {
        sub_60913ABC(a1 + 3628);
        sub_60913AD4(a1 + 3628);
      }
    }
    if ( (FIELD_U8(a1, 24) & 1) != 0 )
    {
      sub_6041BC00(a1);
    }
    else
    {
      sub_6041BC00(a1);
      sub_6041C99C(a1);
      v3 = *(void **)(a1 + 72);
      if ( v3 )
      {
        operator_delete(v3);
        FIELD_U32(a1, 72) = 0;
      }
    }
    FIELD_U8(a1, 28) = 1;
  }
  return sead__CriticalSection__unlock(v2);
}
