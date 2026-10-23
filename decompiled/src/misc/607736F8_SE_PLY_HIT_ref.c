/* SE_PLY_HIT_ref
 * address: 0x607736F8   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_HIT_ref(int a1)
{
  int result; // r0
  int *v3; // r6
  int v4; // r4
  int v5; // r0
  int v6; // r0
  const char *v7; // r1
  int *v8; // r6
  int v9; // r2
  int *v10; // r3

  v3 = (int *)(a1 + 6908);
  result = FIELD_U16(a1, 6908);
  if ( (result & 0x1040) != 0 )
    return result;
  result = FIELD_U8(a1, 6905);
  if ( (result & 0x10) != 0 )
    return result;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1) == 1 )
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1072))(a1);
  else
    v4 = FIELD_U32(a1, 1320) == 3;
  v5 = *v3;
  if ( (*v3 & 4) != 0 )
  {
    v8 = sub_60002B90(FIELD_S8(a1, 84), unk_60C263DC);
    result = FIELD_U8(a1, 1204);
    if ( (result & 0x40) != 0 )
      return result;
    result = sub_6040E538(LevelInfo_instance);
    if ( result )
      return result;
    v6 = a1 + 840;
    if ( FIELD_U8(a1, 84) == 255 )
    {
      v7 = "SE_PLY_HIT_BLOCK_BOUND";
      goto LABEL_31;
    }
    v7 = "SE_PLY_HIT_BLOCK_BOUND";
    goto LABEL_15;
  }
  if ( (v5 & 0x20) == 0 )
  {
    result = FIELD_U8(a1, 1204);
    if ( (result & 0x40) == 0 )
    {
      result = sub_6040E538(LevelInfo_instance);
      if ( !result )
      {
        v6 = a1 + 840;
        v7 = "SE_PLY_HIT_BLOCK";
LABEL_31:
        v9 = v4;
        v10 = 0;
        return sub_608140D8(v6, v7, v9, v10);
      }
    }
    return result;
  }
  if ( (v5 & 0x80) == 0 )
  {
    if ( (v5 & 0x200) != 0 )
    {
      result = FIELD_U8(a1, 1204);
      if ( (result & 0x40) == 0 )
      {
        result = sub_6040E538(LevelInfo_instance);
        if ( !result )
        {
          v6 = a1 + 840;
          v7 = "SE_PLY_HIT_BROS_FLR_BOUND";
          goto LABEL_31;
        }
      }
      return result;
    }
    v8 = sub_60002B90(FIELD_S8(a1, 84), unk_60C263E0);
    result = FIELD_U8(a1, 1204);
    if ( (result & 0x40) != 0 )
      return result;
    result = sub_6040E538(LevelInfo_instance);
    if ( result )
      return result;
    v6 = a1 + 840;
    if ( FIELD_U8(a1, 84) == 255 )
    {
      v7 = "SE_PLY_HIT_GENERAL_OBJ";
      goto LABEL_31;
    }
    v7 = "SE_PLY_HIT_GENERAL_OBJ";
LABEL_15:
    v9 = v4;
    v10 = v8;
    return sub_608140D8(v6, v7, v9, v10);
  }
  result = FIELD_U8(a1, 1204);
  if ( (result & 0x40) == 0 )
  {
    result = sub_6040E538(LevelInfo_instance);
    if ( !result )
    {
      v6 = a1 + 840;
      v7 = "SE_PLY_HIT_BLOCK";
      goto LABEL_31;
    }
  }
  return result;
}
