/* LightSource_update1_helper
 * address: 0x604148F4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall LightSource_update1_helper(sead_ListNode *a1)
{
  sead_ListNode *v2; // r5
  sead_ListNode *v3; // r6
  sead_ListNode *next; // r1

  v2 = 0;
  v3 = a1 + 21531;
  if ( (int)a1[21531].previous < (int)a1[21532].next )
  {
    v2 = 0;
    next = a1[21531].next;
    if ( next )
    {
      v2 = a1[21531].next;
      a1[21531].next = FIELD_U32(next, 0x0);
    }
    LightSource_update1_helper_helper_424120(v2);
    v2[27].previous = 0;
    v2[27].next = 0;
    sead__ListNode__insertFront(a1 + 21530, v2 + 27);
    ++FIELD_U32(v3, 0x0);
  }
  return v2;
}
