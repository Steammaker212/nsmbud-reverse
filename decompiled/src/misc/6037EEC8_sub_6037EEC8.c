/* sub_6037EEC8
 * address: 0x6037EEC8   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037EEC8(Actor *a1)
{
  int *v2; // r1

  if ( Actor__getProfileId(a1) == 44 )
  {
    v2 = dword_6037EF28;
    if ( (FIELD_U32(a1, 0x18) & 0x100000) != 0 )
      v2 = &dword_6037EF28[1];
    a1[1].field_20.next = (sead_ListNode *)*v2;
  }
  sub_602CB180((int)&a1[79].heap, (int)&a1[155].field_40, ((unsigned int)FIELD_U32(a1, 0x14) >> 8) & 0xF);
  return 1;
}
