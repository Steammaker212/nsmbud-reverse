/* BasicSoundActor_ctor
 * address: 0x60810A64   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

SoundActor *__fastcall BasicSoundActor_ctor(SoundActor *a1, int a2)
{
  int (__fastcall ***SoundArchivePlayer)(_DWORD, int *); // r0

  SoundArchivePlayer = (int (__fastcall ***)(_DWORD, int *))SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  SoundActor_ctor(a1, 1, SoundArchivePlayer);
  *(_DWORD *)FIELD_U32(a1, 0x0).nn_atk_SoundActor_data = BasicSoundActor_vtable;
  *(_DWORD *)a1[1]._.nn_atk_SoundActor_data = 0;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[4] = -1;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[12] = 1065353216;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[16] = 64;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[20] = 0;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[24] = -1;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[32] = 1065353216;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[36] = 64;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[40] = 0;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[44] = -1;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[52] = 1065353216;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[56] = 64;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[60] = 0;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[64] = -1;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[72] = 1065353216;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[76] = 64;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[80] = 0;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[84] = -1;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[92] = 1065353216;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[96] = 64;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[100] = 0;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[104] = -1;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[112] = 1065353216;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[116] = 64;
  *(_DWORD *)&a1[1]._.nn_atk_SoundActor_data[120] = 0;
  a1[1].field_7C = -1;
  a1[1].field_84 = 1065353216;
  a1[1].field_88 = 64;
  *(_DWORD *)a1[2]._.nn_atk_SoundActor_data = 0;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[4] = -1;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[12] = 1065353216;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[16] = 64;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[20] = 0;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[24] = -1;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[32] = 1065353216;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[36] = 64;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[40] = 0;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[44] = -1;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[52] = 1065353216;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[56] = 64;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[60] = 0;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[64] = -1;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[72] = 1065353216;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[76] = 64;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[80] = 0;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[84] = -1;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[92] = 1065353216;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[96] = 64;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[100] = 0;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[104] = -1;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[112] = 1065353216;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[116] = 64;
  *(_DWORD *)&a1[2]._.nn_atk_SoundActor_data[120] = 0;
  a1[2].field_7C = -1;
  a1[2].field_84 = 1065353216;
  a1[2].field_88 = 64;
  nn__atk__SoundActor__SetPlayableSoundCount((int)a1, 0, 12);
  *(_DWORD *)&FIELD_U32(a1, 0x0).nn_atk_SoundActor_data[120] = 14;
  FIELD_U32(a1, 0x80) = a2;
  return a1;
}
