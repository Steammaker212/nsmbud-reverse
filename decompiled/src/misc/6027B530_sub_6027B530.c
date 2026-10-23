/* sub_6027B530
 * address: 0x6027B530   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027B530(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  signed int v4; // r0
  int v5; // s2
  int *v6; // r1

  FIELD_U8(a1, 9324) = 0;
  v2 = (_BYTE *)(a1 + 9324);
  if ( dword_60C9A1F0 )
  {
    v3 = FIELD_U8(dword_60C9A1F0, 6546);
    *v2 = v3;
    if ( v3 )
    {
      FIELD_U32(a1, 568) &= ~0x10u;
      FIELD_U32(a1, 76) |= 4u;
    }
  }
  choropoo_ref(a1);
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v4;
  FIELD_U8(a1, 8852) = v4;
  FIELD_U32(a1, 116) = 1152876544;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDD550, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 8980), (StageActor *)a1, &stru_60AFDDA4, a1 + 9284);
  FIELD_F64(a1, 9292) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 9288))(a1 + 9288);
  FIELD_U32(a1, 9300) = v5;
  FIELD_U32(a1, 620) = a1 + 8872;
  FIELD_U32(a1, 8888) = 3;
  FIELD_U32(a1, 8936) = 1;
  FIELD_U32(a1, 624) = a1 + 8908;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1136656384;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 8548) = 0;
  FIELD_U32(a1, 8564) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 8568) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 8572) = FIELD_U32(a1, 116);
  FIELD_U8(a1, 8844) = 0;
  if ( FIELD_U32(a1, 20) == 3 )
    v6 = &dword_60C8EFEC;
  else
    v6 = &dword_60C8EE38;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v6);
  return 1;
}
