/* sub_6057F204
 * address: 0x6057F204   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057F204(int a1)
{
  float v2; // s0
  int v3; // r5
  int v4; // r6
  float v5; // s18
  float v6; // r5
  int *v7; // r1
  ActorBuildInfo v9; // [sp+4h] [bp-54h] BYREF

  FIELD_U32(a1, 7388) = 1;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7392) = 0;
  FIELD_U32(a1, 7484) = FIELD_U32(a1, 20) & 1;
  FIELD_U8(a1, 7339) = 1;
  sub_60579AE4(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
  v2 = FIELD_F32(a1, 112) + -8.0;
  FIELD_F32(a1, 112) = v2;
  FIELD_F32(a1, 7368) = v2;
  FIELD_U32(a1, 116) = -985956352;
  sub_6057A244(a1, 0);
  v3 = 2;
  if ( !sub_605D00B8(a1) )
  {
    v4 = sub_603FD6E0(
           dword_60C99DF4,
           FIELD_U8(LevelInfo_instance, 18),
           FIELD_F32(a1, 6980),
           FIELD_F32(a1, 6984))
       & 2;
    if ( v4 )
    {
      if ( FIELD_U32(a1, 7484) == 1 )
        return v3;
      FIELD_U32(a1, 144) = 1065353216;
      FIELD_U32(a1, 148) = 1065353216;
      FIELD_U32(a1, 152) = 1065353216;
      FIELD_U16(a1, 7376) = 0;
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
    }
    else
    {
      FIELD_U32(a1, 144) = 1063507722;
      FIELD_U32(a1, 148) = 1063507722;
      FIELD_U32(a1, 152) = 1063507722;
      FIELD_U16(a1, 7376) = 1;
      obj_coin_ref(a1);
      v5 = FIELD_F32(a1, 112);
      v6 = FIELD_F32(a1, 108);
      memset(&v9.settings2, 0, 36);
      v9.settings1 = 1;
      v9.parentId = FIELD_U32(a1, 8);
      v9.profile = Profile__get(0x11Bu);
      v9.position.x = v6;
      v9.position.y = v5 + -8.0;
      v9.position.z = 400.0;
      v9.field_20 = FIELD_U8(a1, 86);
      v9.eventId1 = 0;
      v9.eventId2 = 0;
      v9.field_28 = 0;
      ActorMgr__create((void *)ActorMgr__instance, &v9, 1);
      sub_60579D4C(a1);
    }
    FIELD_U32(a1, 7300) = 0;
    FIELD_U32(a1, 7304) = 0;
    FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 1090519040;
    FIELD_U32(a1, 500) = 1136656384;
    FIELD_U32(a1, 504) = 1137180672;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    if ( v4 )
      v7 = &dword_60CB10FC;
    else
      v7 = &dword_60CAEF7C;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v7);
    return 1;
  }
  return v3;
}
