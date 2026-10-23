/* SE_VOC_JR_BOMB_THROW_ref
 * address: 0x600840F4   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_JR_BOMB_THROW_ref(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int result; // r0
  char v11; // r12
  int v12; // r4

  v2 = a1 + 1918;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1068))(a1);
  if ( *v2 )
    sub_6008B9E4(a1);
  v4 = a1 + 1775;
  v3 = (_DWORD *)a1[1775];
  v5 = (_DWORD *)v3[3];
  v6 = v3[2];
  v7 = v3[17];
  if ( v6 > v7 )
    v5 += v7;
  if ( sub_60418548(*v5 + 4) )
  {
    sub_6008BC88(a1);
    sub_60813430(a1 + 1583, "SE_VOC_JR_BOMB_THROW", 0);
  }
  v8 = *(_DWORD *)(*v4 + 12);
  v9 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v9 )
    v8 += 4 * v9;
  result = *(unsigned __int8 *)(*(_DWORD *)v8 + 28);
  if ( (result & 0x20) != 0 )
  {
    result = (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C84148);
    v12 = a1[1811];
    if ( v12 )
    {
      if ( ((unsigned int)&dword_60C81104 & ~(1611153888 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
      {
        dword_60C81100 = (int)&off_60BC66E8;
        _cxa_guard_release(&dword_60C81104);
      }
      result = (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C81100);
      if ( result == 1 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v12 + 192))(v12, &dword_60C85E94);
    }
  }
  return result;
}
