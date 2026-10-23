/* sub_603E10FC
 * address: 0x603E10FC   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E10FC(int result, int a2)
{
  float v3; // s2
  char *v4; // r0
  int v5; // t1
  char v6; // r1
  const char *v7; // r1

  if ( !FIELD_U8(result, 8241) )
  {
    FIELD_U8(result, 8241) = 1;
    v3 = FIELD_F32(result, 8200) + -0.1;
    FIELD_F32(result, 8200) = v3;
    FIELD_F32(result, 8204) = FIELD_F32(result, 8204) + -0.1;
    FIELD_F32(result, 8208) = FIELD_F32(result, 8208) + -0.1;
    if ( v3 <= 0.8 )
    {
      FIELD_U32(result, 8200) = 1061997773;
      FIELD_U32(result, 8204) = 1061997773;
      FIELD_U32(result, 8208) = 1061997773;
    }
    FIELD_U32(result, 8232) = 1017370378;
    v5 = FIELD_U8(result, 8243);
    v4 = (char *)(result + 8243);
    v6 = v5 - 2;
    if ( (v5 + 254) << 24 < -67108864 )
      v6 = -5;
    *v4 = v6;
    if ( v6 < -4 )
      v7 = "SE_BOSS_WOOGAN_THAW_NO_DAMAGE";
    else
      v7 = "SE_BOSS_WOOGAN_THAW";
    return (*(int (__fastcall **)(int, const char *, int, _DWORD))(*(_DWORD *)Global_BasicSoundActor1 + 36))(
             Global_BasicSoundActor1,
             v7,
             a2,
             0);
  }
  return result;
}
