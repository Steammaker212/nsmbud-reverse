/* sub_603B9A48
 * address: 0x603B9A48   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B9A48(int a1)
{
  float v2; // r6
  float v3; // r7
  _BYTE *v4; // r8
  int v5; // r5
  float v6; // s0
  int v7; // r2
  float v9; // s6
  float v10; // s4
  TileCheck_Result v11; // [sp+8h] [bp-48h] BYREF
  Vec2 a3[4]; // [sp+30h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 6476);
  v3 = FIELD_F32(a1, 6480);
  a3[0].y = v3;
  a3[0].x = v2;
  v4 = (_BYTE *)(a1 + 22576);
  if ( !FIELD_U8(a1, 22576) )
  {
    switch ( FIELD_U32(a1, 22544) )
    {
      case 0:
        v9 = -0.25;
        goto LABEL_12;
      case 1:
        v10 = 0.25;
        goto LABEL_14;
      case 2:
        v9 = 0.25;
LABEL_12:
        a3[0].x = v2 + 0.0;
        a3[0].y = v3 + v9;
        v3 = v3 + v9;
        v2 = v2 + 0.0;
        break;
      case 3:
        v10 = -0.25;
LABEL_14:
        v2 = v2 + v10;
        a3[0].x = v2;
        v3 = v3 + 0.0;
        a3[0].y = v3;
        break;
      default:
        break;
    }
  }
  sub_6014F61C(a1 + 648);
  v5 = 0;
  v11.field_C = 0;
  v11.field_10 = 0;
  FIELD_F32(a1, 23132) = v2;
  FIELD_F32(a1, 23136) = v3;
  sub_6014F61C(a1 + 6488);
  if ( TileCheck_check((TileCheck *)(a1 + 6492), &v11, a3, a3, 15) == 1 )
  {
    v5 = 1;
    if ( v11.field_20 )
    {
      if ( *(_DWORD *)(v11.field_20 + 300) == 17 )
      {
        ((void (__fastcall *)(int))loc_603B938C)(a1);
        ((void (__fastcall *)(int))loc_603B938C)(a1);
        v5 = 1;
        FIELD_U8(a1, 22645) = 1;
        if ( *v4 )
        {
          FIELD_U8(a1, 22612) ^= 1u;
          v7 = FIELD_U32(a1, 6464);
          FIELD_U32(a1, 6464) = FIELD_U32(a1, 22608);
          FIELD_U32(a1, 22608) = v7;
          CollisionMgr_process((_BYTE *)(a1 + 6488), v6);
          sub_603B992C((_DWORD *)a1);
        }
      }
    }
  }
  return v5;
}
