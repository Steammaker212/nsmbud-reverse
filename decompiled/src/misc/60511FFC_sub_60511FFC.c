/* sub_60511FFC
 * address: 0x60511FFC   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60511FFC(int a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r4
  int v5; // r7
  int i; // r1
  int result; // r0
  int v8; // r7
  int j; // r2

  if ( ((unsigned int)&dword_60CA83E0[2] & ~(1615929368 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA83E0[2]) )
  {
    dword_60CA8418 = (int)&sead__SafeStringBase__vtable;
    dword_60CA841C = dword_60CA84A4;
    dword_60CA8420 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8424 = dword_60CA84D4;
    sub_60000288();
    _cxa_guard_release(&dword_60CA83E0[2]);
  }
  v3 = sub_6047482C(a1 + 56, 0);
  v4 = v3;
  if ( !v3 )
    return 1;
  v5 = FIELD_U32(v3, 56);
  (*(void (__fastcall **)(int *))(dword_60CA8418 + 12))(&dword_60CA8418);
  (*(void (__fastcall **)(int *))(dword_60CA8418 + 12))(&dword_60CA8418);
  if ( dword_60CA841C == v5 )
    return FIELD_U8(v4, 51) & 1;
  for ( i = 1; *(unsigned __int8 *)(dword_60CA841C + i - 1) == *(unsigned __int8 *)(v5 + i - 1); i += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA841C + i - 1) )
      return FIELD_U8(v4, 51) & 1;
    if ( i >= 524289 || *(unsigned __int8 *)(dword_60CA841C + i) != *(unsigned __int8 *)(v5 + i) )
      break;
    if ( !*(_BYTE *)(dword_60CA841C + i) )
      return FIELD_U8(v4, 51) & 1;
  }
  v8 = FIELD_U32(v4, 56);
  (*(void (__fastcall **)(int *))(dword_60CA8420 + 12))(&dword_60CA8420);
  (*(void (__fastcall **)(int *))(dword_60CA8420 + 12))(&dword_60CA8420);
  if ( dword_60CA8424 == v8 )
    return FIELD_U8(v4, 51) & 1;
  result = 1;
  for ( j = 1; *(unsigned __int8 *)(dword_60CA8424 + j - 1) == *(unsigned __int8 *)(v8 + j - 1); j += 2 )
  {
    if ( !*(_BYTE *)(dword_60CA8424 + j - 1) )
      return FIELD_U8(v4, 51) & 1;
    if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA8424 + j) != *(unsigned __int8 *)(v8 + j) )
      break;
    if ( !*(_BYTE *)(dword_60CA8424 + j) )
      return FIELD_U8(v4, 51) & 1;
  }
  return result;
}
