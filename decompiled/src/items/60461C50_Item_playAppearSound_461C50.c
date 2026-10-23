/* Item_playAppearSound_461C50
 * address: 0x60461C50   size: 884   group: items
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Item_playAppearSound_461C50(int a1)
{
  int result; // r0
  float v3; // s0
  float v4; // r1
  int v5; // r5
  int v6; // s0
  int v7; // r0
  int v8; // r0
  float *v9; // r1
  int *v10; // r1
  float v11; // s0
  Vec2 v12; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  result = FIELD_U8(a1, 23) & 0x1F;
  FIELD_U32(a1, 6180) = result;
  switch ( result )
  {
    case 0:
      v3 = FIELD_F32(a1, 112);
      if ( FIELD_U32(a1, 6188) == 3 )
      {
        FIELD_F32(a1, 6660) = v3 + -16.0;
        if ( FIELD_U32(a1, 6168) == 6 )
          FIELD_F32(a1, 6660) = v3 + -12.0;
        FIELD_U32(a1, 6172) = 1;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D1B8);
      }
      else
      {
        FIELD_F32(a1, 6660) = v3 + 16.0;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D198);
      }
    case 1:
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D2F8);
    case 3:
      v7 = FIELD_U32(a1, 6216);
      if ( v7 == 1 )
      {
        v8 = FIELD_U32(a1, 80);
        v9 = flt_60AF1EA0;
        goto LABEL_27;
      }
      if ( !v7 )
      {
        v8 = FIELD_U32(a1, 80);
        v9 = (float *)dword_60B025FC;
LABEL_27:
        v11 = v9[v8];
        goto LABEL_29;
      }
      v11 = (float)(COERCE_FLOAT((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 9) | 0x3F800000) + -1.0)
          * 0.2;
LABEL_29:
      FIELD_F32(a1, 120) = v11;
      FIELD_U32(a1, 124) = 1082130432;
      FIELD_U32(a1, 128) = 0;
      FIELD_U8(a1, 6056) = 1;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D31C);
    case 4:
      FIELD_U8(a1, 6056) = 1;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D340);
    case 5:
      FIELD_U8(a1, 6056) = 1;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D364);
    case 6:
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D1F8);
    case 7:
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D218);
    case 8:
      FIELD_U8(a1, 6056) = 1;
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C9D388);
    case 9:
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D298);
    case 11:
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D258);
    case 13:
      v4 = FIELD_F32(a1, 112);
      v5 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v4;
      mapPositionToScreen(&v12, &position);
      BasicSoundActor2_play(v5, "SE_OBJ_ITEM_APPEAR", &v12.x, 0);
      FIELD_U32(a1, 6228) = 0;
      FIELD_U32(a1, 6224) = 0;
      FIELD_U32(a1, 132) = 1065353216;
      FIELD_U32(a1, 136) = -1056964608;
      FIELD_U32(a1, 140) = 0;
      FIELD_U32(a1, 100) = -1103101952;
      FIELD_U32(a1, 124) = 0;
      if ( FIELD_U8(a1, 86) == 1 )
      {
        v6 = -987594752;
      }
      else
      {
        v10 = dword_60461FDC;
        if ( FIELD_U32(a1, 6168) == 5 )
          v10 = &dword_60461FDC[1];
        v6 = *v10;
      }
      FIELD_U32(a1, 116) = v6;
      FIELD_U8(a1, 6056) = 1;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
      FIELD_U32(a1, 120) = dword_60B025FC[FIELD_U32(a1, 80)];
      FIELD_U32(a1, 124) = -1090519040;
      FIELD_U32(a1, 128) = 0;
      result = FIELD_U32(a1, 6188);
      if ( result == 2 )
      {
        result = 1082130432;
        FIELD_U32(a1, 124) = 1082130432;
      }
      return result;
    default:
      return result;
  }
}
