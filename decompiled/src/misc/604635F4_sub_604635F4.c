/* sub_604635F4
 * address: 0x604635F4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604635F4(int a1)
{
  char v1; // r12
  unsigned int v3; // r0
  int v4; // r5
  char v5; // r12
  int result; // r0
  Vec3 v7; // [sp+4h] [bp-1Ch] BYREF

  v3 = FIELD_U32(a1, 6184);
  if ( v3 >= 4 )
    v3 = 0;
  v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1615214132 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( !v4
    || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) != 1
    || sub_6075EE0C(v4) != 1
    || Actor__getProfileId((Actor *)a1) != 601 )
  {
    goto LABEL_15;
  }
  if ( ((unsigned int)&dword_60C7B374 & ~(1615214292 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B370) != 1
    || (result = FIELD_U32(v4, 1320), result == 9) )
  {
LABEL_15:
    v7.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    v7.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    v7.z = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    return EffectData_create(92, &v7, 0, a1 + 144);
  }
  return result;
}
