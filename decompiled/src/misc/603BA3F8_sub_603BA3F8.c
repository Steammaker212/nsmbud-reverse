/* sub_603BA3F8
 * address: 0x603BA3F8   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603BA3F8(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  int v4; // r0
  int v5; // r0
  int *v6; // r1
  ActiveCollider *v7; // r4
  ActiveColliderMgr *v8; // r5
  int v10; // r2
  int v11; // r3

  FIELD_U8(a1, 6136) = 0;
  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  CollisionMgr_vf14(a1 + 648);
  FIELD_U32(a1, 6284) = FIELD_U32(a1, 6128);
  v4 = FIELD_U32(a1, 6108);
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = v4;
  FIELD_U32(a1, 128) = 0;
  v5 = FIELD_U32(a1, 6112);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = v5;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = FIELD_U32(a1, 6116);
  FIELD_U32(a1, 6432) = 0;
  if ( !FIELD_U8(a1, 22647) )
  {
    v10 = FIELD_S8(a1, 6124);
    if ( v10 >= 0 )
    {
      v11 = FIELD_S8(a1, 6132);
      if ( (unsigned __int8)v11 > 3u )
      {
        if ( (unsigned __int8)v11 == 4 )
          sub_600229B0(0.0, 24.0, dword_60C7F52C, a1, v10);
      }
      else
      {
        sub_60022540(dword_60C7F52C, a1 + 108, v10, v11, 1);
      }
    }
  }
  sub_60001688(a1, 17, -1);
  v6 = dword_603BA598;
  if ( (FIELD_U8(a1, 87) & 2) != 0 )
    v6 = &dword_603BA598[1];
  FIELD_U32(a1, 116) = *v6;
  v7 = (ActiveCollider *)(a1 + 22780);
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v7);
  ActiveColldierMgr_removeFromCreateList(v8, v7);
  return ActiveColldierMgr_removeFromList3(v8, (int)v7);
}
