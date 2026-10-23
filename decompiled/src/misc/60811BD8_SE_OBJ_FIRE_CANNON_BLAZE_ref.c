/* SE_OBJ_FIRE_CANNON_BLAZE_ref
 * address: 0x60811BD8   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_OBJ_FIRE_CANNON_BLAZE_ref(int a1, const char *a2, int a3)
{
  int v6; // r7
  int SoundArchive; // r4
  int v8; // r0
  int ItemId_const; // r0
  unsigned __int8 v10; // r4
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r2
  unsigned int v14; // r7
  int v15; // r6
  _DWORD *result; // r0
  unsigned int v17; // r2

  v6 = SoundSystem_instance;
  SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
  v8 = SoundSystem_getSoundArchive(v6);
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v8, (int)a2);
  v10 = sub_608A9AA4(SoundArchive, ItemId_const) & 0xF;
  if ( !v10 )
    v10 = 4;
  if ( FIELD_U8(dword_60CC6D8C, 17)
    && !FIELD_U8(LevelInfo_instance, 16)
    && FIELD_U8(LevelInfo_instance, 17) == 20
    && !strcmp(a2, "SE_OBJ_FIRE_CANNON_BLAZE") )
  {
    v10 = 8;
  }
  v11 = sub_60808F58(SoundSystem_instance, (int)a2);
  v12 = FIELD_U32(a1, 120);
  if ( v12 )
  {
    v13 = a1 + 140;
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)v13 )
      {
        if ( *(_DWORD *)(*(_DWORD *)v13 + 220) == v11 && ++v15 >= v10 )
          break;
      }
      ++v14;
      v13 += 20;
      if ( v14 >= v12 )
      {
        result = (_DWORD *)(a1 + 140);
        v17 = 0;
        while ( *result )
        {
          ++v17;
          result += 5;
          if ( v17 >= v12 )
            return 0;
        }
        if ( a3 )
          result[1] = a3;
        result[3] = 1065353216;
        return result;
      }
    }
  }
  return 0;
}
