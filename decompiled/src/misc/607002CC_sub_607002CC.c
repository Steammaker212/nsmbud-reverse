/* sub_607002CC
 * address: 0x607002CC   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607002CC(float a1, int a2, int a3)
{
  char v3; // r12
  int result; // r0
  int (__fastcall **v7)(int, int *); // r0
  float v8; // s0

  result = FIELD_U8(a3, 533);
  if ( (unsigned int)(result - 1) < 2 )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1617953668 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    result = (**(int (__fastcall ***)(int, int *))a3)(a3, &dword_60C7B378);
    if ( result == 1 )
      return sub_60774C88(a3, 0.0);
  }
  else if ( FIELD_U8(a3, 533) )
  {
    if ( result == 3 )
    {
      if ( ((unsigned int)&dword_60C7B394 & ~(1617953548 << v3) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C7B394) )
        {
          CollisionActor_RTTI = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B394);
        }
      }
      result = (**(int (__fastcall ***)(int, int *))a3)(a3, &CollisionActor_RTTI);
      if ( result == 1 )
      {
        v7 = *(int (__fastcall ***)(int, int *))a3;
        v8 = a1;
        return ((int (__fastcall *)(int, float))v7[36])(a3, v8);
      }
    }
  }
  else
  {
    if ( ((unsigned int)&dword_60C7B394 & ~(1617953796 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
    {
      CollisionActor_RTTI = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B394);
    }
    result = (**(int (__fastcall ***)(int, int *))a3)(a3, &CollisionActor_RTTI);
    if ( result == 1 )
    {
      v7 = *(int (__fastcall ***)(int, int *))a3;
      v8 = 0.0;
      return ((int (__fastcall *)(int, float))v7[36])(a3, v8);
    }
  }
  return result;
}
