/* sub_607000C8
 * address: 0x607000C8   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607000C8(float a1, float a2, int a3, int a4)
{
  char v4; // r12
  int result; // r0
  int (__fastcall **v8)(int, int *); // r0
  float v9; // s0

  result = FIELD_U8(a4, 533);
  if ( (unsigned int)(result - 1) < 2 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1617953152 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    result = (**(int (__fastcall ***)(int, int *))a4)(a4, &dword_60C7B378);
    if ( result == 1 )
      return sub_60774C88(a4, 0.0);
  }
  else if ( FIELD_U8(a4, 533) )
  {
    if ( result == 3 )
    {
      if ( ((unsigned int)&dword_60C7B394 & ~(1617953032 << v4) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C7B394) )
        {
          CollisionActor_RTTI = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B394);
        }
      }
      result = (**(int (__fastcall ***)(int, int *))a4)(a4, &CollisionActor_RTTI);
      if ( result == 1 )
      {
        v8 = *(int (__fastcall ***)(int, int *))a4;
        v9 = a2;
        return ((int (__fastcall *)(int, float))v8[36])(a4, v9);
      }
    }
  }
  else
  {
    if ( ((unsigned int)&dword_60C7B394 & ~(1617953280 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
    {
      CollisionActor_RTTI = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B394);
    }
    result = (**(int (__fastcall ***)(int, int *))a4)(a4, &CollisionActor_RTTI);
    if ( result == 1 )
    {
      v8 = *(int (__fastcall ***)(int, int *))a4;
      v9 = 0.0;
      return ((int (__fastcall *)(int, float))v8[36])(a4, v9);
    }
  }
  return result;
}
