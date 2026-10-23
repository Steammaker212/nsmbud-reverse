/* sub_60777FB4
 * address: 0x60777FB4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777FB4(int result, int *a2, int a3)
{
  int v5; // r6
  int v6; // r1

  v5 = result;
  if ( a2 )
  {
    sub_6076DEAC((int)a2);
    result = FIELD_U32(v5, 468);
    v6 = FIELD_U32(dword_60C995D0, 32);
    if ( (!v6 || v6 != result) && !FIELD_U32(result, 20) )
    {
      result = FIELD_U32(result, 16);
      if ( !result )
      {
        (*(void (__fastcall **)(int *, int))(*a2 + 624))(a2, 1);
        *(_DWORD *)(a2[3002] + 32) = a3;
        return sub_603E552C((sead_ListNode *)dword_60C995D0, a2[3002]);
      }
    }
  }
  return result;
}
