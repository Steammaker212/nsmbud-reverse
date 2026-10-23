/* sub_605E6E40
 * address: 0x605E6E40   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605E6E40(int a1)
{
  int v2; // r5
  int *v3; // r2
  int v4; // r1
  int v5; // r2
  int v6; // s0
  float v7; // s2
  float v8; // s2
  float v9; // s12
  float v10; // s4
  float v11; // s6
  float v12; // s8
  float v13; // s10
  int v14; // r0

  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6248) = v2 & 0xF;
  v3 = dword_605E7030;
  if ( FIELD_U8(a1, 86) == 1 )
    v3 = &dword_605E7030[1];
  FIELD_U32(a1, 116) = *v3;
  ((void (__fastcall *)(int))loc_6045D1C0)(a1 + 6100);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  v4 = unk_60CB1B60;
  v5 = unk_60CB1B64;
  FIELD_U32(a1, 140) = dword_60CB1B68;
  FIELD_U32(a1, 136) = v5;
  FIELD_U32(a1, 132) = v4;
  if ( FIELD_U32(a1, 6248) == 2 && MaskMgr_instance && sub_6068C438(MaskMgr_instance) == 1 )
  {
    FIELD_U8(a1, 6244) = 1;
    LightMask__init((RevealMaskRelated *)(a1 + 6132), 0, 2);
    v6 = 1098907648;
    v7 = FIELD_F32(a1, 6268) + 16.0;
    FIELD_F32(a1, 6264) = v7;
    if ( v7 >= 16.0 )
    {
      v6 = LODWORD(v7);
      if ( v7 > 200.0 )
        v6 = 1128792064;
    }
    FIELD_U32(a1, 6264) = v6;
    v8 = FIELD_F32(a1, 572);
    v9 = FIELD_F32(a1, 108);
    v10 = FIELD_F32(a1, 576);
    v11 = FIELD_F32(a1, 580);
    v12 = FIELD_F32(a1, 112);
    v13 = FIELD_F32(a1, 116);
    FIELD_U32(a1, 6136) = v6;
    FIELD_F32(a1, 6144) = v9 + v8;
    FIELD_F32(a1, 6148) = v12 + v10;
    FIELD_F32(a1, 6152) = v13 + v11;
    LightMask__update((LightMask *)(a1 + 6132));
    FIELD_U32(a1, 6268) = 1101004800;
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B05AA4, 0, 0);
  if ( (unsigned __int8)v2 >> 4 )
  {
    v14 = 3;
    if ( (unsigned __int8)v2 >> 4 == 1 )
      v14 = 2;
    FIELD_U32(a1, 6252) = v14;
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB1B8C);
    sub_605E7054(a1);
  }
  return 1;
}
