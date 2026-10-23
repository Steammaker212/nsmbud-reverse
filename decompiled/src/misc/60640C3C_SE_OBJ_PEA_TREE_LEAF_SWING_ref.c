/* SE_OBJ_PEA_TREE_LEAF_SWING_ref
 * address: 0x60640C3C   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PEA_TREE_LEAF_SWING_ref(int a1)
{
  int result; // r0
  int v3; // r3
  int v4; // r2
  _BOOL4 v5; // r7
  int v6; // r8
  int v7; // r1
  int v8; // r3
  bool v9; // zf
  int v10; // r1
  int v11; // r6
  int v12; // r3
  bool v13; // zf
  bool v14; // cc
  int *v15; // r2
  int v16; // r6
  int v17; // r3
  bool v18; // zf
  float v19; // r1
  int v20; // r5
  int v21; // [sp+4h] [bp-34h] BYREF
  char v22[8]; // [sp+8h] [bp-30h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  result = 0;
  v21 = 0;
  strcpy(v22, "333?");
  v3 = FIELD_U32(a1, 6936);
  v4 = FIELD_U32(a1, 6952);
  if ( v3 != -1 )
  {
    v5 = 0;
    v6 = 0;
    if ( v4 == 1 )
    {
      result = 0;
      v4 = 1;
      v5 = v3 == 0;
      v6 = v5;
    }
    goto LABEL_11;
  }
  if ( v4 == -1 )
  {
    result = 0;
    v4 = -1;
    goto LABEL_8;
  }
  if ( !v4 )
  {
    result = 1;
    v4 = 0;
    v21 = 1;
LABEL_8:
    v5 = 0;
    v6 = 0;
    goto LABEL_11;
  }
  v6 = 0;
  result = 0;
  v5 = 1;
  if ( v4 > 0 )
    v6 = FIELD_U32(a1, 6952);
LABEL_11:
  FIELD_U32(a1, 6936) = v4;
  v7 = FIELD_U32(a1, 6940);
  v8 = FIELD_U32(a1, 6956);
  if ( v7 != -1 )
  {
    v9 = v8 == 1;
    if ( v8 == 1 )
    {
      v8 = 1;
      v9 = v7 == 0;
    }
    if ( !v9 )
      goto LABEL_26;
    v8 = 1;
    if ( (unsigned int)v6 <= 1 )
      v6 = 1;
    goto LABEL_25;
  }
  if ( v8 != -1 )
  {
    if ( !v8 )
    {
      result |= 2u;
      v10 = 1;
      v8 = 0;
      v21 = result;
      goto LABEL_27;
    }
    if ( v6 <= v8 )
      v6 = FIELD_U32(a1, 6956);
LABEL_25:
    v5 = 1;
    goto LABEL_26;
  }
  v8 = -1;
LABEL_26:
  v10 = result;
LABEL_27:
  FIELD_U32(a1, 6940) = v8;
  v11 = FIELD_U32(a1, 6944);
  v12 = FIELD_U32(a1, 6960);
  if ( v11 == -1 )
  {
    if ( v12 == -1 )
    {
      v12 = -1;
      goto LABEL_41;
    }
    if ( !v12 )
    {
      result |= 4u;
      v10 = 1;
      v12 = 0;
      v21 = result;
      goto LABEL_41;
    }
    v14 = v6 <= v12;
    goto LABEL_38;
  }
  v13 = v12 == 1;
  if ( v12 == 1 )
  {
    v12 = 1;
    v13 = v11 == 0;
  }
  if ( v13 )
  {
    v12 = 1;
    v14 = v6 <= 1;
LABEL_38:
    if ( v14 )
      v6 = v12;
    v5 = 1;
  }
LABEL_41:
  FIELD_U32(a1, 6944) = v12;
  v15 = (int *)(a1 + 6948);
  v16 = FIELD_U32(a1, 6948);
  v17 = FIELD_U32(a1, 6964);
  if ( v16 == -1 )
  {
    if ( !v17 )
    {
      v21 = result | 8;
      *v15 = 0;
      goto LABEL_59;
    }
    if ( v17 == -1 )
    {
      result = -1;
      *v15 = -1;
LABEL_49:
      if ( !v10 )
      {
        if ( !v5 )
          return result;
        goto LABEL_60;
      }
      goto LABEL_59;
    }
    *v15 = v17;
    v5 = 1;
    if ( v6 <= v17 )
      v6 = v17;
  }
  else
  {
    v18 = v17 == 1;
    if ( v17 == 1 )
    {
      v17 = 1;
      v18 = v16 == 0;
    }
    if ( !v18 )
    {
      *v15 = v17;
      goto LABEL_49;
    }
    v5 = 1;
    if ( v6 <= 1 )
      v6 = 1;
    *v15 = 1;
  }
  if ( v10 )
  {
LABEL_59:
    FIELD_U32(a1, 6192) = 20;
    FIELD_U32(a1, 6196) = 0;
    FIELD_U32(a1, 6188) = 0;
    FIELD_U32(a1, 6200) = 0;
    lift_han_leaf_ref_640150(a1);
    v19 = FIELD_F32(a1, 112);
    v20 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v19;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v20, "SE_OBJ_PEA_TREE_LEAF_SWING", &out.x, (int)&v21);
    result = 6162;
    FIELD_U8(a1, 6162) = 1;
    if ( !v5 )
      return result;
  }
LABEL_60:
  result = a1 + 6161;
  if ( !FIELD_U8(a1, 6161) )
  {
    FIELD_U32(a1, 6208) = v6;
    *(_BYTE *)result = 1;
  }
  return result;
}
