/* sub_6090261C
 * address: 0x6090261C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090261C(sead_ListNode *a1, sead_ListNode *a2, _DWORD *a3)
{
  sead_ListNode *next; // r6
  sead_ListNode *v7; // r9
  int v8; // r0
  signed int v9; // r4
  bool v10; // cc
  sead_ListNode *previous; // r0
  sead_ListNode *v12; // r7
  int result; // r0

  next = FIELD_U32(a2 + (4) * 8, 0x4);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v7 = (sead_ListNode *)a3[1];
  if ( next != v7 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v8 = a3[1];
    v9 = 0;
    while ( *(_BYTE *)(v8 + v9) )
    {
      if ( !*(_BYTE *)(v8 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*(_BYTE *)(v8 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v10 = v9 + 2 < 0x80000;
      v9 += 3;
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
    }
    previous = FIELD_U32(a2 + (5) * 8, 0x0);
    if ( v9 >= (int)previous )
      v9 = (signed int)&previous[-1].next + 3;
    qmemcpy(next, v7, v9);
    *((_BYTE *)&FIELD_U32(next, 0x0) + v9) = 0;
  }
  v12 = FIELD_U32(a2 + (3) * 8, 0x4);
  if ( v12 )
  {
    FIELD_U32(a2 + (3) * 8, 0x4) = 0;
    sead__ListNode__erase(&FIELD_U32(a2 + (2) * 8, 0x0));
    --FIELD_U32(v12 + (1) * 8, 0x0);
  }
  FIELD_U32(a2 + (3) * 8, 0x4) = a1 + 2;
  sead__ListNode__insertFront(a1 + 2, a2 + 2);
  result = (int)&a1[3].FIELD_U32(previous, 0x0) + 1;
  FIELD_U32(a1 + (3) * 8, 0x0) = (sead_ListNode *)result;
  return result;
}
