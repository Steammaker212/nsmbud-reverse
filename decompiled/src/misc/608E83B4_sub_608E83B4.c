/* sub_608E83B4
 * address: 0x608E83B4   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_ListNode *__fastcall sub_608E83B4(sead_ListNode *a1, sead_ListNode *a2, _DWORD *a3)
{
  char *v6; // r4
  int v7; // r1
  int i; // r2
  sead_ListNode *next; // r9
  sead_ListNode *v10; // r4
  int v11; // r0
  signed int v12; // r6
  bool v13; // cc
  sead_ListNode *previous; // r0
  sead_ListNode *v15; // r7
  sead_ListNode *result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v6 = (char *)a3[1];
  off_60C5CB30[3]();
  if ( v6 != off_60C5CB34 )
  {
    v7 = a3[1];
    for ( i = 1; *(unsigned __int8 *)(v7 + i - 1) == (unsigned __int8)off_60C5CB34[i - 1]; i += 2 )
    {
      if ( !*(_BYTE *)(v7 + i - 1) )
        goto LABEL_22;
      if ( i >= 524289 || *(unsigned __int8 *)(v7 + i) != (unsigned __int8)off_60C5CB34[i] )
        break;
      if ( !*(_BYTE *)(v7 + i) )
        goto LABEL_22;
    }
    next = FIELD_U32(a2 + (4) * 8, 0x4);
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v10 = (sead_ListNode *)a3[1];
    if ( next != v10 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
      v11 = a3[1];
      v12 = 0;
      while ( *(_BYTE *)(v11 + v12) )
      {
        if ( !*(_BYTE *)(v11 + v12 + 1) )
        {
          ++v12;
          break;
        }
        if ( !*(_BYTE *)(v11 + v12 + 2) )
        {
          v12 += 2;
          break;
        }
        v13 = v12 + 2 <= 0x7FFFF;
        v12 += 3;
        if ( !v13 )
        {
          v12 = 0;
          break;
        }
      }
      previous = FIELD_U32(a2 + (5) * 8, 0x0);
      if ( v12 >= (int)previous )
        v12 = (signed int)&previous[-1].next + 3;
      qmemcpy(next, v10, v12);
      *((_BYTE *)&FIELD_U32(next, 0x0) + v12) = 0;
    }
  }
LABEL_22:
  if ( a2 )
    a2 += 2;
  v15 = FIELD_U32(a2 + (1) * 8, 0x4);
  if ( v15 )
  {
    FIELD_U32(a2 + (1) * 8, 0x4) = 0;
    sead__ListNode__erase(a2);
    --FIELD_U32(v15 + (1) * 8, 0x0);
  }
  FIELD_U32(a2 + (1) * 8, 0x4) = a1 + 2;
  sead__ListNode__insertFront(a1 + 2, a2);
  result = (sead_ListNode *)((char *)&a1[3].FIELD_U32(previous, 0x0) + 1);
  FIELD_U32(a1 + (3) * 8, 0x0) = result;
  return result;
}
