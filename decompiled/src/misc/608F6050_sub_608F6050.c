/* sub_608F6050
 * address: 0x608F6050   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F6050(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r1
  int result; // r0
  __int16 v7; // r0
  int v8; // r6
  _DWORD *v9; // r0

  v4 = a2 & 0xFFFFFFFC;
  result = 0;
  if ( v4 >= 0xB1 )
  {
    sead__Heap__ctor(a1, a3, 0, a1, v4, 1, a4);
    *(_DWORD *)a1 = off_60C5C8B8;
    FIELD_U32(a1, 24) = &off_60C5C934;
    FIELD_U8(a1, 124) = 0;
    FIELD_U8(a1, 125) = 0;
    FIELD_U32(a1, 128) = a1 + 128;
    FIELD_U32(a1, 132) = a1 + 128;
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 140) = -1;
    FIELD_U32(a1, 144) = a1 + 144;
    FIELD_U32(a1, 148) = a1 + 144;
    FIELD_U32(a1, 152) = 0;
    FIELD_U32(a1, 156) = -1;
    v7 = FIELD_U16(a1, 120);
    if ( (v7 & 1) != 0 )
    {
      sead__CriticalSection__lock(a1 + 84);
      FIELD_U32(a1, 140) = 0;
      FIELD_U32(a1, 156) = 0;
      sead__CriticalSection__unlock(a1 + 84);
      v7 = FIELD_U16(a1, 120);
    }
    else
    {
      FIELD_U32(a1, 140) = 0;
      FIELD_U32(a1, 156) = 0;
    }
    v8 = 0;
    if ( (v7 & 1) != 0 )
    {
      sead__CriticalSection__lock(a1 + 84);
      v8 = a1 + 84;
    }
    if ( FIELD_U32(a1, 80) == 1 )
    {
      FIELD_U32(a1, 160) = 0;
      v9 = (_DWORD *)(a1 + 160);
    }
    else
    {
      v9 = *(_DWORD **)(a1 + 28);
      *v9 = 0;
    }
    v9[1] = 0;
    v9[2] = 0;
    v9[3] = 0;
    v9[3] = FIELD_U32(a1, 32) - 176;
    *((_WORD *)v9 + 4) = -1;
    sead__ListNode__insertFront((sead_ListNode *)(a1 + 128), (sead_ListNode *)((char *)v9 + FIELD_U32(a1, 140)));
    ++FIELD_U32(a1, 136);
    if ( v8 )
      sead__CriticalSection__unlock(v8);
    return a1;
  }
  return result;
}
