/* sub_603E552C
 * address: 0x603E552C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E552C(sead_ListNode *a1, int a2)
{
  int result; // r0

  result = 0;
  if ( a2 && !FIELD_U32(a2, 20) && !FIELD_U32(a2, 16) )
  {
    sead__ListNode__insertFront(a1 + 2, (sead_ListNode *)((char *)a1[3].next + a2));
    ++a1[3].previous;
    return 1;
  }
  return result;
}
