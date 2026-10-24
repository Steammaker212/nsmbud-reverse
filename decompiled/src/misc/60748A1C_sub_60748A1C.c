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
  FIELD_U32(a1 + (1) * 644, 0x0) = sub_605EA200(v6, a3, 0);
  y_low = LODWORD(FIELD_F32(a2, 0x14));
  z = FIELD_F32(a2, 0x18);
  FIELD_U32(a1 + (1) * 644, 0x4) = LODWORD(FIELD_F32(a2, 0x10));
  a1[1]._.id = y_low;
  *(float *)&a1[1]._.profile = z;
  x = FIELD_F32(a2, 0x10);
  v10 = LODWORD(FIELD_F32(a2, 0x14));
  z_low = LODWORD(FIELD_F32(a2, 0x18));
  FIELD_U32(a1 + (1) * 644, 0x2C) = 0;
  FIELD_U32(a1 + (1) * 644, 0x28) = 0;
  FIELD_U32(a1 + (1) * 644, 0x24) = 0;
  FIELD_U32(a1 + (1) * 644, 0x20) = 0;
  *(float *)&FIELD_U8(a1 + (1) * 644, 0x10) = x;
  a1[1]._.settings1 = v10;
  a1[1]._.settigns2 = z_low;
  *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x1C) = 0;
  FIELD_U32(a1 + (1) * 644, 0x30) = (int)&off_60C236D0;
  FIELD_U32(a1 + (1) * 644, 0x34) = (int)&off_60C236E0;
  FIELD_U32(a1 + (1) * 644, 0x38) = (Actor *)&off_60C23704;
  a1[1]._.field_3C = (int)a1;
  a1[1]._.field_40 = 0;
  StateMgr_ctor((StateMgr *)&FIELD_U32(a1 + (1) * 644, 0x44), (StateExecuter *)&FIELD_U32(a1 + (1) * 644, 0x34), &NullState);
  FIELD_U32(a1 + (1) * 644, 0x30) = (int)&off_60C236C0;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1 + (1) * 644, 0x0) + 12) + 32) = 0;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1 + (1) * 644, 0x0) + 12) + 36) = 0;
  v12 = **(_DWORD **)(FIELD_U32(a1 + (1) * 644, 0x0) + 12);
  v13 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v12 + 68);
  v16[0] = 1077936128;
  v16[1] = 1077936128;
  v16[2] = 1077936128;
  v13(v12, v16);
  FIELD_U32(a1, 0xA0) = FIELD_U32(a2, 0x1C);
  ((void (__fastcall *)(int, _DWORD, float, float, float))loc_605EA46C)(FIELD_U32(a1 + (1) * 644, 0x0), 0, 0.0, 1.0, 0.0);
  if ( dword_60CC6484 )
  {
    v14 = FIELD_F32(dword_60CC6484, 116) < FIELD_F32(a1, 0x6C);
    FIELD_U32(a1, 0x50) = v14;
    *(_DWORD *)&FIELD_U8(a1 + (1) * 644, 0x1C) = v14;
  }
  return a1;
}
