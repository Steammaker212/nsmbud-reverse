/* sub_602EB35C
 * address: 0x602EB35C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EB35C(int a1)
{
  int v1; // r4
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  float v4; // s0
  float v5; // r0
  float v6; // s0
  int v7; // t1
  float v9; // [sp+4h] [bp-1Ch] BYREF
  float v10; // [sp+8h] [bp-18h]
  int v11; // [sp+Ch] [bp-14h]

  v1 = a1;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = FIELD_F32(v1, 112) + FIELD_F32(v1, 576);
  v9 = FIELD_F32(v1, 108) + FIELD_F32(v1, 572);
  v10 = v4;
  sub_602F32F8(v1 + 6784, &v9, 9, 0);
  v5 = FIELD_F32(v1, 7432);
  v9 = FIELD_F32(v1, 108);
  v10 = v5;
  v11 = 1170939904;
  v6 = (*(float (__fastcall **)(int, float *))(*(_DWORD *)v1 + 120))(v1, &v9);
  *(_BYTE *)(FIELD_U32(v1, 7368) + 69) = 1;
  sub_602F4044(v6);
  v7 = FIELD_U32(v1, 7440);
  v1 += 7440;
  *(_DWORD *)v1 = v7 & 0xFFFFFFFE;
  *(_DWORD *)(v1 - 7336) = 1051931443;
  *(_DWORD *)(v1 - 7308) = 0;
  *(float *)(v1 - 7316) = *(float *)(v1 - 7316) * 0.25;
  *(_DWORD *)(v1 - 7324) = -988004352;
  *(_DWORD *)(v1 - 7276) = 0;
  *(_BYTE *)(v1 - 7356) = -1;
  return -7356;
}
