/* SoundSystem_createInstance_helper
 * address: 0x60805A24   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SoundSystem_createInstance_helper(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  int Instance_helper_helper_805A04; // r0
  int v5; // r5
  int Instance_helper_helper_805A0C; // r0
  int v7; // r5
  int Instance_helper_helper_805A14; // r0
  int v9; // r5
  int Instance_helper_helper_805A1C; // r0
  int v11; // r0

  *a1 = off_60C27F88;
  a1[5] = 0;
  a1[6] = 0;
  v2 = (_DWORD *)operator_new(0x14u);
  a1[5] = SoundSystem_createInstance_helper_helper_8058AC(v2, 0);
  v3 = operator_new(0x24u);
  SoundSystem_createInstance_helper_helper_9107C4();
  a1[6] = v3;
  Instance_helper_helper_805A04 = SoundSystem_createInstance_helper_helper_805A04(a1[5]);
  SoundSystem_createInstance_helper_helper_910804(v3, Instance_helper_helper_805A04);
  v5 = a1[6];
  Instance_helper_helper_805A0C = SoundSystem_createInstance_helper_helper_805A0C(a1[5]);
  SoundSystem_createInstance_helper_helper_91080C(v5, Instance_helper_helper_805A0C);
  v7 = a1[6];
  Instance_helper_helper_805A14 = SoundSystem_createInstance_helper_helper_805A14(a1[5]);
  SoundSystem_createInstance_helper_helper_910814(v7, Instance_helper_helper_805A14);
  v9 = a1[6];
  Instance_helper_helper_805A1C = SoundSystem_createInstance_helper_helper_805A1C(a1[5]);
  SoundSystem_createInstance_helper_helper_91081C(v9, Instance_helper_helper_805A1C);
  v11 = SoundSystem_createInstance_helper_helper_805A0C(a1[5]);
  (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 16))(v11);
  return a1;
}
