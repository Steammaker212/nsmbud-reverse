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
  FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)49;
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
    FIELD_F32(a1 + (20) * 340, 0xB0) = -16.0;
    a1[19].field_13C = -1048576000;
    a1[19].field_140 = 1098907648;
    FIELD_U32(a1 + (19) * 340, 0x144) = 1098907648;
    a1[19].field_148 = -1048576000;
    sub_60165340((int)v3, &a1[19].field_13C, &FIELD_U32(a1 + (19) * 340, 0x144));
    a1[21].field_D4 = 0;
    a1[21].field_D8 = -1048576000;
    *(_DWORD *)&FIELD_U8(a1 + (21) * 340, 0xDC) = 1098907648;
    a1[21].field_E0 = -1048576000;
    FIELD_U32(a1 + (1) * 340, 0xA0) = (char *)1149239296;
    FIELD_U32(a1 + (1) * 340, 0xA4) = (char *)1149239296;
    FIELD_U32(a1 + (1) * 340, 0xA8) = (char *)1115684864;
    FIELD_F32(a1 + (1) * 340, 0xAC) = 64.0;
    FIELD_F32(a1 + (1) * 340, 0xB0) = 1024.0;
    FIELD_U32(a1 + (1) * 340, 0xB4) = 1149239296;
    FIELD_U32(a1 + (1) * 340, 0xB8) = 1157627904;
    FIELD_F32(a1 + (1) * 340, 0xBC) = 2048.0;
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
