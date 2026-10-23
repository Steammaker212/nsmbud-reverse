/* sub_606A0954
 * address: 0x606A0954   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A0954(int a1)
{
  int v2; // r0
  float v3; // s0
  float v4; // r0
  TileCheck *v5; // r0
  TileCheck_Result v7; // [sp+10h] [bp-A0h] BYREF
  TileCheck v8; // [sp+38h] [bp-78h] BYREF
  TileCheck_Param v9; // [sp+84h] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+90h] [bp-20h] BYREF
  Vec2 a3; // [sp+98h] [bp-18h] BYREF

  FIELD_U32(a1, 492) = 1124597760;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1132986368;
  FIELD_U32(a1, 504) = 1107296256;
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6844) = BYTE1(v2);
  FIELD_U8(a1, 6845) = -1;
  if ( (v2 & 0x200000) != 0 )
  {
    FIELD_U8(a1, 6841) = 1;
    FIELD_U32(a1, 100) = -1103101952;
    FIELD_U32(a1, 136) = -1065353216;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B08310, 0, 0);
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_F32(a1, 108);
    *(_WORD *)&v9.field_0 = 0;
    a3.x = v4;
    positionOffset.x = v4;
    a3.y = v3 + -16.0;
    positionOffset.y = v3 + -500.0;
    v9.field_2 = FIELD_U8(a1, 86);
    v9.field_3 = FIELD_U8(a1, 87);
    v9.field_4 = 0;
    v9.field_8 = 0;
    v5 = TileCheck_ctor(&v8, &v9);
    v7.field_C = 0;
    v7.field_10 = 0;
    if ( TileCheck_check(v5, &v7, &a3, &positionOffset, 8) == 1 )
    {
      FIELD_F32(a1, 6848) = FIELD_F32(a1, 112) - v7.field_8;
      sub_60003D80();
    }
  }
  ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, int (*)(), int, _DWORD))loc_6069E698)(
    a1,
    0,
    0,
    0,
    sub_606A0AF0,
    1,
    0);
  return 1;
}
