/* sub_60083E84
 * address: 0x60083E84   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60083E84(int a1)
{
  _DWORD *v1; // r4
  _WORD *v2; // r5
  int result; // r0
  int v4; // r0
  int (__fastcall *v5)(_DWORD *, int *); // r2
  int *v6; // r1
  char v7; // r12

  v1 = (_DWORD *)a1;
  v2 = (_WORD *)(a1 + 6276);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  result = (unsigned __int16)*v2;
  if ( *v2 )
    return result;
  v4 = v1[1912];
  v1[1912] = v4 - 1;
  v5 = *(int (__fastcall **)(_DWORD *, int *))(*v1 + 192);
  if ( v4 >= 2 )
  {
    v6 = (int *)&unk_60C81B8C;
    return v5(v1, v6);
  }
  v5(v1, &dword_60C84148);
  result = 7244;
  v1 = (_DWORD *)v1[1811];
  if ( v1 )
  {
    if ( ((unsigned int)&dword_60C81104 & ~(1611153172 << v7) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60C81104) )
      {
        dword_60C81100 = (int)&off_60BC66E8;
        _cxa_guard_release(&dword_60C81104);
      }
    }
    result = (*(int (__fastcall **)(_DWORD *, int *))*v1)(v1, &dword_60C81100);
    if ( result == 1 )
    {
      v5 = *(int (__fastcall **)(_DWORD *, int *))(*v1 + 192);
      v6 = &dword_60C85E94;
      return v5(v1, v6);
    }
  }
  return result;
}
