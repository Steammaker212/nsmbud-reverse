/* sub_608134CC
 * address: 0x608134CC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608134CC(_DWORD *a1, int a2, int a3, float *a4)
{
  int v8; // r4
  int SoundArchive; // r0
  int *result; // r0
  _BYTE v11[60]; // [sp+4h] [bp-3Ch] BYREF

  if ( nn__atk__SoundActor__GetPlayingSoundCount_const((int)a1, 1) < 1 )
    return sub_6080FBC8(a1, a2, a3, a4);
  v8 = sub_60808F58(SoundSystem_instance, a2);
  SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
  sub_608A9BC0(SoundArchive, v11, v8);
  if ( v11[8] != 1 )
    return sub_6080FBC8(a1, a2, a3, a4);
  result = (int *)(*(int (__fastcall **)(_DWORD *, int, int))(*a1 + 32))(a1, a2, 1);
  if ( !result )
    return sub_6080FBC8(a1, a2, a3, a4);
  return result;
}
