/* sub_60592190
 * address: 0x60592190   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60592190(int a1)
{
  char v1; // r12
  _BYTE *v3; // r5
  int result; // r0
  int v5; // r0
  int v6; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v3 = (_BYTE *)(a1 + 8184);
  if ( FIELD_U8(a1, 8184) > 1u )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF848);
  if ( ((unsigned int)dword_60CAF904 & ~(1616454116 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CAF904) )
  {
    dword_60CAF90C = 0x1000000;
    dword_60CAF910 = 0;
    _cxa_guard_release(dword_60CAF904);
  }
  v5 = *((_DWORD *)&unk_60CAF900 + (unsigned __int8)*v3 + 3);
  target = v5;
  if ( !FIELD_U32(a1, 8188) )
    target = -v5;
  v6 = 0x400000;
  result = moveValueTo((int *)(a1 + 164), &target, &v6);
  if ( result )
  {
    LOBYTE(result) = *v3 + 1;
    *v3 = result;
    result = (unsigned __int8)result;
    if ( (unsigned __int8)result >= 2u )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF848);
  }
  return result;
}
