/* SE_OBJ_RC_SEESAW_MOVE_ref
 * address: 0x6064E95C   size: 988   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_RC_SEESAW_MOVE_ref(int a1, char a2)
{
  int result; // r0
  _WORD *v5; // r8
  bool v6; // zf
  int v7; // r11
  int v8; // r4
  int v9; // r0
  char *v10; // r10
  _BYTE *v11; // r4
  int v12; // r5
  int v13; // r7
  unsigned int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r1
  int v18; // r7
  _DWORD *v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r1
  _BYTE *v23; // r4
  float v24; // r1
  int v25; // r5
  Vec2 out; // [sp+Ch] [bp-34h] BYREF
  Vec3 position; // [sp+14h] [bp-2Ch] BYREF

  v5 = (_WORD *)(a1 + 7316);
  result = FIELD_U16(a1, 7316);
  v6 = result == 0;
  if ( result )
  {
    *v5 = --result;
    v6 = (unsigned __int16)result == 0;
  }
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    v10 = (char *)(a1 + 6552);
    v9 = FIELD_S8(a1, 6552);
    if ( v9 >= 0 )
    {
      v11 = (_BYTE *)(a1 + 7324);
      if ( !FIELD_U8(a1, 7324) )
      {
        v12 = 0;
        if ( (unsigned __int8)v9 >= 4u )
          v9 = 0;
        v13 = FIELD_U32(a1, 7304);
        result = sub_604551F0(dword_60C9CF0C + 312 * v9 + 16, 59637760, 1.0);
        if ( (unsigned int)(FIELD_U32(a1, 7304) + 100663295) <= 0xBFFFFFE )
        {
          v12 = 1;
          *v11 = 1;
        }
        if ( v13 + 59637760 <= result || v13 - 59637760 >= result )
        {
          *v11 = 1;
        }
        else if ( !v12 )
        {
          return result;
        }
      }
      v14 = (unsigned __int8)*v10;
      v15 = 0;
      if ( v14 < 4 )
        v15 = (char)v14;
      v16 = sub_604551F0(dword_60C9CF0C + 312 * v15 + 16, 59637760, 1.0);
      v17 = -439091200;
      v8 = 4;
      if ( v16 > -439091200 )
        v17 = v16;
      if ( v16 <= 439091199 )
        v8 = v17 / 100663296;
    }
    v18 = 1;
    v19 = (_DWORD *)(a1 + 7272);
    if ( !FIELD_U32(a1, 7272) )
    {
      v20 = FIELD_U32(a1, 7300) / 100663296;
      if ( v8 == v20 )
      {
        v18 = 0;
        if ( v8 != FIELD_U32(a1, 7312) )
        {
          v21 = FIELD_U32(a1, 7276);
          FIELD_U32(a1, 7276) = v21 + 1;
          if ( v21 >= 7 )
          {
            v18 = 0;
            FIELD_U32(a1, 7276) = 8;
            sub_603F0040(dword_60C99D6C, *v10, 0, 0);
            FIELD_U32(a1, 7284) = 0;
          }
        }
        v7 = v8;
      }
      else
      {
        v18 = 1;
        v22 = v8 > v20;
        if ( v8 < v20 )
          v22 = -1;
        v7 = v22 + v20;
        FIELD_U32(a1, 7308) = 100663296 * (v22 + v20);
        *v19 = 1;
      }
    }
    FIELD_U32(a1, 7312) = v7;
    v23 = (_BYTE *)(a1 + 7326);
    if ( FIELD_U8(a1, 7326) )
      *v23 = FIELD_U8(a1, 7326) - 1;
    if ( v18 )
    {
      position.x = 1.293e-37;
      if ( moveValueTo((int *)(a1 + 7300), (int *)(a1 + 7308), (int *)&position) )
      {
        *v5 = 3;
        *v19 = 0;
        v24 = FIELD_F32(a1, 112);
        v25 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v24;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v25, "SE_OBJ_RC_SEESAW_MOVE", &out.x, 0);
        if ( *v10 >= 0 && !*v23 )
        {
          *v23 = 4;
          if ( (a2 & 1) != 0 )
            sub_604005D0(AreaRumbleMgr_instance, 0, 10, 2, 0, 0);
          if ( (a2 & 2) != 0 )
            sub_604005D0(AreaRumbleMgr_instance, 1, 10, 2, 0, 0);
          if ( (a2 & 4) != 0 )
            sub_604005D0(AreaRumbleMgr_instance, 2, 10, 2, 0, 0);
          if ( (a2 & 8) != 0 )
            sub_604005D0(AreaRumbleMgr_instance, 3, 10, 2, 0, 0);
        }
      }
    }
    result = -FIELD_U32(a1, 7300);
    FIELD_U32(a1, 164) = result;
  }
  return result;
}
