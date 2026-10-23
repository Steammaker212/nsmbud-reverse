/* PLAYER_SE_PLY_JUMP_ref
 * address: 0x60814E70   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PLAYER_SE_PLY_JUMP_ref(int *a1)
{
  int SoundArchive; // r0
  int v3; // r2
  int v4; // r5
  int v5; // r0
  int result; // r0
  _BYTE v7[4]; // [sp+4h] [bp-2Ch] BYREF
  int v8; // [sp+8h] [bp-28h]

  SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
  if ( *a1 )
    v3 = *(_DWORD *)(*a1 + 220);
  else
    v3 = -1;
  sub_608A9BC0(SoundArchive, v7, v3);
  v4 = v8;
  v5 = SoundSystem_getSoundArchive(SoundSystem_instance);
  result = nn__atk__SoundArchive__GetItemId_const(v5, (int)"PLAYER_SE_PLY_JUMP");
  if ( v4 == result )
  {
    result = *a1;
    if ( *a1 )
      return sub_608AF208(result, 7);
  }
  return result;
}
