/* sub_606C28F8
 * address: 0x606C28F8   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606C28F8(int a1)
{
  signed int result; // r0
  int v3; // r0
  float v4; // s0
  int v5; // r1
  int v6; // r0
  int *v7; // r1

  result = 2;
  if ( !FIELD_U8(dword_60C9A230, 2084)
    && ((*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40)
                  + 520 * *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7)
                  + 50)
       & 1) != 0
     || FIELD_U8(dword_60CC6D78, 109051)) )
  {
    sub_605B2C10(a1, FIELD_F32(a1, 112));
    FIELD_U32(a1, 7368) = 0;
    FIELD_U32(a1, 7296) = 49;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 80) = 0;
    v3 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 7348) = v3;
    FIELD_U32(a1, 6980) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6984) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6988) = v3;
    ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CBAA5C);
    FIELD_U32(a1, 6432) = sub_606C2B24;
    FIELD_U32(a1, 6436) = sub_605B3934;
    FIELD_U32(a1, 6440) = sub_606C2B28;
    R_block_luigi_ref(a1);
    ((void (__fastcall *)(int))loc_606C2C48)(a1);
    LightMask__init((RevealMaskRelated *)(a1 + 7396), 0, 2);
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_U32(a1, 108);
    v6 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 7400) = 1123024896;
    FIELD_U32(a1, 7408) = v5;
    FIELD_F32(a1, 7412) = v4 + 8.0;
    FIELD_U32(a1, 7416) = v6;
    LightMask__update((LightMask *)(a1 + 7396));
    FIELD_U32(a1, 500) = 1115684864;
    FIELD_U32(a1, 504) = 1115684864;
    FIELD_U32(a1, 508) = 1107296256;
    FIELD_U32(a1, 512) = 1107296256;
    FIELD_U32(a1, 7280) = 1115684864;
    FIELD_U32(a1, 7284) = 1115684864;
    sub_605D0024(a1);
    if ( FIELD_U32(PlayerMgr_instance, 208) )
      v7 = &dword_60CBAA28;
    else
      v7 = &dword_60CBA9E4;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v7);
    return 1;
  }
  return result;
}
