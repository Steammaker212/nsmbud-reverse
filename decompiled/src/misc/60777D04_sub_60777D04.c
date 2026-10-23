/* sub_60777D04
 * address: 0x60777D04   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777D04(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0

  result = FIELD_U8(PlayerMgr_instance, 156);
  if ( !FIELD_U8(PlayerMgr_instance, 156) )
  {
    v5 = FIELD_U32(a1, 496);
    result = dword_60C995D0;
    v6 = FIELD_U32(dword_60C995D0, 32);
    if ( !v6 || v6 != v5 )
    {
      sub_603E552C((sead_ListNode *)dword_60C995D0, v5);
      result = FIELD_U32(a1, 496);
      if ( result )
        FIELD_U8(result, 24) = 0;
      if ( a2 != 1 )
      {
        if ( a2 )
          return result;
        v7 = FIELD_U32(a1, 496);
        if ( v7 )
          FIELD_U8(v7, 24) = 1;
      }
      result = dword_60CBFA90;
      FIELD_U8(dword_60CBFA90, 340) = 1;
    }
  }
  return result;
}
