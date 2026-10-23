/* sub_608F9760
 * address: 0x608F9760   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F9760(int a1)
{
  int v2; // r4
  __int16 v3; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r7
  int v10; // r6
  int result; // r0

  v2 = 0;
  v3 = FIELD_U16(a1, 120);
  if ( (v3 & 1) != 0 )
  {
    v2 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
    v3 = FIELD_U16(a1, 120);
  }
  v4 = a1 + 64;
  FIELD_U16(a1, 120) = v3 | 2;
  v5 = FIELD_U32(a1, 68);
  if ( v5 != a1 + 64 )
  {
    v6 = FIELD_U32(a1, 76);
    v7 = v5 - v6;
    do
    {
      while ( !FIELD_U32(v7, 4) )
      {
        v7 = *(_DWORD *)(v7 + v6 + 4) - v6;
        if ( v7 == v4 - v6 )
          goto LABEL_9;
      }
      (**(void (__fastcall ***)(int))v7)(v7);
      v8 = FIELD_U32(a1, 68);
      v6 = FIELD_U32(a1, 76);
      v7 = v8 - v6;
    }
    while ( v8 != v4 );
  }
LABEL_9:
  FIELD_U16(a1, 120) &= ~2u;
  sub_608FAAF0(a1);
  v9 = FIELD_U32(a1, 36);
  if ( !v9 )
  {
    result = sub_608FAC7C(a1);
    if ( !v2 )
      return result;
    return sead__CriticalSection__unlock(v2);
  }
  sead__CriticalSection__lock((int)&unk_60CCEEDC);
  v10 = 0;
  if ( (FIELD_U8(v9, 120) & 1) != 0 )
  {
    v10 = v9 + 84;
    sead__CriticalSection__lock(v9 + 84);
  }
  sead__ListNode__erase((_DWORD *)(FIELD_U32(v9, 52) + a1));
  --FIELD_U32(v9, 48);
  if ( v10 )
    sead__CriticalSection__unlock(v10);
  result = sead__CriticalSection__unlock((int)&unk_60CCEEDC);
  if ( v2 )
    return sead__CriticalSection__unlock(v2);
  return result;
}
