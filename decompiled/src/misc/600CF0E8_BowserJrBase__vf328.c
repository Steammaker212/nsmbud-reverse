/* BowserJrBase__vf328
 * address: 0x600CF0E8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600267F8
// 
// Overridden by: None
int __fastcall BowserJrBase__vf328(int a1, int a2)
{
  char v4; // r12

  StageActor__removeActiveColliders(a1);
  if ( FIELD_U8(a2, 84) <= 3u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1611460884 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B378) == 1 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 372))(a1, a2);
    sub_60025AF4(a1, a2, a1 + 108, 5u);
  }
  (*(void (__fastcall **)(_DWORD, bool, _DWORD))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
    0);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
}
