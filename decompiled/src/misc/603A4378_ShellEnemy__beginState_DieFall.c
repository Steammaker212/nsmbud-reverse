/* ShellEnemy__beginState_DieFall
 * address: 0x603A4378   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF0
// 
// Overridden by: None
int __fastcall ShellEnemy__beginState_DieFall(int a1)
{
  int v2; // r1
  int v3; // r5
  int v4; // r5
  unsigned int v5; // r3

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) == 1 )
  {
    v2 = FIELD_U32(a1, 6352);
    if ( v2 )
    {
      FIELD_U32(a1, 6356) = v2;
      FIELD_U32(a1, 6352) = 0;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
    }
  }
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 == (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))()
    || (v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096)),
        v4 == (*(int (**)(void))(dword_60C976FC + 8))()) )
  {
    if ( FIELD_U8(a1, 6132) == 255 )
    {
      v5 = FIELD_S8(a1, 84);
      if ( v5 <= 3 )
        sub_60022760(0.0, 24.0, dword_60C7F52C, a1, 1u, v5);
    }
  }
  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U8(a1, 6056) = 2;
  return 6056;
}
