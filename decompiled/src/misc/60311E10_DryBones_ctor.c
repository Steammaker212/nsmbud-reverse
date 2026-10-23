/* DryBones_ctor
 * address: 0x60311E10   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DryBones_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1EB8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = DryBones_vtable;
  memset((void *)(v2 + 6580), 0, 72);
  memset((void *)(v2 + 6328), 0, 84);
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6652));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6956));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 7260));
  FIELD_U32(v2, 7616) = 0;
  FIELD_U32(v2, 7612) = 0;
  FIELD_U32(v2, 7608) = 0;
  FIELD_U32(v2, 7604) = 0;
  FIELD_U32(v2, 7600) = 0;
  FIELD_U16(v2, 7644) = 0;
  FIELD_U32(v2, 7640) = 0;
  FIELD_U32(v2, 7636) = 0;
  FIELD_U32(v2, 7632) = 0;
  FIELD_U32(v2, 7628) = 0;
  FIELD_U32(v2, 7624) = 0;
  FIELD_U32(v2, 7668) = 0;
  FIELD_U32(v2, 7664) = 0;
  FIELD_U32(v2, 7660) = 0;
  FIELD_U32(v2, 7656) = 0;
  FIELD_U32(v2, 7652) = 0;
  FIELD_U32(v2, 7648) = 0;
  FIELD_U8(v2, 7672) = 1;
  FIELD_U8(v2, 7678) = 0;
  FIELD_U8(v2, 7677) = 0;
  FIELD_U8(v2, 7674) = 0;
  FIELD_U8(v2, 7679) = 0;
  FIELD_U8(v2, 7673) = 0;
  FIELD_U8(v2, 7676) = 0;
  FIELD_U8(v2, 7675) = 0;
  sub_602A8564((_DWORD *)(v2 + 7680), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 7716), FIELD_U32(v2, 8));
  FIELD_U32(v2, 7752) = v2;
  FIELD_U32(v2, 7756) = off_60BE2BE4;
  FIELD_U8(v2, 7760) = 0;
  FIELD_U32(v2, 7764) = &ActorScaler_vtable;
  FIELD_U32(v2, 7768) = 1065353216;
  FIELD_U32(v2, 7772) = 1065353216;
  FIELD_U32(v2, 7776) = 1065353216;
  FIELD_U32(v2, 7780) = 1065353216;
  FIELD_U32(v2, 7784) = 0;
  FIELD_U32(v2, 7788) = 0;
  FIELD_U32(v2, 7792) = v2;
  FIELD_U32(v2, 7796) = off_60BEA380;
  FIELD_U32(v2, 7852) = 0;
  FIELD_U32(v2, 7856) = -1;
  EffectData_ctor((EffectData *)(v2 + 7800));
  memset((void *)(v2 + 6412), 0, 240);
  return v2;
}
