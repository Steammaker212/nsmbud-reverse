/* SE_OBJ_SNAKE_BLOCK_ref_2
 * address: 0x60812E98   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_SNAKE_BLOCK_ref_2(int a1, const char *a2, float *a3, int a4)
{
  int v7; // r7
  int SoundArchive; // r0
  int ItemId_const; // r5
  int v10; // r0
  int v11; // r1
  bool v12; // zf
  unsigned int v13; // r4
  int v14; // r0
  int v15; // r5
  unsigned int v17; // [sp+4h] [bp-24h] BYREF

  v7 = 0;
  if ( FIELD_U32(a1, 136) != 2 )
  {
    SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
    ItemId_const = nn__atk__SoundArchive__GetItemId_const(SoundArchive, (int)a2);
    v10 = SoundSystem_getSoundArchive(SoundSystem_instance);
    sub_608A9AEC(v10, &v17, ItemId_const, 1);
    if ( FIELD_U8(dword_60CC6D8C, 17) && !strcmp(a2, "SE_OBJ_SNAKE_BLOCK") )
    {
      v11 = FIELD_U8(LevelInfo_instance, 16);
      v12 = v11 == 6;
      if ( v11 == 6 )
        v12 = FIELD_U8(LevelInfo_instance, 17) == 5;
      if ( v12 )
        v17 |= 7u;
    }
    v13 = v17;
    if ( (v17 & 1) != 0 )
    {
      v14 = SE_OBJ_SNAKE_BLOCK_ref_2_helper_8131CC(FIELD_U32(SoundSystem_instance, 160), a2);
      v15 = v14;
      if ( v14 )
      {
        if ( !FIELD_U32(v14, 468) )
          SE_OBJ_SNAKE_BLOCK_ref_2_helper(v14, a2, a4, 0, (v13 >> 1) & 0x3E);
        SE_OBJ_SNAKE_BLOCK_ref_2_helper_8131A8(v15, *a3, a3[1]);
        return 1;
      }
    }
  }
  return v7;
}
