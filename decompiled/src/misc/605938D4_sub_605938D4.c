/* sub_605938D4
 * address: 0x605938D4   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605938D4(int a1)
{
  ActiveColliderMgr *v2; // r6
  int v3; // r1
  int v4; // r2
  int v5; // r5
  int *v6; // r1
  CollisionMgr_Sensor v8; // [sp+0h] [bp-28h] BYREF

  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6288));
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7840));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 7840));
  ActiveColldierMgr_removeFromList3(v2, a1 + 7840);
  FIELD_U32(a1, 8164) = 0;
  v3 = FIELD_U32(a1, 36);
  if ( v3 != a1 + 32 )
  {
    v4 = FIELD_U32(a1, 44);
    v5 = v3 - v4;
    do
    {
      FIELD_U8(v5, 19) = 1;
      v3 = FIELD_U32(v3, 4);
      v5 = v3 - v4;
    }
    while ( v3 - v4 != a1 + 32 - FIELD_U32(a1, 44) );
  }
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v6 = dword_60593A10;
  if ( (FIELD_U8(a1, 8220) & 2) != 0 )
    v6 = &dword_60593A10[1];
  FIELD_U32(a1, 120) = *v6;
  FIELD_U8(a1, 8212) = 0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 3);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B04D30, 0);
  v8.b = 0.0;
  v8.a = 0.0;
  v8.c = -32.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v8, 1);
  FIELD_U8(a1, 8213) = 0;
  return 8213;
}
