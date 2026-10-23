/* sub_60777C78
 * address: 0x60777C78   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777C78(int result)
{
  int v1; // r1
  int v2; // r3

  v1 = FIELD_U32(result, 468);
  v2 = FIELD_U32(dword_60C995D0, 32);
  if ( (!v2 || v2 != v1) && !FIELD_U32(v1, 20) && !FIELD_U32(v1, 16) )
    return sub_603E552C((sead_ListNode *)dword_60C995D0, FIELD_U32(result, 492));
  return result;
}
