/* sub_608F0BE8
 * address: 0x608F0BE8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F0BE8(int a1, _DWORD *a2)
{
  int v4; // r8
  int v5; // r0
  int v6; // r6
  _DWORD *v7; // r12
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r6
  int v13; // r7
  int v14; // r6
  _DWORD v16[12]; // [sp+0h] [bp-30h] BYREF

  v4 = a1 + 4;
  sead__CriticalSection__lock(a1 + 4);
  while ( 1 )
  {
    v5 = a2[5];
    if ( !v5 )
      break;
    sub_608F0BE8(a1, FIELD_U32(v5, 16));
  }
  sead__CriticalSection__lock(v4);
  if ( a2[24] == 7 )
  {
    sead__CriticalSection__unlock(v4);
  }
  else
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 52))(a2);
    a2[24] = 7;
    v6 = a2[16];
    if ( v6 )
    {
      a2[16] = 0;
      sead__ListNode__erase(a2 + 13);
      --FIELD_U32(v6, 8);
    }
    sead__CriticalSection__unlock(v4);
    sead__TreeNode__detachAll(a2 + 4);
    v7 = a2 + 17;
    v8 = v16;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    v12 = v7[4];
    v13 = v7[5];
    v16[0] = *v7;
    v16[1] = v9;
    v16[2] = v10;
    v16[3] = v11;
    v16[4] = v12;
    v16[5] = v13;
    v14 = dword_60CCEEA4;
    if ( dword_60CCEEA4 >= 1 )
    {
      do
      {
        if ( *v8 )
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 16))(*v8);
        ++v8;
        --v14;
      }
      while ( v14 );
    }
  }
  return sead__CriticalSection__unlock(v4);
}
