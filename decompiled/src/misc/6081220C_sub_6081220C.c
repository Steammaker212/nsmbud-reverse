/* sub_6081220C
 * address: 0x6081220C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081220C(int a1, int a2, int a3)
{
  int (__fastcall ***SoundArchivePlayer)(_DWORD, int *); // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r6

  SoundArchivePlayer = (int (__fastcall ***)(_DWORD, int *))SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  SoundActor_ctor((SoundActor *)a1, 1, SoundArchivePlayer);
  *(_DWORD *)a1 = &off_60C28ADC;
  nn__atk__SoundActor__SetPlayableSoundCount(a1, 0, a3);
  FIELD_U32(a1, 120) = a3 + 2;
  FIELD_U32(a1, 128) = a2;
  v7 = (_DWORD *)operator_new_8DE09C(saturated_mul(4u, a3 + 2));
  *v7 = 4;
  v7[1] = a3 + 2;
  v8 = v7 + 2;
  if ( a3 != -2 )
    memset(v7 + 2, 0, 4 * a3 + 8);
  FIELD_U32(a1, 140) = v8;
  return a1;
}
