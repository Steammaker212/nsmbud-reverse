/* sub_60777C18
 * address: 0x60777C18   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777C18(int a1)
{
  int v1; // r1
  int result; // r0
  int v3; // r2

  v1 = FIELD_U32(a1, 468);
  result = dword_60C995D0;
  v3 = FIELD_U32(dword_60C995D0, 32);
  if ( (!v3 || v3 != v1) && !FIELD_U32(v1, 20) && !FIELD_U32(v1, 16) )
    return sub_603E552C((sead_ListNode *)dword_60C995D0, v1);
  return result;
}
