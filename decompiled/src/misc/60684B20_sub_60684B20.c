/* sub_60684B20
 * address: 0x60684B20   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60684B20(int a1)
{
  int *v2; // r0
  int v3; // r1
  __int64 v4; // r2
  _DWORD *v5; // r2
  int v6; // r3
  __int64 v7; // r8
  int v8; // r3
  __int64 v9; // r8
  int v10; // r3
  __int64 v11; // r8
  int v12; // r0
  __int64 v13; // r2
  _DWORD v15[6]; // [sp+0h] [bp-80h] BYREF
  _BYTE v16[104]; // [sp+18h] [bp-68h] BYREF

  memset(v16, 0, 48);
  memset(v15, 0, 16);
  v15[4] = v16;
  v15[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 7600), a1, v15);
  ColliderBase_setType((ColliderBase *)(a1 + 7600), 36);
  v2 = (int *)(a1 + 7952);
  v3 = FIELD_U32(a1, 7952);
  v4 = FIELD_U64(v3, 24);
  HIDWORD(v4) = HIDWORD(v4) & 0xFFFFFF0F | 0x10;
  FIELD_U64(v3, 24) = v4;
  v5 = (_DWORD *)(a1 + 7948);
  v6 = FIELD_U32(a1, 7952);
  if ( FIELD_U32(a1, 7948) > 2u )
    v6 += 64;
  v7 = FIELD_U64(v6, 24);
  HIDWORD(v7) = HIDWORD(v7) & 0xFFFFFF0F | 0x10;
  FIELD_U64(v6, 24) = v7;
  v8 = *v2;
  if ( *v5 > 4u )
    v8 += 128;
  v9 = FIELD_U64(v8, 24);
  HIDWORD(v9) = HIDWORD(v9) & 0xFFFFFF0F | 0x10;
  FIELD_U64(v8, 24) = v9;
  v10 = *v2;
  if ( *v5 > 5u )
    v10 += 160;
  v11 = FIELD_U64(v10, 24);
  HIDWORD(v11) = HIDWORD(v11) & 0xFFFFFF0F | 0x10;
  FIELD_U64(v10, 24) = v11;
  v12 = *v2;
  if ( *v5 > 6u )
    v12 += 192;
  v13 = FIELD_U64(v12, 24);
  HIDWORD(v13) = HIDWORD(v13) & 0xFFFFFF0F | 0x10;
  FIELD_U64(v12, 24) = v13;
  FIELD_U32(a1, 7912) = sub_60681F10;
  FIELD_U32(a1, 7928) = sub_60682200;
  sub_60684E28(a1);
  FIELD_U32(a1, 7452) = 1;
  ShapedCollider_execute((ColliderBase *)(a1 + 7600));
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 7600));
  ShapedCollider_init((ShapedCollider *)(a1 + 6776), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB8324);
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6776));
}
