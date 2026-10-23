/* sub_60511D50
 * address: 0x60511D50   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60511D50(int a1)
{
  char v1; // r12
  int v3; // r9
  int v4; // r0
  int v5; // r5
  int v6; // r4
  int i; // r1
  int v8; // r4
  int j; // r1
  int v10; // r4
  int k; // r1

  if ( ((unsigned int)&dword_60CA83E0[1] & ~(1615928684 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA83E0[1]) )
  {
    dword_60CA8450 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8454 = dword_60CA84CC;
    dword_60CA8458 = (int)&sead__SafeStringBase__vtable;
    dword_60CA845C = dword_60CA84DC;
    dword_60CA8460 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8464 = dword_60CA84E4;
    sub_60000288();
    _cxa_guard_release(&dword_60CA83E0[1]);
  }
  v3 = 0;
  v4 = sub_6047482C(a1 + 56, 0);
  v5 = v4;
  if ( v4 )
  {
    v6 = FIELD_U32(v4, 56);
    (*(void (__fastcall **)(int *))(dword_60CA8450 + 12))(&dword_60CA8450);
    (*(void (__fastcall **)(int *))(dword_60CA8450 + 12))(&dword_60CA8450);
    if ( dword_60CA8454 == v6 )
      return FIELD_F32(v5, 44) != 0.0;
    for ( i = 1; *(unsigned __int8 *)(dword_60CA8454 + i - 1) == *(unsigned __int8 *)(v6 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(dword_60CA8454 + i - 1) )
        return FIELD_F32(v5, 44) != 0.0;
      if ( i >= 524289 || *(unsigned __int8 *)(dword_60CA8454 + i) != *(unsigned __int8 *)(v6 + i) )
        break;
      if ( !*(_BYTE *)(dword_60CA8454 + i) )
        return FIELD_F32(v5, 44) != 0.0;
    }
    v8 = FIELD_U32(v5, 56);
    (*(void (__fastcall **)(int *))(dword_60CA8458 + 12))(&dword_60CA8458);
    (*(void (__fastcall **)(int *))(dword_60CA8458 + 12))(&dword_60CA8458);
    if ( dword_60CA845C == v8 )
      return FIELD_F32(v5, 44) != 0.0;
    for ( j = 1; *(unsigned __int8 *)(dword_60CA845C + j - 1) == *(unsigned __int8 *)(v8 + j - 1); j += 2 )
    {
      if ( !*(_BYTE *)(dword_60CA845C + j - 1) )
        return FIELD_F32(v5, 44) != 0.0;
      if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA845C + j) != *(unsigned __int8 *)(v8 + j) )
        break;
      if ( !*(_BYTE *)(dword_60CA845C + j) )
        return FIELD_F32(v5, 44) != 0.0;
    }
    v10 = FIELD_U32(v5, 56);
    (*(void (__fastcall **)(int *))(dword_60CA8460 + 12))(&dword_60CA8460);
    (*(void (__fastcall **)(int *))(dword_60CA8460 + 12))(&dword_60CA8460);
    if ( dword_60CA8464 == v10 )
    {
      return FIELD_F32(v5, 44) != 0.0;
    }
    else
    {
      for ( k = 1; *(unsigned __int8 *)(dword_60CA8464 + k - 1) == *(unsigned __int8 *)(v10 + k - 1); k += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA8464 + k - 1) )
          return FIELD_F32(v5, 44) != 0.0;
        if ( k >= 524289 || *(unsigned __int8 *)(dword_60CA8464 + k) != *(unsigned __int8 *)(v10 + k) )
          break;
        if ( !*(_BYTE *)(dword_60CA8464 + k) )
          return FIELD_F32(v5, 44) != 0.0;
      }
    }
  }
  return v3;
}
