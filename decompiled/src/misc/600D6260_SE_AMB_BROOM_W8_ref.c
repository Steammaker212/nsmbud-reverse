/* SE_AMB_BROOM_W8_ref
 * address: 0x600D6260   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_BROOM_W8_ref(int a1)
{
  int v2; // r5
  int result; // r0
  float v4; // r2

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6704) + 8))(FIELD_U32(a1, 6704));
  result = (*(int (**)(void))(dword_60C843D8 + 8))();
  if ( v2 != result )
  {
    LODWORD(v4) = (int)(float)(FIELD_F32(dword_60CC6484, 116) - FIELD_F32(a1, 108));
    return (*(int (__fastcall **)(int, const char *, float, _DWORD, float))(*(_DWORD *)dword_60C7F538 + 48))(
             dword_60C7F538,
             "SE_AMB_BROOM_W8",
             COERCE_FLOAT(LODWORD(v4)),
             0,
             v4);
  }
  return result;
}
