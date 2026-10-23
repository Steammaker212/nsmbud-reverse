/* sub_606B6400
 * address: 0x606B6400   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B6400(int a1)
{
  char v1; // r12
  int v2; // r9
  int v3; // r11
  unsigned int v4; // r6
  int result; // r0
  _DWORD *v6; // r7
  __guard *v7; // r10
  int v8; // r6
  int v9; // r4
  int v10; // r5
  int v11; // r1
  int v12; // r0
  int v13; // [sp+0h] [bp-40h]

  v2 = 0;
  v3 = a1 + 6572;
  v4 = (unsigned int)&dword_60C7B37C;
  do
  {
    result = *(_DWORD *)(v3 + 4 * v2);
    if ( !result )
      goto LABEL_15;
    v6 = *(_DWORD **)(PlayerMgr_instance + 4 * v2 + 48);
    if ( (v4 & ~(1617650836 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v6 || (*(int (__fastcall **)(_DWORD *, int *))*v6)(v6, &dword_60C7B378) != 1 )
    {
LABEL_14:
      *(_DWORD *)(v3 + 4 * v2) = 0;
      result = EnemyCounterMaybe_instance + 4 * v2;
      FIELD_U32(result, 208) = 0;
      goto LABEL_15;
    }
    v7 = (__guard *)v4;
    v8 = v6[303];
    v9 = v6[304];
    v10 = v6[301];
    result = *(unsigned __int8 *)((*(int (__fastcall **)(_DWORD *))(*v6 + 80))(v6) + 2224);
    v11 = v8 & 0x200000 | v10 & 0x4000 | v9 & 0x8000000;
    if ( (result & 1) != 0 )
    {
      v13 = v8 & 0x200000 | v10 & 0x4000 | v9 & 0x8000000;
      v4 = (unsigned int)v7;
      if ( (*(_BYTE *)((*(int (__fastcall **)(_DWORD *))(*v6 + 80))(v6) + 2224) & 4) == 0 )
        goto LABEL_14;
      v12 = (*(int (__fastcall **)(_DWORD *))(*v6 + 80))(v6);
      if ( v13 )
        goto LABEL_14;
      result = FIELD_U32(v12, 2224) & 0x10;
      if ( !result )
        goto LABEL_14;
    }
    else
    {
      v4 = (unsigned int)v7;
      if ( v11 )
        goto LABEL_14;
    }
LABEL_15:
    ++v2;
  }
  while ( v2 != 4 );
  return result;
}
