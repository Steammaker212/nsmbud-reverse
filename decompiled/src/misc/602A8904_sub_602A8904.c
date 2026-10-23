/* sub_602A8904
 * address: 0x602A8904   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602A8904(int *a1, _DWORD *a2)
{
  int v4; // r1
  signed int result; // r0
  int v6; // r6
  int v7; // r7
  char v8; // r12
  int v9; // r8
  int v10; // r0
  int v11; // r1
  signed int v12; // r0
  signed int v13; // r1
  int v14; // r7
  float v15; // s16
  _BOOL4 v16; // r7
  float v17; // s0
  unsigned __int8 v18; // [sp+7h] [bp-21h] BYREF

  v4 = (**(int (__fastcall ***)(int, unsigned __int8 *, _DWORD, _DWORD *))a1[1])(a1[1], &v18, *a1, a2);
  result = v18;
  if ( v18 )
    result = 1;
  if ( !v4 )
  {
    v6 = *(_DWORD *)(a2[1] + 64);
    v7 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*a2 + 64) + 80))(*(_DWORD *)(*a2 + 64));
    if ( (FIELD_U8(v7, 2224) & 1) == 0 )
      goto LABEL_11;
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 80))(v6);
    v10 = FIELD_U32(v9, 2224);
    if ( (v10 & 1) == 0 )
      goto LABEL_11;
    v11 = FIELD_U32(v7, 2224);
    if ( ((v11 | v10) & 4) != 0 )
    {
      if ( ((unsigned __int8)v11 & (unsigned __int8)v10 & 4) == 0 )
        goto LABEL_11;
      v14 = sub_6014B69C(v7);
      if ( v14 != sub_6014B69C(v9) )
        goto LABEL_11;
    }
    v12 = sub_6014C4A4(v9);
    v13 = sub_6014C57C(v9, v12);
    result = 0;
    if ( !v13 )
    {
LABEL_11:
      v15 = FIELD_F32(v6, 124);
      v16 = v15 <= 0.0;
      if ( ((unsigned int)&dword_60C7B37C & ~(1613400600 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
        v16 = v15 <= 0.0 || FIELD_U32(v6, 9592) != 0;
      v17 = sub_602A99C0(a2);
      return v17 < 0.0 && (float)(v17 * -2.0) < flt_60AFE470[14 * v16 + *((unsigned __int8 *)a1 + 8)];
    }
  }
  return result;
}
