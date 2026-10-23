/* sub_608EC97C
 * address: 0x608EC97C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EC97C(int a1, const void *a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r9
  int v7; // r7

  v4 = FIELD_U32(a1, 92) + 4;
  sead__CriticalSection__lock(v4);
  v5 = 0;
  if ( !FIELD_U32(a1, 496) )
  {
    v5 = 0;
    FIELD_U32(a1, 112) = 0;
    qmemcpy((void *)(a1 + 120), a2, 0x80u);
    v6 = FIELD_U32(a1, 92) + 4;
    sead__CriticalSection__lock(v6);
    if ( FIELD_U32(a1, 112) == 1 )
    {
      sub_608F0BE8(FIELD_U32(a1, 92), FIELD_U32(a1, 116));
      FIELD_U32(a1, 116) = 0;
    }
    v7 = sub_608F0894(FIELD_U32(a1, 92), a1 + 120, a1 + 252);
    sead__CriticalSection__unlock(v6);
    if ( v7 == 1 )
    {
      FIELD_U32(a1, 116) = 0;
      FIELD_U32(a1, 472) = FIELD_U32(a1, 476);
      FIELD_U32(a1, 496) = 2;
      FIELD_U8(a1, 492) = 0;
      FIELD_U32(a1, 488) = 1065353216;
      sub_608EF560(a1);
      v5 = 1;
    }
  }
  sead__CriticalSection__unlock(v4);
  return v5;
}
