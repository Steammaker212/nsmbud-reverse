/* sub_6026F3C4
 * address: 0x6026F3C4   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6026F3C4(int a1)
{
  int v2; // r0
  int *v3; // r2
  int v4; // r0
  int v5; // r0
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r0

  sub_6026DDE8((_DWORD *)a1);
  v2 = FIELD_U32(a1, 9468);
  FIELD_F32(a1, 112) = flt_60AF1FB0[v2] + FIELD_F32(a1, 112);
  if ( v2 == 1 )
    v3 = &dword_60C8E92C;
  else
    v3 = &dword_60C8E950;
  ShapedCollider_init((ShapedCollider *)(a1 + 6112), (StageActor *)a1, (ShapedColliderInfo *)v3);
  FIELD_U32(a1, 6276) = a1 + 87;
  FIELD_U32(a1, 6272) = a1 + 86;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
  ShapedCollider_init((ShapedCollider *)(a1 + 6768), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C8E974);
  FIELD_U32(a1, 6932) = a1 + 87;
  FIELD_U32(a1, 6928) = a1 + 86;
  v4 = -FIELD_U32(a1, 9476);
  FIELD_U32(a1, 9488) = v4;
  FIELD_U32(a1, 7012) = v4;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6768));
  ShapedCollider_init((ShapedCollider *)(a1 + 7424), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C8E974);
  FIELD_U32(a1, 7588) = a1 + 87;
  FIELD_U32(a1, 7584) = a1 + 86;
  v5 = -1073741824 - FIELD_U32(a1, 9476);
  FIELD_U32(a1, 9492) = v5;
  FIELD_U32(a1, 7668) = v5;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 7424));
  ShapedCollider_init((ShapedCollider *)(a1 + 8080), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C8E974);
  FIELD_U32(a1, 8244) = a1 + 87;
  FIELD_U32(a1, 8240) = a1 + 86;
  v6 = -(FIELD_U32(a1, 9476) ^ 0x80000000);
  FIELD_U32(a1, 9496) = v6;
  FIELD_U32(a1, 8324) = v6;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8080));
  ShapedCollider_init((ShapedCollider *)(a1 + 8736), (StageActor *)a1, (ShapedColliderInfo *)&dword_60C8E974);
  FIELD_U32(a1, 8900) = a1 + 87;
  FIELD_U32(a1, 8896) = a1 + 86;
  v7 = 0x40000000 - FIELD_U32(a1, 9476);
  FIELD_U32(a1, 9500) = v7;
  FIELD_U32(a1, 8980) = v7;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 8736));
  v8 = FIELD_U32(a1, 20);
  FIELD_F32(a1, 9576) = (float)((unsigned __int16)v8 >> 12) * 48.0;
  FIELD_U8(a1, 9527) = BYTE2(v8) & 3;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E800);
  return 1;
}
