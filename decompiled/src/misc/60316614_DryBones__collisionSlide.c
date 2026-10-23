/* DryBones__collisionSlide
 * address: 0x60316614   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A5C00
// 
// Overridden by: None
int __fastcall DryBones__collisionSlide(int a1, int a2, int a3)
{
  char v3; // r12
  int v7; // r7
  int (__fastcall ***v8)(_DWORD, int *); // r6
  int v9; // r5

  v7 = FIELD_U32(a3, 64);
  v8 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C93528 & ~(1613850172 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C93528) )
  {
    dword_60C93524 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C93528);
  }
  if ( v8 )
  {
    v9 = (**v8)(v8, &dword_60C93524);
    if ( v9 )
      v9 = (int)v8;
  }
  else
  {
    v9 = 0;
  }
  if ( ((unsigned int)&dword_60C7B37C & ~(1613850300 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v7 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1 )
    {
      FIELD_U32(a1, 7648) = 0;
      if ( FIELD_F32(v9, 108) <= FIELD_F32(v7, 108) )
        FIELD_U32(a1, 7648) = 1;
    }
  }
  sub_60316180(a1, a2, a3, 1);
  FIELD_U8(a1, 7664) = 1;
  FIELD_U8(a1, 7674) = 1;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9345C);
  return 1;
}
