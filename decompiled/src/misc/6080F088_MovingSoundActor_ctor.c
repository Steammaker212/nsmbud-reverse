/* MovingSoundActor_ctor
 * address: 0x6080F088   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MovingSoundActor *__fastcall MovingSoundActor_ctor(MovingSoundActor *a1, int a2, int a3)
{
  int (__fastcall ***SoundArchivePlayer)(_DWORD, int *); // r0

  SoundArchivePlayer = (int (__fastcall ***)(_DWORD, int *))SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  SoundActor_ctor(&FIELD_U32(a1, 0x0), a2, SoundArchivePlayer);
  *(_DWORD *)FIELD_U32(a1, 0x0)._.nn_atk_SoundActor_data = off_60C28A60;
  FIELD_F32(a1, 0x8C) = 1.0;
  FIELD_U32(a1, 0x90) = 0;
  FIELD_F32(a1, 0x94) = 1.0;
  FIELD_U32(a1, 0x98) = 0;
  sead_IDisposer_ctor(&FIELD_U32(a1, 0x9C)[0]._);
  FIELD_U32(a1, 0x9C)[0]._.vtable = (int)MovingSoundActorHandle_vtable;
  FIELD_U32(a1, 0x9C)[0].handle = 0;
  FIELD_U32(a1, 0x9C)[0].unk = 1.0;
  sead_IDisposer_ctor(&FIELD_U32(a1, 0x9C)[1]._);
  FIELD_U32(a1, 0x9C)[1]._.vtable = (int)MovingSoundActorHandle_vtable;
  FIELD_U32(a1, 0x9C)[1].handle = 0;
  FIELD_U32(a1, 0x9C)[1].unk = 1.0;
  sead_IDisposer_ctor(&FIELD_U32(a1, 0x9C)[2]._);
  FIELD_U32(a1, 0x9C)[2]._.vtable = (int)MovingSoundActorHandle_vtable;
  FIELD_U32(a1, 0x9C)[2].handle = 0;
  FIELD_U32(a1, 0x9C)[2].unk = 1.0;
  sead_IDisposer_ctor(&FIELD_U32(a1, 0x9C)[3]._);
  FIELD_U32(a1, 0x9C)[3]._.vtable = (int)MovingSoundActorHandle_vtable;
  FIELD_U32(a1, 0x9C)[3].handle = 0;
  FIELD_U32(a1, 0x9C)[3].unk = 1.0;
  sead_IDisposer_ctor(&FIELD_U32(a1, 0x9C)[4]._);
  FIELD_U32(a1, 0x9C)[4]._.vtable = (int)MovingSoundActorHandle_vtable;
  FIELD_U32(a1, 0x9C)[4].handle = 0;
  FIELD_U32(a1, 0x9C)[4].unk = 1.0;
  sead_IDisposer_ctor(&FIELD_U32(a1, 0x9C)[5]._);
  FIELD_U32(a1, 0x9C)[5]._.vtable = (int)MovingSoundActorHandle_vtable;
  FIELD_U32(a1, 0x9C)[5].handle = 0;
  FIELD_U32(a1, 0x9C)[5].unk = 1.0;
  nn__atk__SoundActor__SetPlayableSoundCount((int)a1, 0, 4);
  *(_DWORD *)&FIELD_U32(a1, 0x0)._.nn_atk_SoundActor_data[0x78] = 6;
  FIELD_U32(a1, 0x0).field_80 = a3;
  return a1;
}
