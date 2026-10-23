/* sub_609393AC
 * address: 0x609393AC   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609393AC(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  void *v6; // r6
  int v7; // r7
  int v8; // r4
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  int v11; // r5
  int v12; // r7
  unsigned int v13; // r4
  int v14; // r5
  int v15; // r6

  result = FIELD_U32(a1, 24);
  if ( result )
  {
    v5 = *(_DWORD *)(result - 4);
    v6 = (void *)(result - 8);
    if ( v5 )
    {
      v7 = result - 88;
      v8 = 88 * v5;
      do
      {
        sub_60939758(v7 + v8);
        v8 -= 88;
      }
      while ( v8 );
    }
    operator_delete_8DE3FC(v6);
    result = 0;
    FIELD_U32(a1, 20) = 0;
    FIELD_U32(a1, 24) = 0;
  }
  if ( a2 )
  {
    v9 = (_DWORD *)sub_608DE334(0x2C08u, a2, 4);
    if ( v9 )
    {
      v10 = v9 + 2;
      v11 = 0;
      *v9 = 88;
      v9[1] = 128;
      do
      {
        sub_60939660(&v10[v11]);
        v11 += 22;
      }
      while ( v11 != 2816 );
      FIELD_U32(a1, 20) = 128;
      FIELD_U32(a1, 24) = v10;
    }
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = FIELD_U32(a1, 24);
      if ( FIELD_U32(a1, 20) > v13 )
        v14 += v12;
      v15 = FIELD_U32(v14, 16);
      if ( v15 )
      {
        FIELD_U32(v14, 16) = 0;
        sead__ListNode__erase((_DWORD *)(v14 + 4));
        --FIELD_U32(v15, 8);
      }
      FIELD_U32(v14, 16) = a1 + 28;
      sead__ListNode__insertFront((sead_ListNode *)(a1 + 28), (sead_ListNode *)(v14 + 4));
      ++v13;
      v12 += 88;
      result = FIELD_U32(a1, 36) + 1;
      FIELD_U32(a1, 36) = result;
    }
    while ( v13 != 128 );
  }
  return result;
}
