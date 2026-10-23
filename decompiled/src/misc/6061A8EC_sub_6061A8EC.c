/* sub_6061A8EC
 * address: 0x6061A8EC   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061A8EC(int a1)
{
  float v2; // s0
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  if ( (FIELD_U8(a1, 25) & 1) != 0 )
  {
    v2 = 40.0;
    FIELD_U32(a1, 144) = 1072064102;
  }
  else
  {
    v2 = 24.0;
  }
  FIELD_U32(a1, 6772) = 0;
  FIELD_U32(a1, 6768) = 0;
  FIELD_U32(a1, 6764) = 0;
  FIELD_U32(a1, 6760) = 0;
  FIELD_F32(a1, 6776) = -v2;
  FIELD_U32(a1, 6780) = 1111490560;
  FIELD_F32(a1, 6784) = v2;
  FIELD_U32(a1, 6788) = 0;
  FIELD_U32(a1, 6792) = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6104), (StageActor *)a1, (ShapedColliderInfo *)(a1 + 6760));
  FIELD_U32(a1, 6440) = a1 + 6868;
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6104), 1);
  FIELD_U32(a1, 6432) = sub_6061AA48;
  block_ice_hard_ref(a1);
  sub_6061AC10(a1);
  sub_6061AD00(a1);
  FIELD_U32(a1, 500) = 1132462080;
  FIELD_U32(a1, 504) = 1136656384;
  FIELD_U32(a1, 508) = 1124073472;
  FIELD_U32(a1, 512) = 1124073472;
  v4[0] = 1124073472;
  v4[1] = 1132462080;
  sub_6069AFA0(a1 + 6804, a1 + 108, a1 + 492, v4, a1 + 6104);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB3490);
  return 1;
}
