/* PLAYER_SE_ref
 * address: 0x6080ED48   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PLAYER_SE_ref(int a1)
{
  int v2; // r1
  int v3; // r1

  sub_6080EFBC();
  sub_608CE33C(FIELD_U32(a1, 40), v2, FIELD_U32(a1, 800), FIELD_U32(a1, 804));
  sub_608CE364(FIELD_U32(a1, 40), v3, FIELD_U32(a1, 808), FIELD_U32(a1, 812));
  ((void (__fastcall *)(_DWORD, float))loc_608CE3F4)(FIELD_U32(a1, 40), FIELD_F32(a1, 816));
  ((void (__fastcall *)(_DWORD, float))loc_608CE450)(FIELD_U32(a1, 40), FIELD_F32(a1, 820));
  ((void (__fastcall *)(_DWORD, float))loc_608CE4AC)(FIELD_U32(a1, 40), FIELD_F32(a1, 824));
  ((void (__fastcall *)(_DWORD, float))loc_608CE508)(FIELD_U32(a1, 40), FIELD_F32(a1, 828));
  ((void (__fastcall *)(_DWORD, float))loc_608CE564)(FIELD_U32(a1, 40), FIELD_F32(a1, 832));
  sub_6080A484(FIELD_F32(a1, 840), SoundSystem_instance, (int)"PLAYER_SE_PLY", 0);
  sub_6080A484(FIELD_F32(a1, 844), SoundSystem_instance, (int)"PLAYER_SE_PLY", 1);
  sub_6080A484(FIELD_F32(a1, 840), SoundSystem_instance, (int)"PLAYER_SE_EMY", 0);
  sub_6080A484(FIELD_F32(a1, 844), SoundSystem_instance, (int)"PLAYER_SE_EMY", 1);
  sub_6080A484(FIELD_F32(a1, 840), SoundSystem_instance, (int)"PLAYER_SE_OBJ", 0);
  sub_6080A484(FIELD_F32(a1, 844), SoundSystem_instance, (int)"PLAYER_SE_OBJ", 1);
  sub_6080A484(FIELD_F32(a1, 840), SoundSystem_instance, (int)"PLAYER_SE_BOSS", 0);
  sub_6080A484(FIELD_F32(a1, 844), SoundSystem_instance, (int)"PLAYER_SE_BOSS", 1);
  sub_6080A484(FIELD_F32(a1, 852), SoundSystem_instance, (int)"PLAYER_SE_PLY_JUMP", 0);
  sub_6080A484(FIELD_F32(a1, 856), SoundSystem_instance, (int)"PLAYER_SE_PLY_JUMP", 1);
  sub_6080A4E4(FIELD_F32(a1, 848), SoundSystem_instance, (int)"PLAYER_SE_BOSS", 3);
  sub_6080A4E4(FIELD_F32(a1, 848), SoundSystem_instance, (int)"PLAYER_SE_BOSS", 4);
  sub_6080A4E4(FIELD_F32(a1, 848), SoundSystem_instance, (int)"PLAYER_SE_BOSS", 5);
  sub_6080A4E4(FIELD_F32(a1, 848), SoundSystem_instance, (int)"PLAYER_SE_BOSS", 6);
  sub_6080A4E4(FIELD_F32(a1, 848), SoundSystem_instance, (int)"PLAYER_SE_DEMO", 3);
  sub_6080A4E4(FIELD_F32(a1, 848), SoundSystem_instance, (int)"PLAYER_SE_DEMO", 4);
  sub_6080A4E4(FIELD_F32(a1, 848), SoundSystem_instance, (int)"PLAYER_SE_DEMO", 5);
  return sub_6080A4E4(FIELD_F32(a1, 848), SoundSystem_instance, (int)"PLAYER_SE_DEMO", 6);
}
