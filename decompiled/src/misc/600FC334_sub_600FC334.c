/* sub_600FC334
 * address: 0x600FC334   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FC334(int a1)
{
  StageActor__removeActiveColliders(a1);
  (*(void (__fastcall **)(_DWORD, bool, int))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
    1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 7244) + 812))(FIELD_U32(a1, 7244));
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85CA0);
}
