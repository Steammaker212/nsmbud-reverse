/* sub_603DBFA8
 * address: 0x603DBFA8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603DBFA8(int a1)
{
  float v2; // s16
  Vec3 *v3; // r6
  signed int v4; // r0
  float v5; // s18
  signed int v6; // r7
  float v7; // s16
  int v8; // r6
  _BYTE *v9; // r0
  char v10; // r12
  _BYTE *v11; // r5
  int v12; // r7
  int v13; // r4
  ActorBuildInfo v15[2]; // [sp+4h] [bp-5Ch] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = (Vec3 *)(a1 + 108);
  v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v5 = FIELD_F32(a1, 112);
  v6 = v4;
  memset(&v15[0].settings2, 0, 36);
  v15[0].settings1 = StageActor__directionToPlayerX((StateActor *)a1, v3);
  v7 = v2 + flt_60AF20D0[v6];
  v15[0].profile = Profile__get(0x29Eu);
  v8 = 0;
  v15[0].position.x = v7;
  v15[0].position.y = v5 + 12.0;
  v15[0].position.z = 0.0;
  v15[0].field_20 = 0;
  v15[0].eventId1 = 0;
  v15[0].eventId2 = 0;
  v15[0].field_28 = 0;
  v9 = ActorMgr__create((void *)ActorMgr__instance, v15, 0);
  v11 = v9;
  if ( v9 )
  {
    FIELD_U32(a1, 6820) = *((_DWORD *)v9 + 2);
    v12 = FIELD_U32(a1, 108);
    v13 = FIELD_U32(a1, 112);
    if ( ((unsigned int)&dword_60C9911C & ~(1614659720 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C9911C) )
    {
      dword_60C99118 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C9911C);
    }
    v8 = 1;
    if ( (**(int (__fastcall ***)(_BYTE *, int *))v11)(v11, &dword_60C99118) == 1 )
    {
      *((_DWORD *)v11 + 2938) = v12;
      *((_DWORD *)v11 + 2939) = v13;
      *((_DWORD *)v11 + 2940) = 0;
    }
  }
  else
  {
    FIELD_U8(a1, 19) = 1;
  }
  return v8;
}
