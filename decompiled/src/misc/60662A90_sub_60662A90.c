/* sub_60662A90
 * address: 0x60662A90   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60662A90(int a1, int a2)
{
  char *v2; // r4
  int result; // r0
  char v4; // r12
  int v5; // r1
  char *v6; // r5
  int v7; // r6
  int v8; // r1
  char *v9; // r6
  bool v10; // zf

  v2 = *(char **)(a1 + 144);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  v5 = FIELD_U8(result, 533);
  if ( (unsigned __int8)(v5 - 1) > 1u )
    return result;
  v6 = (char *)FIELD_S8(result, 84);
  if ( (unsigned __int8)v6 == 255 )
    return result;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( v5 == 2 )
    {
      v7 = sub_607891A0(PlayerMgr_instance, v6);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617308448 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( !v7 || !(**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) )
        goto LABEL_19;
    }
    else
    {
      v8 = FIELD_S8(result, 84);
      if ( (unsigned __int8)v6 >= 4u )
        v8 = 0;
      v7 = *(_DWORD *)(PlayerMgr_instance + 4 * v8 + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617308588 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( !v7 || (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) != 1 )
        goto LABEL_19;
    }
    result = FIELD_U8(v7, 1219);
    if ( (result & 1) != 0 )
      return result;
  }
LABEL_19:
  if ( ((unsigned int)&dword_60CB6AD8 & ~(1617308720 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6AD8) )
  {
    dword_60CB6AD4 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CB6AD8);
  }
  if ( (unsigned __int8)v6 >= 4u )
    v6 = 0;
  v9 = &v6[(_DWORD)v2];
  v10 = (**(int (__fastcall ***)(char *, int *))v2)(v2, &dword_60CB6AD4) == 0;
  result = 7224;
  if ( v10 )
    v9 = v6;
  v9[7224] = 1;
  return result;
}
