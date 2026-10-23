/* sub_606832F0
 * address: 0x606832F0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_606832F0(int a1)
{
  int v2; // r0
  int *v3; // r1
  __int64 v4; // r2
  _DWORD *v5; // r2
  int v6; // r3
  unsigned int v7; // r7
  int v8; // r3
  unsigned int v9; // r7
  int v10; // r1
  int v11; // r3
  _DWORD v13[6]; // [sp+0h] [bp-80h] BYREF
  _DWORD v14[26]; // [sp+18h] [bp-68h] BYREF

  v14[0] = -1031798784;
  v14[1] = 1098907648;
  v14[2] = -1040187392;
  v14[3] = 1115684864;
  v14[4] = 1107296256;
  v14[5] = 1115684864;
  v14[6] = 1115684864;
  v14[7] = 1098907648;
  v14[8] = 1115684864;
  v14[9] = -1031798784;
  v14[10] = -1031798784;
  v14[11] = -1031798784;
  memset(v13, 0, 16);
  v13[4] = v14;
  v13[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 7600), a1, v13);
  ColliderBase_setType((ColliderBase *)(a1 + 7600), 36);
  v3 = (int *)(a1 + 7952);
  v2 = FIELD_U32(a1, 7952);
  v4 = FIELD_U64(v2, 24);
  HIDWORD(v4) = HIDWORD(v4) & 0xFFFFFF0F | 0x10;
  FIELD_U64(v2, 24) = v4;
  v5 = (_DWORD *)(a1 + 7948);
  v6 = FIELD_U32(a1, 7952);
  if ( FIELD_U32(a1, 7948) > 2u )
    v6 += 64;
  v7 = FIELD_U32(v6, 28) & 0xFFFFFF0F | 0x10;
  FIELD_U32(v6, 24) = FIELD_U32(v6, 24);
  FIELD_U32(v6, 28) = v7;
  v8 = *v3;
  if ( *v5 > 4u )
    v8 += 128;
  v9 = FIELD_U32(v8, 28) & 0xFFFFFF0F | 0x10;
  FIELD_U32(v8, 24) = FIELD_U32(v8, 24);
  FIELD_U32(v8, 28) = v9;
  v10 = *v3;
  if ( *v5 > 6u )
    v10 += 192;
  v11 = FIELD_U32(v10, 28);
  FIELD_U32(v10, 24) = FIELD_U32(v10, 24);
  FIELD_U32(v10, 28) = v11 & 0xFFFFFF0F | 0x10;
  FIELD_U32(a1, 7912) = sub_60681F10;
  FIELD_U32(a1, 7928) = sub_60682200;
  sub_606836FC(a1);
  ShapedCollider_execute((ColliderBase *)(a1 + 7600));
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 7600));
  ShapedCollider_init((ShapedCollider *)(a1 + 6776), (StageActor *)a1, (ShapedColliderInfo *)&unk_60CB8278);
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6776));
}
