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
  *(_DWORD *)FIELD_U8(a1, 0x0) = BasicSoundActor_vtable;
  *(_DWORD *)FIELD_U8(a1 + (1) * 140, 0x0) = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[4] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[12] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[16] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[20] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[24] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[32] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[36] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[40] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[44] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[52] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[56] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[60] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[64] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[72] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[76] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[80] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[84] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[92] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[96] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[100] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[104] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[112] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[116] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 140, 0x0)[120] = 0;
  FIELD_U32(a1 + (1) * 140, 0x7C) = -1;
  FIELD_U32(a1 + (1) * 140, 0x84) = 1065353216;
  FIELD_U32(a1 + (1) * 140, 0x88) = 64;
  *(_DWORD *)FIELD_U8(a1 + (2) * 140, 0x0) = 0;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[4] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[12] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[16] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[20] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[24] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[32] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[36] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[40] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[44] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[52] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[56] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[60] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[64] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[72] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[76] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[80] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[84] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[92] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[96] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[100] = 0;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[104] = -1;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[112] = 1065353216;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[116] = 64;
  *(_DWORD *)&FIELD_U8(a1 + (2) * 140, 0x0)[120] = 0;
  FIELD_U32(a1 + (2) * 140, 0x7C) = -1;
  FIELD_U32(a1 + (2) * 140, 0x84) = 1065353216;
  FIELD_U32(a1 + (2) * 140, 0x88) = 64;
  nn__atk__SoundActor__SetPlayableSoundCount((int)a1, 0, 12);
  *(_DWORD *)&FIELD_U8(a1, 0x0)[120] = 14;
  FIELD_U32(a1, 0x80) = a2;
  return a1;
}
