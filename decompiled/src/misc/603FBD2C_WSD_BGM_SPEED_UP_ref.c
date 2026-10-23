/* WSD_BGM_SPEED_UP_ref
 * address: 0x603FBD2C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WSD_BGM_SPEED_UP_ref(int a1, int a2)
{
  const char *v3; // r1
  int v5; // [sp+4h] [bp-1Ch] BYREF
  int v6; // [sp+8h] [bp-18h]
  char v7; // [sp+Ch] [bp-14h]

  sub_60550284(FIELD_U32(a1, 268));
  EffectData_create(977, (Vec3 *)&dword_60B3B95C, 0, 0);
  if ( a2 == 1 )
  {
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 3, 2, 0, 0);
    v5 = 15;
    v6 = unk_60C2647C;
    v7 = 0;
    v3 = "WSD_BGM_SPEED_UP_MAX";
  }
  else
  {
    v5 = 15;
    v6 = unk_60C26478;
    v7 = 0;
    v3 = "WSD_BGM_SPEED_UP";
  }
  return sub_60807EF0(SoundSystem_instance, v3, &v5, 1);
}
