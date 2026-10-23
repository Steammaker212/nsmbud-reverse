/* sub_608DC930
 * address: 0x608DC930   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DC930(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  char v5; // r12
  int result; // r0
  bool v7; // zf
  int v8; // r1

  v3 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619904856 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v4 = (int)(v3 + 48);
  v7 = (**v3)(v3, &dword_60CC6AE4) == 0;
  result = 0;
  if ( v7 )
    v4 = 192;
  v7 = *(_BYTE *)v4 == 0;
  if ( *(_BYTE *)v4 )
  {
    a1 = FIELD_U32(a1, 544);
    v7 = a1 == 0;
  }
  if ( !v7 )
  {
    v8 = FIELD_U32(a1, 4);
    if ( v8 == 1 )
    {
      if ( ((unsigned int)&dword_60CCEB14 & ~(1619905108 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEB14) )
      {
        dword_60CCEB10 = (int)&off_60C5BCE4;
        _cxa_guard_release(&dword_60CCEB14);
      }
      result = (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60CCEB10);
    }
    else
    {
      if ( v8 )
        return result;
      if ( ((unsigned int)&dword_60CCEB0C & ~(1619905012 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEB0C) )
      {
        dword_60CCEB08 = (int)&off_60C5BCE4;
        _cxa_guard_release(&dword_60CCEB0C);
      }
      result = (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60CCEB08);
    }
    if ( result )
      result = a1;
    if ( result )
      result += 8;
  }
  return result;
}
