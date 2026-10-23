/* sub_6041B6CC
 * address: 0x6041B6CC   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041B6CC(int a1)
{
  int v2; // r5
  int v3; // r0
  void *v4; // r0

  v2 = a1 + 32;
  sead__CriticalSection__lock(a1 + 32);
  if ( FIELD_U32(a1, 20) || FIELD_U32(a1, 16) )
    sub_6041A278((_DWORD *)dword_60C9BAF4, a1);
  v3 = FIELD_U32(a1, 24);
  if ( (v3 & 1) != 0 && FIELD_U32(a1, 68) )
    FIELD_U32(a1, 68) = 0;
  if ( (v3 & 2) != 0 )
  {
    sub_609213B8(a1 + 4520);
    sub_609213B8(a1 + 4424);
    if ( FIELD_U32(a1, 3628) )
    {
      sub_60913ABC(a1 + 3628);
      sub_60913AD4(a1 + 3628);
    }
    if ( FIELD_U32(a1, 3616) )
    {
      sub_60913ABC(a1 + 3616);
      sub_60913AD4(a1 + 3616);
    }
    sub_6083E610(a1 + 2060);
  }
  sub_6041BC00(a1);
  sub_6041C99C(a1);
  v4 = *(void **)(a1 + 72);
  if ( v4 )
  {
    operator_delete(v4);
    FIELD_U32(a1, 72) = 0;
  }
  dword_60CC79E4(a1 + 4664);
  FIELD_U8(a1, 29) = 1;
  return sead__CriticalSection__unlock(v2);
}
