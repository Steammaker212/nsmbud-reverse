/* sub_607AA630
 * address: 0x607AA630   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607AA630(int a1)
{
  unsigned int v2; // r5
  int v3; // r0

  v2 = FIELD_S8(a1, 84);
  v3 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320));
  return sub_60236F74(v2, (EffectData *)(a1 + 13064), dword_60B0CD48[v3], (Vec3 *)(a1 + 108), 0, 0);
}
