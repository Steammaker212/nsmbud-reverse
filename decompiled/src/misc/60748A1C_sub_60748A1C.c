/* sub_60748A1C
 * address: 0x60748A1C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall sub_60748A1C(StageActor *a1, ActorBuildInfo *a2, int a3)
{
  int v6; // r0
  int y_low; // r1
  float z; // r2
  float x; // r0
  int v10; // r1
  int z_low; // r2
  int v12; // r0
  void (__fastcall *v13)(int, _DWORD *); // r2
  _BOOL4 v14; // r7
  _DWORD v16[9]; // [sp+4h] [bp-24h] BYREF

  StageActor__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)off_60C235CC;
  v6 = operator_new(0xBCu);
  a1[1]._.vtable = sub_605EA200(v6, a3, 0);
  y_low = LODWORD(FIELD_F32(a2, 0x14));
  z = FIELD_F32(a2, 0x18);
  a1[1]._.heap = LODWORD(FIELD_F32(a2, 0x10));
  a1[1]._.id = y_low;
  *(float *)&a1[1]._.profile = z;
  x = FIELD_F32(a2, 0x10);
  v10 = LODWORD(FIELD_F32(a2, 0x14));
  z_low = LODWORD(FIELD_F32(a2, 0x18));
  a1[1]._.field_2C = 0;
  a1[1]._.childCount = 0;
  a1[1]._.field_20.next = 0;
  a1[1]._.field_20.previous = 0;
  *(float *)&a1[1]._.field_10 = x;
  a1[1]._.settings1 = v10;
  a1[1]._.settigns2 = z_low;
  *(_DWORD *)&a1[1]._.movementId = 0;
  a1[1]._.field_30 = (int)&off_60C236D0;
  a1[1]._.field_34 = (int)&off_60C236E0;
  a1[1]._.parent = (Actor *)&off_60C23704;
  a1[1]._.field_3C = (int)a1;
  a1[1]._.field_40 = 0;
  StateMgr_ctor((StateMgr *)&a1[1]._.field_44, (StateExecuter *)&a1[1]._.field_34, &NullState);
  a1[1]._.field_30 = (int)&off_60C236C0;
  *(_DWORD *)(**(_DWORD **)(a1[1]._.vtable + 12) + 32) = 0;
  *(_DWORD *)(**(_DWORD **)(a1[1]._.vtable + 12) + 36) = 0;
  v12 = **(_DWORD **)(a1[1]._.vtable + 12);
  v13 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v12 + 68);
  v16[0] = 1077936128;
  v16[1] = 1077936128;
  v16[2] = 1077936128;
  v13(v12, v16);
  FIELD_U32(a1, 0xA0) = FIELD_U32(a2, 0x1C);
  ((void (__fastcall *)(int, _DWORD, float, float, float))loc_605EA46C)(a1[1]._.vtable, 0, 0.0, 1.0, 0.0);
  if ( dword_60CC6484 )
  {
    v14 = FIELD_F32(dword_60CC6484, 116) < FIELD_F32(a1, 0x6C);
    FIELD_U32(a1, 0x50) = v14;
    *(_DWORD *)&a1[1]._.movementId = v14;
  }
  return a1;
}
