/* sub_60638F44
 * address: 0x60638F44   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60638F44(int a1, int a2, _DWORD *a3, float a4)
{
  int v5; // r4
  int result; // r0

  v5 = **(_DWORD **)(*(_DWORD *)a1 + 20);
  TexAnim_play(v5, a2, a3);
  FIELD_F32(v5, 20) = a4;
  result = FIELD_U32(v5, 28) | 2;
  FIELD_U32(v5, 28) = result;
  return result;
}
