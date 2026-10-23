/* sub_603994B8
 * address: 0x603994B8   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603994B8(int a1)
{
  int v2; // r1
  __int16 v3; // r1
  int *v4; // r0
  float v5; // s16
  int v6; // r0
  int v7; // r2
  _DWORD *v8; // r7
  int v9; // r5
  float *v10; // r5
  float v11; // r0
  Vec2 v13; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  sub_60399750();
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_S16(a1, 6576);
  if ( v2 < 1 )
  {
    sub_6041838C((ModelAnimation *)(FIELD_U32(a1, 6308) + 4));
    v5 = 1.0;
    *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 0;
    FIELD_U32(a1, 6360) = 0;
  }
  else
  {
    v3 = v2 - 1;
    FIELD_U16(a1, 6576) = v3;
    v4 = dword_60399730;
    if ( (v3 & 4) != 0 )
      v4 = &dword_60399730[1];
    v5 = *(float *)v4 + FIELD_F32(a1, 6580);
    FIELD_F32(a1, 6580) = v5;
    v6 = FIELD_U32(a1, 6308);
    if ( (FIELD_U8(v6, 28) & 0x20) != 0 )
    {
      v7 = FIELD_U32(a1, 6360);
      FIELD_U32(a1, 6360) = v7 - 1;
      if ( v7 < 2 )
        FIELD_U32(a1, 6360) = 0;
      else
        sub_6041838C((ModelAnimation *)(v6 + 4));
    }
  }
  FIELD_F32(a1, 144) = v5;
  FIELD_F32(a1, 148) = v5;
  FIELD_F32(a1, 152) = v5;
  v8 = (_DWORD *)(a1 + 6436);
  if ( FIELD_U32(a1, 6436) )
    v9 = sub_6039AAD4(a1, a1 + 6392);
  else
    v9 = 0;
  if ( FIELD_U32(a1, 6392) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1);
  if ( v9 == 1 )
  {
    *v8 = 0;
    FIELD_U32(a1, 6432) = 0;
    FIELD_U8(a1, 6440) = 0;
  }
  FIELD_U16(a1, 6524) = 0;
  if ( FIELD_U8(a1, 6521) )
  {
    v10 = (float *)(a1 + 112);
  }
  else
  {
    v10 = (float *)(a1 + 112);
    if ( (float)(FIELD_F32(a1, 112) + 40.0) < FIELD_F32(dword_60CC6484, 28) )
    {
      if ( sub_6039A3F8(a1) )
      {
        ((void (__fastcall *)(int))loc_6039D3BC)(a1);
        *v8 = 0;
        FIELD_U32(a1, 6432) = 0;
        FIELD_U8(a1, 6440) = 0;
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97300);
      }
      else
      {
        if ( !sub_607781EC(dword_60CBFA90) && !sub_60778128(dword_60CBFA90) )
          sub_60777D04(dword_60CBFA90, 0);
        FIELD_U8(a1, 19) = 1;
      }
    }
  }
  sub_603993B8(a1);
  v11 = *v10;
  position.x = FIELD_F32(a1, 108);
  position.y = v11;
  mapPositionToScreen(&v13, &position);
  MovingSoundActor_setPosition((MovingSoundActor *)(a1 + 12988), &v13);
  return 1;
}
