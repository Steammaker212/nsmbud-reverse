/* sub_60512200
 * address: 0x60512200   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60512200(int a1)
{
  char v1; // r12
  int v3; // r9
  int v4; // r0
  int v5; // r5
  int v6; // r4
  int i; // r1
  int v8; // r4
  int j; // r1

  if ( ((unsigned int)&dword_60CA83E0[3] & ~(1615929884 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA83E0[3]) )
  {
    dword_60CA8428 = (int)&sead__SafeStringBase__vtable;
    dword_60CA842C = dword_60CA84A4;
    dword_60CA8430 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8434 = dword_60CA84D4;
    sub_60000288();
    _cxa_guard_release(&dword_60CA83E0[3]);
  }
  v3 = 0;
  v4 = sub_6047482C(a1 + 56, 0);
  v5 = v4;
  if ( v4 )
  {
    v6 = FIELD_U32(v4, 56);
    (*(void (__fastcall **)(int *))(dword_60CA8428 + 12))(&dword_60CA8428);
    (*(void (__fastcall **)(int *))(dword_60CA8428 + 12))(&dword_60CA8428);
    if ( dword_60CA842C == v6 )
      return FIELD_F32(v5, 44) != 0.0;
    for ( i = 1; *(unsigned __int8 *)(dword_60CA842C + i - 1) == *(unsigned __int8 *)(v6 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(dword_60CA842C + i - 1) )
        return FIELD_F32(v5, 44) != 0.0;
      if ( i >= 524289 || *(unsigned __int8 *)(dword_60CA842C + i) != *(unsigned __int8 *)(v6 + i) )
        break;
      if ( !*(_BYTE *)(dword_60CA842C + i) )
        return FIELD_F32(v5, 44) != 0.0;
    }
    v8 = FIELD_U32(v5, 56);
    (*(void (__fastcall **)(int *))(dword_60CA8430 + 12))(&dword_60CA8430);
    (*(void (__fastcall **)(int *))(dword_60CA8430 + 12))(&dword_60CA8430);
    if ( dword_60CA8434 == v8 )
    {
      return FIELD_F32(v5, 44) != 0.0;
    }
    else
    {
      for ( j = 1; *(unsigned __int8 *)(dword_60CA8434 + j - 1) == *(unsigned __int8 *)(v8 + j - 1); j += 2 )
      {
        if ( !*(_BYTE *)(dword_60CA8434 + j - 1) )
          return FIELD_F32(v5, 44) != 0.0;
        if ( j >= 524289 || *(unsigned __int8 *)(dword_60CA8434 + j) != *(unsigned __int8 *)(v8 + j) )
          break;
        if ( !*(_BYTE *)(dword_60CA8434 + j) )
          return FIELD_F32(v5, 44) != 0.0;
      }
    }
  }
  return v3;
}
