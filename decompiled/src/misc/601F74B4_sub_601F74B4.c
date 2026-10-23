/* sub_601F74B4
 * address: 0x601F74B4   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601F74B4(int a1)
{
  int v2; // r0
  float v3; // s0
  float v4; // s2
  signed int result; // r0
  int v6; // [sp+0h] [bp-28h] BYREF
  Vec3 target[3]; // [sp+4h] [bp-24h] BYREF

  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 120, 4.1, 0.1, 0.07, 0.01);
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, FIELD_F32(a1, 908), 0.1, 0.06, 0.03);
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  target[0].x = 9.8304e37;
  sub_608322C0((int *)(a1 + 180), (int *)target, (signed int *)(a1 + 888), (signed int *)(a1 + 892));
  target[0].x = 1.6163e-38;
  v6 = 0x40000;
  moveValueTo((int *)(a1 + 888), (int *)target, &v6);
  LODWORD(target[0].x) = 720896;
  v6 = 0x4000;
  moveValueTo((int *)(a1 + 892), (int *)target, &v6);
  v2 = FIELD_U32(a1, 912);
  FIELD_U32(a1, 912) = v2 + 1;
  if ( v2 > 81 )
  {
    if ( v2 != 82 && v2 != 122 )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( v2 == 2 )
  {
    sub_601E4C88((_DWORD *)dword_60C8B13C, 94, (_DWORD *)(a1 + 80));
    goto LABEL_9;
  }
  if ( v2 == 42 )
  {
LABEL_9:
    sub_601F8174(a1);
    sub_601E4C88((_DWORD *)dword_60C8B13C, 95, (_DWORD *)(a1 + 80));
  }
LABEL_10:
  v3 = FIELD_F32(a1, 84) + FIELD_F32(a1, 856);
  v4 = FIELD_F32(a1, 88) + FIELD_F32(a1, 860);
  target[0].x = FIELD_F32(a1, 80) + FIELD_F32(a1, 852);
  target[0].y = v3;
  target[0].z = v4;
  result = sub_60235E50(a1 + 776);
  if ( result == 1 )
    return EffectData_update((EffectData *)(a1 + 776), target, 0, (Vec3 *)(a1 + 864));
  return result;
}
