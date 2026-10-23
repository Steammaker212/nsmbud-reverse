/* sub_608F0A9C
 * address: 0x608F0A9C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F0A9C(int a1, sead_ListNode *a2, int a3)
{
  int v3; // r8
  int v6; // r4
  sead_ListNode *next; // r0
  sead_ListNode *previous; // r4
  int v9; // r4
  sead_ListNode *v10; // r0
  int v11; // r9

  v3 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  v6 = FIELD_U32(a3, 64);
  if ( v6 )
  {
    FIELD_U32(a3, 64) = 0;
    sead__ListNode__erase((_DWORD *)(a3 + 52));
    --FIELD_U32(v6, 8);
  }
  next = FIELD_U32(a2, 0x4);
  if ( next == a2 )
  {
LABEL_6:
    v9 = FIELD_U32(a3, 64);
    if ( v9 )
    {
      FIELD_U32(a3, 64) = 0;
      sead__ListNode__erase((_DWORD *)(a3 + 52));
      --FIELD_U32(v9, 8);
    }
    v10 = a2;
    FIELD_U32(a3, 64) = a2;
  }
  else
  {
    while ( 1 )
    {
      previous = next[1].previous;
      if ( (int)previous[12].next < FIELD_U32(a3, 100) )
        break;
      next = FIELD_U32(next, 0x4);
      if ( next == a2 )
        goto LABEL_6;
    }
    v11 = FIELD_U32(a3, 64);
    a2 = previous[8].previous;
    if ( v11 )
    {
      FIELD_U32(a3, 64) = 0;
      sead__ListNode__erase((_DWORD *)(a3 + 52));
      --FIELD_U32(v11, 8);
    }
    FIELD_U32(a3, 64) = a2;
    v10 = (sead_ListNode *)((char *)previous + 52);
  }
  sead__ListNode__insertFront(v10, (sead_ListNode *)(a3 + 52));
  ++a2[1].previous;
  return sead__CriticalSection__unlock(v3);
}
