/* sub_6056DA0C
 * address: 0x6056DA0C   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056DA0C(int a1)
{
  char v1; // r12
  int v3; // r11
  int v4; // r5
  int *v5; // r7
  int *v6; // r8
  _DWORD *v7; // r9
  int (__fastcall ***v8)(_DWORD, int *); // r6
  int v9; // r10
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int result; // r0
  _DWORD *v14; // [sp+14h] [bp-3Ch]
  _DWORD *v15; // [sp+1Ch] [bp-34h]

  v3 = 1;
  v4 = 0;
  v5 = (int *)(a1 + 7436);
  v15 = (_DWORD *)(a1 + 7456);
  v14 = (_DWORD *)(a1 + 7500);
  v6 = (int *)(a1 + 7480);
  v7 = (_DWORD *)(a1 + 7472);
  do
  {
    if ( (*v7 & v3) == 0 )
    {
      v9 = 0;
LABEL_12:
      v11 = 0;
      goto LABEL_13;
    }
    v8 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v4 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1616304860 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v9 = 1;
    if ( !v8 )
      goto LABEL_12;
    v10 = (**v8)(v8, &dword_60C7B378);
    v11 = 0;
    if ( v10 == 1 )
    {
      v12 = sub_6075F914(v8);
      v9 = 1;
      v11 = (int)v8;
      if ( v12 )
        v9 = 2;
    }
LABEL_13:
    result = *v6;
    if ( (*v6 & v3) != 0 )
    {
      result = sub_607891A0(PlayerMgr_instance, v4);
      v11 = result;
      v9 = 3;
    }
    if ( v11 )
    {
      if ( v9 )
        LOBYTE(v9) = v9 - 1;
      if ( (unsigned __int8)v9 <= 1u && (*v14 & v3) != 0 )
      {
        ((void (__fastcall *)(int, int, _DWORD, int))loc_6056D330)(a1, v11, (unsigned __int8)v9, v4);
        result = 2;
      }
      else if ( (*v15 & v3) != 0 )
      {
        ((void (__fastcall *)(int, int, _DWORD, int))loc_6056D17C)(a1, v11, (unsigned __int8)v9, v4);
        result = 2;
      }
      else
      {
        SE_OBJ_BOUND_BLOCK_JUMP_ref(a1, v11, (unsigned __int8)v9);
        *(v5 - 4) = (unsigned __int8)v9 + 1;
        result = 1;
      }
      *v5 = result;
    }
    ++v4;
    ++v5;
    v3 *= 2;
  }
  while ( v4 != 4 );
  return result;
}
