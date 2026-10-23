/* sub_606C2E64
 * address: 0x606C2E64   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C2E64(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  float v6; // s0
  int v7; // r1
  int v8; // r0

  v4 = FIELD_U32(a1, 7436);
  v2 = (_DWORD *)(a1 + 7436);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  v5 = FIELD_U32(a1, 7444);
  if ( v5 )
    FIELD_U32(a1, 7444) = v5 - 1;
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    sub_605D006C(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 6984) + FIELD_F32(a1, 6796);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  ((void (__fastcall *)(int))loc_606C2C48)(a1);
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_U32(a1, 108);
  v8 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 7400) = 1123024896;
  FIELD_U32(a1, 7408) = v7;
  FIELD_F32(a1, 7412) = v6 + 8.0;
  FIELD_U32(a1, 7416) = v8;
  LightMask__update((LightMask *)(a1 + 7396));
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_605B2D70(a1);
  FIELD_U8(a1, 6841) = 0;
  return 1;
}
