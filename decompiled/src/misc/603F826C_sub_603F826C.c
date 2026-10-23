/* sub_603F826C
 * address: 0x603F826C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F826C(int a1)
{
  int v2; // r5
  int v3; // r6

  *(_DWORD *)a1 = off_60BF9590;
  v2 = a1 + 1116;
  nullsub_111(a1 + 1288);
  nullsub_113(v2);
  FIELD_U32(a1, 1056) = off_60BF9614;
  if ( FIELD_U8(a1, 1112) )
  {
    v3 = FIELD_U32(a1, 1084);
    if ( v3 )
    {
      FIELD_U32(a1, 1084) = 0;
      sead__ListNode__erase(a1 + 1072);
      --FIELD_U32(v3, 8);
    }
    FIELD_U8(a1, 1112) = 0;
  }
  sead__IDisposer__dtor((_DWORD *)(a1 + 1056));
  sub_60954610(a1 + 984);
  sub_60954610(a1 + 916);
  if ( FIELD_U8(a1, 192) )
    dword_60C99DD4 = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
