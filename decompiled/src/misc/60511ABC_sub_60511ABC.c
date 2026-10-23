/* sub_60511ABC
 * address: 0x60511ABC   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60511ABC(int a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r4
  int v5; // r7
  int i; // r1
  int result; // r0
  int v8; // r7
  int j; // r1
  int v10; // r7
  int k; // r2

  if ( ((unsigned int)dword_60CA83E0 & ~(1615928020 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA83E0) )
  {
    dword_60CA8438 = (int)&sead__SafeStringBase__vtable;
    dword_60CA843C = dword_60CA84CC;
    dword_60CA8440 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8444 = dword_60CA84DC;
    dword_60CA8448 = (int)&sead__SafeStringBase__vtable;
    dword_60CA844C = dword_60CA84E4;
    sub_60000288();
    _cxa_guard_release(dword_60CA83E0);
  }
  v3 = sub_6047482C(a1 + 56, 0);
  v4 = v3;
  if ( !v3 )
    return 1;
  v5 = FIELD_U32(v3, 56);
  (*(void (__fastcall **)(int *))(dword_60CA8438 + 12))(&dword_60CA8438);
  (*(void (__fastcall **)(int *))(dword_60CA8438 + 12))(&dword_60CA8438);
  if ( dword_60CA843C == v5 )
    return FIELD_U8(v4, 51) & 1;
  for ( i = 1; *(unsigned __int8 *)(dword_60CA843C + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA843C + i - 1) )
      return FIELD_U8(v4, 51) & 1;
    if ( i >= 524289 || *(unsigned __int8 *)(dword_60CA843C + i) != *(unsigned __int8 *)(v5 + i) )
      break;
    if ( !*(_BYTE *)(dword_60CA843C + i) )
      return FIELD_U8(v4, 51) & 1;
  }
  v8 = FIELD_U32(v4, 56);
  (*(void (__fastcall **)(int *))(dword_60CA8440 + 12))(&dword_60CA8440);
  (*(void (__fastcall **)(int *))(dword_60CA8440 + 12))(&dword_60CA8440);
  if ( dword_60CA8444 == v8 )
    return FIELD_U8(v4, 51) & 1;
  for ( j = 1; *(unsigned __int8 *)(dword_60CA8444 + j - 1) == *(unsigned __int8 *)(v8 + j - 1); j += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA8444 + j - 1) )
      return FIELD_U8(v4, 51) & 1;
    if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA8444 + j) != *(unsigned __int8 *)(v8 + j) )
      break;
    if ( !*(_BYTE *)(dword_60CA8444 + j) )
      return FIELD_U8(v4, 51) & 1;
  }
  v10 = FIELD_U32(v4, 56);
  (*(void (__fastcall **)(int *))(dword_60CA8448 + 12))(&dword_60CA8448);
  (*(void (__fastcall **)(int *))(dword_60CA8448 + 12))(&dword_60CA8448);
  if ( dword_60CA844C == v10 )
    return FIELD_U8(v4, 51) & 1;
  result = 1;
  for ( k = 1; *(unsigned __int8 *)(dword_60CA844C + k - 1) == *(unsigned __int8 *)(v10 + k - 1); k += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA844C + k - 1) )
      return FIELD_U8(v4, 51) & 1;
    if ( k >= 524289 || *(unsigned __int8 *)(dword_60CA844C + k) != *(unsigned __int8 *)(v10 + k) )
      break;
    if ( !*(_BYTE *)(dword_60CA844C + k) )
      return FIELD_U8(v4, 51) & 1;
  }
  return result;
}
