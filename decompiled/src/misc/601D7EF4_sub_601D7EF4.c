/* sub_601D7EF4
 * address: 0x601D7EF4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D7EF4(_DWORD *a1, int *a2, float *a3, int a4)
{
  int **v4; // r12
  int v6; // r5
  int v7; // r0
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r7
  bool v11; // zf
  _DWORD *i; // r8
  int v13; // r0
  int result; // r0
  int *v15; // [sp+2Ch] [bp-34h] BYREF
  float *v16; // [sp+30h] [bp-30h]
  int v17; // [sp+34h] [bp-2Ch]
  int v18; // [sp+38h] [bp-28h]

  v4 = &v15;
  v6 = 0;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v7 = a1[278];
  v18 = 0;
  v8 = v7 - 7;
  if ( v8 <= 5 )
    v18 = dword_60AFD050[v8];
  v9 = a1[258];
  v10 = a1[280];
  v11 = v9 == 5;
  if ( v9 != 5 )
    v11 = v9 == 3;
  if ( v11 && sub_601DADDC(a1 + 258) == 1 )
    v6 = sub_601DAE14(a1 + 261);
  for ( i = a1; ; sub_601BC5FC(i, a1[307], a1 + 258, a1 + 261, v18, v17, v13, v6, v15, v16) )
  {
    i = (_DWORD *)i[68];
    if ( ((unsigned int)&dword_60C8AB28 & ~(1612546072 << (char)v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
    {
      dword_60C8AB24 = (int)&off_60BD4BBC;
      _cxa_guard_release(&dword_60C8AB28);
    }
    if ( !i || (*(int (__fastcall **)(_DWORD *, int *))*i)(i, &dword_60C8AB24) != 1 )
      break;
    v13 = v10 & 0x4000;
    if ( (v10 & 0x4000) != 0 )
      v13 = 1;
  }
  result = a1[307] + 1;
  a1[307] = result;
  return result;
}
