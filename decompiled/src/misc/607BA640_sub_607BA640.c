/* sub_607BA640
 * address: 0x607BA640   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607BA640(char *a1)
{
  unsigned int v2; // r6
  int v3; // r0
  Vec3 v5[2]; // [sp+Ch] [bp-1Ch] BYREF

  (*(void (__fastcall **)(char *, Vec3 *))(*(_DWORD *)a1 + 1404))(a1, v5);
  v2 = a1[84];
  v3 = (*(int (__fastcall **)(char *, _DWORD))(*(_DWORD *)a1 + 156))(a1, *((_DWORD *)a1 + 330));
  return sub_60236F74(v2, (EffectData *)(a1 + 13776), dword_60B0CEAC[v3], v5, 0, 0);
}
