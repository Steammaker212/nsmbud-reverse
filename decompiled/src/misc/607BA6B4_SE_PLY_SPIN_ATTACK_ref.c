/* SE_PLY_SPIN_ATTACK_ref
 * address: 0x607BA6B4   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_PLY_SPIN_ATTACK_ref(int a1)
{
  int v2; // r0
  int v3; // r5
  signed int result; // r0
  Vec3 v5[3]; // [sp+4h] [bp-24h] BYREF

  if ( (FIELD_U8(a1, 1212) & 0x40) == 0 )
  {
    if ( sub_60235E50(a1 + 13776) == 1 )
      sub_60236074(a1 + 13776);
    sub_607736A8();
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) == 1 )
  {
    v2 = sub_6079D894(a1);
    v3 = v2;
    if ( v2 )
    {
      if ( sub_60235E50(v2 + 13776) == 1 )
      {
        (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)v3 + 1404))(v3, v5);
        EffectData_update((EffectData *)(v3 + 13776), v5, 0, 0);
      }
    }
  }
  result = sub_60235E50(a1 + 13776);
  if ( result == 1 )
  {
    (*(void (__fastcall **)(int, Vec3 *))(*(_DWORD *)a1 + 1404))(a1, v5);
    return EffectData_update((EffectData *)(a1 + 13776), v5, 0, 0);
  }
  return result;
}
