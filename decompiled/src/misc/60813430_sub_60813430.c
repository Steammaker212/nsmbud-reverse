/* sub_60813430
 * address: 0x60813430   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60813430(_DWORD *a1, int a2, float *a3)
{
  int v6; // r7
  int SoundArchive; // r0
  int *result; // r0
  _BYTE v9[52]; // [sp+4h] [bp-34h] BYREF

  if ( nn__atk__SoundActor__GetPlayingSoundCount_const((int)a1, 1) < 1 )
    return sub_6080F39C(a1, a2, a3);
  v6 = sub_60808F58(SoundSystem_instance, a2);
  SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
  sub_608A9BC0(SoundArchive, v9, v6);
  if ( v9[8] != 1 )
    return sub_6080F39C(a1, a2, a3);
  result = (int *)(*(int (__fastcall **)(_DWORD *, int, int))(*a1 + 32))(a1, a2, 1);
  if ( !result )
    return sub_6080F39C(a1, a2, a3);
  return result;
}
