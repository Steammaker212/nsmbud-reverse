/* sub_60007FF0
 * address: 0x60007FF0   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_60007FF0(sead_ListNode *a1, Actor *a2)
{
  unsigned int ProfileId; // r0
  sead_ListNode *result; // r0
  Actor *next; // r1
  int v7; // r2
  char *v8; // r5

  sead__ListNode__erase((char *)a1[2870].next + (unsigned int)a2);
  --a1[2870].previous;
  ProfileId = Actor__getProfileId(a2);
  if ( Profile_getPriority(ProfileId) >= 0 )
  {
    sead__ListNode__erase((char *)a1[2872].next + (unsigned int)a2);
    --a1[2872].previous;
  }
  sead__ListNode__insertFront(a1 + 2867, (sead_ListNode *)((char *)a1[2868].next + (unsigned int)a2));
  ++a1[2868].previous;
  result = &FIELD_U32(a2, 0x20);
  next = (Actor *)FIELD_U32(a2, 0x24);
  if ( next != (Actor *)&FIELD_U32(a2, 0x20) )
  {
    v7 = FIELD_U32(a2, 0x2C);
    v8 = (char *)next - v7;
    do
    {
      v8[19] = 1;
      next = (Actor *)FIELD_U32(next, 0x4);
      v8 = (char *)next - v7;
    }
    while ( (char *)next - v7 != (char *)result - FIELD_U32(a2, 0x2C) );
  }
  return result;
}
