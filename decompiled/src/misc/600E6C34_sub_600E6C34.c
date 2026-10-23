/* sub_600E6C34
 * address: 0x600E6C34   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E6C34(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int result; // r0
  __int16 *v5; // r4
  int v6; // t1

  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 8148) = 0;
  v2 = (_DWORD *)(a1 + 8148);
  v3 = FIELD_U32(a1, 8168);
  if ( v3 < 0 )
  {
    *v2 = -16777216;
  }
  else if ( v3 )
  {
    *v2 = 0x1000000;
  }
  FIELD_U32(a1, 7092) = 1;
  result = FIELD_U8(a1, 8184);
  if ( result == 1 )
  {
    v6 = FIELD_S16(a1, 6640);
    v5 = (__int16 *)(a1 + 6640);
    sub_608134CC(v5 - 154, "SE_VOC_LUD_TRANSFORM", v6, 0);
    sub_608134CC(v5 - 154, "SE_BOSS_LUDWIG_TRANSFORM", *v5, 0);
    sub_608134CC(v5 - 154, "SE_BOSS_LUDWIG_KAITEN", *v5, 0);
    return EffectData_create(1050, (Vec3 *)(v5 - 3266), 0, 0);
  }
  return result;
}
