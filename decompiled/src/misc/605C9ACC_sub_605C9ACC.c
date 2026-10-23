/* sub_605C9ACC
 * address: 0x605C9ACC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C9ACC(int a1, int a2)
{
  _DWORD *v2; // r5
  char v3; // r12
  int v4; // r2
  int result; // r0
  bool v6; // zf
  int v7; // r7

  v4 = FIELD_U32(a1, 6144);
  result = 0;
  v6 = v4 == 0;
  if ( v4 )
  {
    v2 = *(_DWORD **)(v4 + 256);
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(*v2 + 2196);
      if ( (unsigned __int8)(FIELD_U8(v7, 533) - 1) <= 1u )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1616681804 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1 )
          break;
      }
      v2 = (_DWORD *)v2[1];
      if ( !v2 )
        return 0;
    }
    result = 0;
    switch ( a2 )
    {
      case 0:
        result = (FIELD_U8(v7, 6900) >> 6) & 1;
        break;
      case 1:
        result = (FIELD_U8(v7, 6900) >> 5) & 1;
        break;
      case 2:
        result = (FIELD_U8(v7, 6900) >> 1) & 1;
        break;
      case 3:
        result = FIELD_U8(v7, 6900) & 1;
        break;
      default:
        return result;
    }
  }
  return result;
}
