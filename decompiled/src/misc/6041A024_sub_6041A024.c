/* sub_6041A024
 * address: 0x6041A024   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041A024(int a1)
{
  int v2; // r4
  int v3; // r6
  int v4; // r7
  int i; // r0
  int v6; // r7
  int v7; // r4
  int v8; // r8
  int v9; // r4
  int v10; // r6
  int v11; // r7
  int j; // r0
  int v14; // [sp+0h] [bp-28h]

  v14 = a1 + 2000;
  sead__CriticalSection__lock(a1 + 2000);
  v2 = FIELD_U32(a1, 1936);
  if ( v2 != a1 + 1932 )
  {
    v3 = FIELD_U32(a1, 1944);
    v4 = v2 - v3;
    for ( i = v3; ; i = FIELD_U32(a1, 1944) )
    {
      v2 = FIELD_U32(v2, 4);
      sead__ListNode__erase(i + v4);
      --FIELD_U32(a1, 1940);
      sead__ListNode__insertFront((sead_ListNode *)(a1 + 1948), (sead_ListNode *)(FIELD_U32(a1, 1960) + v4));
      v4 = v2 - v3;
      ++FIELD_U32(a1, 1956);
      if ( v2 - v3 == a1 + 1932 - v3 )
        break;
    }
  }
  v6 = FIELD_U32(a1, 1952);
  if ( v6 != a1 + 1948 )
  {
    v7 = FIELD_U32(a1, 1960);
    v8 = v6 - v7;
    do
    {
      v6 = FIELD_U32(v6, 4);
      if ( !dword_60CC79F0(v8 + 4664, dword_60CC79F0, 0, 0, v14) )
      {
        sub_6041A1C4(a1, v8 + 4648);
        sead__ListNode__erase(FIELD_U32(a1, 1960) + v8);
        --FIELD_U32(a1, 1956);
      }
      v8 = v6 - v7;
    }
    while ( v6 - v7 != a1 + 1948 - v7 );
  }
  sead__CriticalSection__lock(a1 + 1964);
  v9 = FIELD_U32(a1, 1920);
  if ( v9 != a1 + 1916 )
  {
    v10 = FIELD_U32(a1, 1928);
    v11 = v9 - v10;
    for ( j = v10; ; j = FIELD_U32(a1, 1928) )
    {
      v9 = FIELD_U32(v9, 4);
      sead__ListNode__erase(j + v11);
      --FIELD_U32(a1, 1924);
      sead__ListNode__insertFront((sead_ListNode *)(a1 + 1932), (sead_ListNode *)(FIELD_U32(a1, 1944) + v11));
      v11 = v9 - v10;
      ++FIELD_U32(a1, 1940);
      if ( v9 - v10 == a1 + 1916 - v10 )
        break;
    }
  }
  sead__CriticalSection__unlock(a1 + 1964);
  return sead__CriticalSection__unlock(v14);
}
