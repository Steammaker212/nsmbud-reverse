/* sub_60777F54
 * address: 0x60777F54   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777F54(int a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r3

  v2 = FIELD_U32(a1, 468);
  result = dword_60C995D0;
  v4 = FIELD_U32(dword_60C995D0, 32);
  if ( (!v4 || v4 != v2) && !FIELD_U32(v2, 20) && a2 && !FIELD_U32(v2, 16) )
    return sub_603E552C((sead_ListNode *)dword_60C995D0, FIELD_U32(a2, 11952));
  return result;
}
