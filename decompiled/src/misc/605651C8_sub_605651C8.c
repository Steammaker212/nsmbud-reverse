/* sub_605651C8
 * address: 0x605651C8   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605651C8(ColliderBase *a1)
{
  int *v2; // r6
  ColliderBase *v3; // r5
  signed int v4; // r1
  signed int result; // r0
  int *v6; // r1

  a1[21].field_E4 = 0;
  v2 = &a1[21].field_E4;
  a1[21].owner248Ptr = (Vec3 *)49;
  a1[21].field_94 = 1;
  v3 = a1 + 18;
  ColliderBase_setType(a1 + 18, 9);
  v4 = sub_605635AC((int)a1, 1, 1);
  result = 2;
  if ( v4 == 1 )
  {
    if ( *v2 == 2 )
      ColliderBase_setType(v3, 11);
    a1[20].ownerPlayerIdPtr = (char *)-1049624576;
    a1[20].distToCenter.x = 15.0;
    a1[20].distToCenter.y = -16.0;
    a1[19].field_13C = -1048576000;
    a1[19].field_140 = 1098907648;
    a1[19].field_144 = 1098907648;
    a1[19].field_148 = -1048576000;
    sub_60165340((int)v3, &a1[19].field_13C, &a1[19].field_144);
    a1[21].field_D4 = 0;
    a1[21].field_D8 = -1048576000;
    *(_DWORD *)&a1[21].field_DC = 1098907648;
    a1[21].field_E0 = -1048576000;
    a1[1].owner56Ptr = (char *)1149239296;
    a1[1].owner57Ptr = (char *)1149239296;
    a1[1].ownerPlayerIdPtr = (char *)1115684864;
    a1[1].distToCenter.x = 64.0;
    a1[1].distToCenter.y = 1024.0;
    a1[1].field_B4 = 1149239296;
    a1[1].field_B8 = 1157627904;
    a1[1].field_BC = 2048.0;
    a1[21].field_8C = 1124073472;
    a1[21].owner = (StageActor *)1124073472;
    sub_605D0024(a1);
    if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
    {
      ColliderMgr_add(ColliderMgr_instance, v3);
      ShapedCollider_execute(v3);
    }
    if ( *v2 == 2 )
      v6 = &dword_60CAE31C;
    else
      v6 = &dword_60CAE2F8;
    (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, v6);
    return 1;
  }
  return result;
}
