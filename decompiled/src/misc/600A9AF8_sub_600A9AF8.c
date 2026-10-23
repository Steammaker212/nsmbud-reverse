/* sub_600A9AF8
 * address: 0x600A9AF8   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_600A9AF8(sead_ListNode *a1, int a2, sead_ListNode *previous)
{
  sead_ListNode *v4; // r5
  sead_ListNode *next; // r1
  bool v6; // zf
  sead_ListNode *v7; // r1

  v4 = 0;
  if ( (int)a1[1].previous < (int)a1[2].next )
  {
    next = a1[1].next;
    v4 = 0;
    v6 = next == 0;
    if ( next )
    {
      previous = FIELD_U32(next, 0x0);
      v4 = a1[1].next;
    }
    v7 = v4 + 3;
    if ( !v6 )
      a1[1].next = previous;
    v4[1].previous = 0;
    FIELD_U32(v4, 0x4) = v4;
    FIELD_U32(v4, 0x0) = v4;
    v4[2].previous = 0;
    v4[1].next = v7;
    v4[3].previous = (sead_ListNode *)((char *)v4 + 44);
    v4[5].next = v4 + 8;
    v4[8].previous = (sead_ListNode *)((char *)v4 + 84);
    v4[10].next = v4 + 13;
    v4[13].previous = (sead_ListNode *)((char *)v4 + 124);
    v4[15].next = v4 + 18;
    v4[18].previous = (sead_ListNode *)((char *)v4 + 164);
    v4[20].next = v4 + 23;
    v4[23].previous = (sead_ListNode *)((char *)v4 + 204);
    v4[25].next = v4 + 28;
    v4[28].previous = (sead_ListNode *)((char *)v4 + 244);
    v4[30].next = v4 + 33;
    v4[33].previous = (sead_ListNode *)((char *)v4 + 284);
    v4[35].next = v4 + 38;
    v4[38].previous = (sead_ListNode *)((char *)v4 + 324);
    v4[40].next = v4 + 43;
    v4[43].previous = (sead_ListNode *)((char *)v4 + 364);
    v4[45].next = v4 + 48;
    v4[48].previous = (sead_ListNode *)((char *)v4 + 404);
    v4[50].next = v4 + 53;
    v4[53].previous = (sead_ListNode *)((char *)v4 + 444);
    v4[55].next = v4 + 58;
    v4[58].previous = (sead_ListNode *)((char *)v4 + 484);
    v4[60].next = v4 + 63;
    v4[63].previous = (sead_ListNode *)((char *)v4 + 524);
    v4[65].next = v4 + 68;
    v4[68].previous = (sead_ListNode *)((char *)v4 + 564);
    v4[70].next = v4 + 73;
    v4[73].previous = (sead_ListNode *)((char *)v4 + 604);
    v4[75].next = v4 + 78;
    v4[78].previous = (sead_ListNode *)((char *)v4 + 644);
    v4[80].next = 0;
    v4[2].previous = v7;
    v4[2].next = (sead_ListNode *)32;
    v4[83].previous = 0;
    v4[83].next = 0;
    sead__ListNode__insertFront(a1, v4 + 83);
    ++a1[1].previous;
  }
  return v4;
}
