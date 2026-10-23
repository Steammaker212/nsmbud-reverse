/* sub_603372EC
 * address: 0x603372EC   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603372EC(int a1)
{
  int v2; // r0
  int v3; // s0
  int v4; // r2
  int v5; // r3
  int *v6; // r1
  ActiveCollider *v7; // r4
  ActiveColliderMgr *v8; // r5

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  CollisionMgr_vf14(a1 + 648);
  v2 = FIELD_U32(a1, 6128);
  FIELD_U32(a1, 6284) = v2;
  FIELD_U32(a1, 104) = 0;
  v3 = byte_60AFE3F4[v2];
  FIELD_U32(a1, 100) = FIELD_U32(a1, 6116);
  FIELD_F32(a1, 120) = (float)v3 * 1.5;
  FIELD_U32(a1, 124) = 1080033280;
  v4 = FIELD_S8(a1, 6124);
  if ( v4 >= 0 )
  {
    v5 = FIELD_S8(a1, 6132);
    if ( (unsigned __int8)v5 > 3u )
    {
      if ( (unsigned __int8)v5 == 4 )
        sub_600229B0(0.0, 24.0, dword_60C7F52C, a1, v4);
    }
    else
    {
      sub_60022540(dword_60C7F52C, a1 + 108, v4, v5, 1);
    }
  }
  v6 = dword_60337440;
  if ( (FIELD_U8(a1, 87) & 2) != 0 )
    v6 = &dword_60337440[1];
  FIELD_U32(a1, 116) = *v6;
  sub_602360C0(a1 + 6536);
  v7 = (ActiveCollider *)(a1 + 6628);
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v7);
  ActiveColldierMgr_removeFromCreateList(v8, v7);
  return ActiveColldierMgr_removeFromList3(v8, (int)v7);
}
