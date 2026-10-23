/* sub_60592D64
 * address: 0x60592D64   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60592D64(_DWORD *a1)
{
  char v1; // r12
  int v3; // r0
  _BOOL4 v4; // r5
  int v5; // r0
  _DWORD *result; // r0
  int v7; // r1
  int v8; // r1

  v3 = a1[41];
  if ( v3 )
  {
    v4 = v3 > 0;
    if ( ((unsigned int)&dword_60CAF904[1] & ~(1616457108 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAF904[1]) )
    {
      dword_60CAF914 = 25165824;
      dword_60CAF918 = -25165824;
      _cxa_guard_release(&dword_60CAF904[1]);
    }
    v5 = a1[41] + *((_DWORD *)&unk_60CAF900 + v4 + 5);
    a1[41] = v5;
    if ( v5 < 0 )
    {
      if ( v5 == 0x80000000 )
        goto LABEL_10;
      v5 = -v5;
    }
    if ( (unsigned int)v5 <= 0x2000000 )
      a1[41] = 0;
  }
LABEL_10:
  sub_6059614C(a1);
  result = a1 + 2051;
  v7 = a1[2051];
  if ( !v7 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAF868);
  v8 = v7 - 1;
  *result = v8;
  if ( !v8 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAF868);
  return result;
}
