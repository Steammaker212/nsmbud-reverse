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
  if ( (int)FIELD_U32(a1 + (1) * 8, 0x0) < (int)FIELD_U32(a1 + (2) * 8, 0x4) )
  {
    next = FIELD_U32(a1 + (1) * 8, 0x4);
    v4 = 0;
    v6 = next == 0;
    if ( next )
    {
      previous = FIELD_U32(next, 0x0);
      v4 = FIELD_U32(a1 + (1) * 8, 0x4);
    }
    v7 = v4 + 3;
    if ( !v6 )
      FIELD_U32(a1 + (1) * 8, 0x4) = previous;
    FIELD_U32(v4 + (1) * 8, 0x0) = 0;
    FIELD_U32(v4, 0x4) = v4;
    FIELD_U32(v4, 0x0) = v4;
    FIELD_U32(v4 + (2) * 8, 0x0) = 0;
    FIELD_U32(v4 + (1) * 8, 0x4) = v7;
    FIELD_U32(v4 + (3) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 44);
    FIELD_U32(v4 + (5) * 8, 0x4) = v4 + 8;
    FIELD_U32(v4 + (8) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 84);
    FIELD_U32(v4 + (10) * 8, 0x4) = v4 + 13;
    FIELD_U32(v4 + (13) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 124);
    FIELD_U32(v4 + (15) * 8, 0x4) = v4 + 18;
    FIELD_U32(v4 + (18) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 164);
    FIELD_U32(v4 + (20) * 8, 0x4) = v4 + 23;
    FIELD_U32(v4 + (23) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 204);
    FIELD_U32(v4 + (25) * 8, 0x4) = v4 + 28;
    FIELD_U32(v4 + (28) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 244);
    FIELD_U32(v4 + (30) * 8, 0x4) = v4 + 33;
    FIELD_U32(v4 + (33) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 284);
    FIELD_U32(v4 + (35) * 8, 0x4) = v4 + 38;
    FIELD_U32(v4 + (38) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 324);
    FIELD_U32(v4 + (40) * 8, 0x4) = v4 + 43;
    FIELD_U32(v4 + (43) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 364);
    FIELD_U32(v4 + (45) * 8, 0x4) = v4 + 48;
    FIELD_U32(v4 + (48) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 404);
    FIELD_U32(v4 + (50) * 8, 0x4) = v4 + 53;
    FIELD_U32(v4 + (53) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 444);
    FIELD_U32(v4 + (55) * 8, 0x4) = v4 + 58;
    FIELD_U32(v4 + (58) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 484);
    FIELD_U32(v4 + (60) * 8, 0x4) = v4 + 63;
    FIELD_U32(v4 + (63) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 524);
    FIELD_U32(v4 + (65) * 8, 0x4) = v4 + 68;
    FIELD_U32(v4 + (68) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 564);
    FIELD_U32(v4 + (70) * 8, 0x4) = v4 + 73;
    FIELD_U32(v4 + (73) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 604);
    FIELD_U32(v4 + (75) * 8, 0x4) = v4 + 78;
    FIELD_U32(v4 + (78) * 8, 0x0) = (sead_ListNode *)((char *)v4 + 644);
    FIELD_U32(v4 + (80) * 8, 0x4) = 0;
    FIELD_U32(v4 + (2) * 8, 0x0) = v7;
    FIELD_U32(v4 + (2) * 8, 0x4) = (sead_ListNode *)32;
    FIELD_U32(v4 + (83) * 8, 0x0) = 0;
    FIELD_U32(v4 + (83) * 8, 0x4) = 0;
    sead__ListNode__insertFront(a1, v4 + 83);
    ++FIELD_U32(a1 + (1) * 8, 0x0);
  }
  return v4;
}
