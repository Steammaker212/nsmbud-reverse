/* sub_60778050
 * address: 0x60778050   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60778050(int a1, int a2)
{
  int v3; // r1
  int result; // r0
  int v5; // r2
  int v6; // r4
  int v7; // t1

  v3 = FIELD_U32(a1, 468);
  result = dword_60C995D0;
  v5 = FIELD_U32(dword_60C995D0, 32);
  if ( (!v5 || v5 != v3) && !FIELD_U32(v3, 20) && a2 && !FIELD_U32(v3, 16) )
  {
    v7 = FIELD_U32(a2, 11380);
    v6 = a2 + 11380;
    sub_603E552C((sead_ListNode *)dword_60C995D0, v7);
    result = *(_DWORD *)(v6 - 11372);
    *(_DWORD *)(*(_DWORD *)v6 + 24) = result;
  }
  return result;
}
