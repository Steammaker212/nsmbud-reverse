/* BowserJrBase__vf32C
 * address: 0x600CF208   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600267FC
// 
// Overridden by: None
int __fastcall BowserJrBase__vf32C(int a1, int a2)
{
  StageActor__removeActiveColliders(a1);
  if ( FIELD_U8(a2, 84) <= 3u )
    sub_60025B84(a1, a2, a1 + 108, 6u);
  sub_60813430(a1 + 6332, "SE_VOC_JR_DAMAGE_LAST", 0);
  (*(void (__fastcall **)(_DWORD, bool, _DWORD))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
    0);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
}
