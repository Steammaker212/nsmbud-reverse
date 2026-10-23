/* sub_603E6048
 * address: 0x603E6048   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E6048(int a1)
{
  char v1; // r12
  int result; // r0
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r0
  int (__fastcall ***v6)(_DWORD, int *); // r4
  int v7; // r0

  result = FIELD_U32(a1, 48);
  if ( !result )
  {
LABEL_5:
    v4 = *(int (__fastcall ****)(_DWORD, int *))(dword_60C96478 + 104);
    if ( ((unsigned int)&dword_60C965B4 & ~(1614700700 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
    {
      dword_60C965B0 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C965B4);
    }
    if ( v4 )
    {
      v5 = (**v4)(v4, &dword_60C965B0);
      if ( v5 )
        v5 = (int)v4;
    }
    else
    {
      v5 = 0;
    }
    sub_6039E438(v5);
    sub_60024054(0);
    FIELD_U32(a1, 52) = 1;
    return 1;
  }
  FIELD_U32(a1, 48) = result - 1;
  if ( result != 135 )
  {
    if ( result == 31 )
      return sub_603FBAF8(dword_60C99DD4);
    if ( result != 1 )
      return result;
    goto LABEL_5;
  }
  v6 = *(int (__fastcall ****)(_DWORD, int *))(dword_60C96478 + 104);
  if ( ((unsigned int)&dword_60C965B4 & ~(1614700864 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C965B4) )
  {
    dword_60C965B0 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C965B4);
  }
  if ( v6 )
  {
    v7 = (**v6)(v6, &dword_60C965B0);
    if ( v7 )
      v7 = (int)v6;
  }
  else
  {
    v7 = 0;
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C97560);
}
