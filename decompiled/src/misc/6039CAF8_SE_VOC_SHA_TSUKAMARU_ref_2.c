/* SE_VOC_SHA_TSUKAMARU_ref_2
 * address: 0x6039CAF8   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_SHA_TSUKAMARU_ref_2(int a1, int a2)
{
  _DWORD *v4; // r6
  float v5; // r1
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v4 = (_DWORD *)(a1 + 6572);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 68))(a1, FIELD_S8(a2, 84));
  *v4 = FIELD_U32(a2, 8);
  if ( Player_getActorSlotChecked(PlayerMgr_instance, 0) )
    sub_60766A4C();
  if ( Player_getActorSlotChecked(PlayerMgr_instance, 1) )
    sub_60766A4C();
  if ( Player_getActorSlotChecked(PlayerMgr_instance, 2) )
    sub_60766A4C();
  if ( Player_getActorSlotChecked(PlayerMgr_instance, 3) )
    sub_60766A4C();
  FIELD_U8(dword_60C99D88, 31) = 0;
  v5 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&v7, &position);
  sub_60813570(a1 + 12988, "SE_VOC_SHA_TSUKAMARU", &v7, 0);
  return 1;
}
