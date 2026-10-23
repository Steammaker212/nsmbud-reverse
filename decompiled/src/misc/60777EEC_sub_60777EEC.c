/* sub_60777EEC
 * address: 0x60777EEC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777EEC(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r3
  int v5; // r2

  v2 = FIELD_U32(a1, 484);
  result = dword_60C995D0;
  v4 = FIELD_U32(dword_60C995D0, 32);
  if ( !v4 || v4 != v2 )
  {
    v5 = FIELD_U32(a1, 468);
    if ( (!v4 || v4 != v5) && !FIELD_U32(v5, 20) && !FIELD_U32(v5, 16) )
      return sub_603E552C((sead_ListNode *)dword_60C995D0, v2);
  }
  return result;
}
