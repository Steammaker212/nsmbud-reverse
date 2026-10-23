/* sub_6056ACE0
 * address: 0x6056ACE0   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6056ACE0(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  float v5; // s0
  int v6; // r1
  int v7; // r0

  v2 = 2;
  if ( (FIELD_U8(dword_60CC6D78, 44) & 1) == 0
    && !FIELD_U8(dword_60CC6D78, 109032)
    && sub_6078A50C(PlayerMgr_instance) <= 1
    && !FIELD_U32(dword_60C99DD4, 764)
    && FIELD_U8(dword_60C99DD4, 776) >= 5u )
  {
    v3 = FIELD_U32(a1, 20) & 3;
    if ( FIELD_U8(dword_60C99DD4, 194) )
    {
      if ( !v3 || v3 != FIELD_U32(dword_60C99DD4, 272) + 1 )
        return v2;
    }
    else if ( v3 )
    {
      return v2;
    }
    FIELD_U32(a1, 7368) = 0;
    FIELD_U32(a1, 7296) = 49;
    v4 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 7348) = v4;
    FIELD_U32(a1, 6980) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6984) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6988) = v4;
    sub_605B2C10(a1);
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    sub_605B5274(a1);
    FIELD_U32(a1, 80) = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CAE6EC);
    FIELD_U32(a1, 6432) = sub_6056AF2C;
    FIELD_U32(a1, 6436) = sub_605B3934;
    FIELD_U32(a1, 6440) = sub_6056AF30;
    FIELD_U32(a1, 500) = 1115684864;
    FIELD_U32(a1, 504) = 1115684864;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    sub_6056AF34(a1);
    sub_6056B158(a1);
    LightMask__init((RevealMaskRelated *)(a1 + 7396), 0, 2);
    v5 = FIELD_F32(a1, 112);
    v6 = FIELD_U32(a1, 108);
    v7 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 7400) = 1123024896;
    FIELD_U32(a1, 7408) = v6;
    FIELD_F32(a1, 7412) = v5 + 8.0;
    FIELD_U32(a1, 7416) = v7;
    LightMask__update((LightMask *)(a1 + 7396));
    FIELD_U32(a1, 7280) = 1115684864;
    FIELD_U32(a1, 7284) = 1115684864;
    sub_605D0024(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAE6A8);
    return 1;
  }
  return v2;
}
