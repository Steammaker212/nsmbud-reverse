/* sub_603A8B40
 * address: 0x603A8B40   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A8B40(int a1)
{
  int v2; // r4
  int v3; // r5
  StateActor *v4; // r0
  int v5; // r1

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_603A8C88(a1);
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6980);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6984);
  FIELD_U32(a1, 116) = 1120403456;
  FIELD_U32(a1, 6484) = 0;
  FIELD_U32(a1, 6488) = 0;
  ShapedCollider_execute((ColliderBase *)(a1 + 6312));
  FIELD_U32(a1, 7276) = 0;
  FIELD_U32(a1, 7280) = 0;
  ShapedCollider_execute((ColliderBase *)(a1 + 7104));
  if ( FIELD_S32(a1, 23568) >= 1 )
  {
    v2 = 0;
    v3 = a1 + 7896;
    do
    {
      FIELD_U32(v3, 172) = 0;
      FIELD_U32(v3, 176) = 0;
      ShapedCollider_execute((ColliderBase *)v3);
      ++v2;
      v3 += 784;
    }
    while ( v2 < FIELD_U32(a1, 23568) );
  }
  sub_603A8DC8(a1);
  if ( (FIELD_U8(a1, 24) & 1) != 0 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) )
    {
      v4 = (StateActor *)a1;
      v5 = 1;
      goto LABEL_10;
    }
  }
  else if ( (FIELD_U32(a1, 23608) | 2) == 2 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1) )
    {
      v4 = (StateActor *)a1;
      v5 = 0;
LABEL_10:
      StageActor__delete(v4, v5);
      return 1;
    }
  }
  else
  {
    StageActor__cullCheck((StageActor *)a1, 0);
  }
  return 1;
}
