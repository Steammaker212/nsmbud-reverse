/* PreGameFree_BestTime_01_ref
 * address: 0x60519B68   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PreGameFree_BestTime_01_ref(int a1)
{
  int v2; // r0
  int v3; // r1
  float v4; // s2
  int v5; // r2
  int v6; // r3
  char v7; // r12
  int result; // r0
  _BYTE *v9; // r4
  char v10; // r12
  _DWORD v11[4]; // [sp+8h] [bp-10h] BYREF

  v2 = *(_DWORD *)(FIELD_U32(dword_60CC6E04, 40) + 4 * FIELD_U32(dword_60C9A1E0, 532) + 19584);
  v3 = FIELD_U32(a1, 20);
  if ( v2 )
  {
    v4 = (float)v2 / 100.0;
    v5 = (int)(float)(v4 * 100.0);
    if ( (float)v5 != (float)(v4 * 100.0) )
      --v5;
    if ( (float)(v4 * 100.0) >= 0.0 )
      v5 = (int)(float)(v4 * 100.0);
    v6 = (int)v4;
    if ( (float)(int)v4 != v4 )
      v6 = (int)v4 - 1;
    if ( v4 >= 0.0 )
      v6 = (int)v4;
    sub_6047DEC8((_DWORD *)(a1 + 36), v3, 2, v6, v5 % 100);
  }
  else
  {
    v11[0] = &sead__SafeStringBase__vtable;
    v11[1] = "PreGameFree_BestTime_01";
    sub_6047E0EC(v11, v3, 0);
  }
  result = FIELD_U32(a1, 20);
  v9 = *(_BYTE **)(result + 12);
  if ( v9 )
  {
    if ( ((unsigned int)dword_60CA13C4 & ~(1615961224 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60CA13C4) )
    {
      if ( ((unsigned int)&dword_60C9D9D4 & ~(1615961264 << v10) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C9D9D4) )
        {
          dword_60C9D9D0 = 0;
          _cxa_guard_release(&dword_60C9D9D4);
        }
      }
      dword_60CA13C0 = (int)&dword_60C9D9D0;
      _cxa_guard_release(dword_60CA13C4);
    }
    result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v9 + 8))(v9);
    if ( result )
    {
      while ( (int *)result != &dword_60CA13C0 )
      {
        result = *(_DWORD *)result;
        if ( !result )
          return result;
      }
      v9[177] = 1;
      return 1;
    }
  }
  return result;
}
