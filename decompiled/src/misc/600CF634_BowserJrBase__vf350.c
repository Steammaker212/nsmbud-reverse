/* BowserJrBase__vf350
 * address: 0x600CF634   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026880
// 
// Overridden by: None
int __fastcall BowserJrBase__vf350(int a1)
{
  StageActor__removeActiveColliders(a1);
  sub_600228F4(dword_60C7F52C, a1 + 108, 5);
  (*(void (__fastcall **)(_DWORD, bool, _DWORD))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
    0);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
}
