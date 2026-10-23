/* sub_60509668
 * address: 0x60509668   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60509668(int a1, int a2, int a3, int a4)
{
  int result; // r0
  char v6; // r12
  int v7; // r4
  char v8; // r12

  result = sub_6047DEC8((_DWORD *)(a1 + 40), a2, 2, a3, a4);
  v7 = FIELD_U32(a2, 12);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)dword_60CA13C4 & ~(1615894268 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CA13C4) )
      {
        if ( ((unsigned int)&dword_60C9D9D4 & ~(1615894296 << v8) & 1) == 0 )
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
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( result )
        break;
LABEL_13:
      v7 = FIELD_U32(v7, 12);
      if ( !v7 )
        return result;
    }
    while ( (int *)result != &dword_60CA13C0 )
    {
      result = *(_DWORD *)result;
      if ( !result )
        goto LABEL_13;
    }
    FIELD_U8(v7, 177) = 1;
    return 1;
  }
  return result;
}
