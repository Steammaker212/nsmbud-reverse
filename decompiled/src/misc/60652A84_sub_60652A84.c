/* sub_60652A84
 * address: 0x60652A84   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60652A84(int a1)
{
  StateMethodExecuter *result; // r0
  float v3; // s0
  float v4; // s0
  float v5; // s0
  int v6; // r1
  float v7; // s2
  float v8; // s0
  int v9; // r1
  int v10; // r0
  int v11; // r2

  CollisionActor__handleSpeed((CollisionActor *)a1);
  result = *(StateMethodExecuter **)(a1 + 20);
  if ( (FIELD_U8(a1, 26) & 0xF0) != 0 )
  {
    switch ( ((unsigned int)result >> 16) & 7 )
    {
      case 0u:
        v3 = FIELD_F32(a1, 6556) + FIELD_F32(a1, 6564);
        if ( FIELD_F32(a1, 112) >= v3 )
          goto LABEL_6;
        break;
      case 1u:
        v3 = FIELD_F32(a1, 6556) - FIELD_F32(a1, 6564);
        if ( FIELD_F32(a1, 112) <= v3 )
        {
LABEL_6:
          FIELD_F32(a1, 112) = v3;
          goto LABEL_15;
        }
        break;
      case 2u:
        v4 = FIELD_F32(a1, 6552) + FIELD_F32(a1, 6564);
        if ( FIELD_F32(a1, 108) >= v4 )
          goto LABEL_10;
        break;
      case 3u:
        v4 = FIELD_F32(a1, 6552) - FIELD_F32(a1, 6564);
        if ( FIELD_F32(a1, 108) <= v4 )
        {
LABEL_10:
          FIELD_F32(a1, 108) = v4;
          goto LABEL_15;
        }
        break;
      case 4u:
        v5 = FIELD_F32(a1, 6564);
        v6 = 1;
        v7 = FIELD_F32(a1, 6552) + v5;
        if ( FIELD_F32(a1, 108) >= v7 )
        {
          FIELD_F32(a1, 108) = v7;
          v6 = 2;
        }
        v8 = FIELD_F32(a1, 6556) - v5;
        if ( FIELD_F32(a1, 112) <= v8 )
        {
          FIELD_F32(a1, 112) = v8;
          if ( v6 == 2 )
LABEL_15:
            FIELD_U8(a1, 6572) = 1;
        }
        break;
      default:
        break;
    }
  }
  if ( ((unsigned int)result & 0x70000) == 0 )
  {
    result = (StateMethodExecuter *)dword_60CC6484;
    if ( (float)(FIELD_F32(dword_60CC6484, 124) + 32.0) <= FIELD_F32(a1, 112) )
    {
      v9 = FIELD_U32(a1, 108);
      v10 = FIELD_U32(a1, 6556);
      FIELD_U32(a1, 112) = v10;
      v11 = FIELD_U32(a1, 116);
      FIELD_U32(a1, 584) = v9;
      FIELD_U32(a1, 588) = v10;
      FIELD_U32(a1, 592) = v11;
      FIELD_U32(a1, 608) = v9;
      FIELD_U32(a1, 612) = v10;
      FIELD_U32(a1, 616) = v11;
      sub_60160948((_DWORD *)(a1 + 6104));
      sub_601601B8((_DWORD *)(a1 + 6104));
      (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 216))(a1, 0.0);
      (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 220))(a1, 0.0);
      FIELD_U8(a1, 6572) = 0;
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB62FC);
    }
  }
  return result;
}
