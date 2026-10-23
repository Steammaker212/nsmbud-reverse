/* SE_OBJ_CMN_TOUCH_HARD_ref_3A9918
 * address: 0x603A9918   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_TOUCH_HARD_ref_3A9918(int a1, _DWORD *a2)
{
  char v2; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r6
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r1
  float *v9; // r0
  float *v10; // r1
  float v11; // r1
  float v12; // r2
  int v13; // r1
  int v14; // r4
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v4 = (int (__fastcall ***)(_DWORD, int *))a2[36];
  if ( ((unsigned int)&dword_60C9797C & ~(1614453048 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9797C) )
  {
    dword_60C97978 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9797C);
  }
  if ( v4 )
  {
    v5 = (**v4)(v4, &dword_60C97978);
    if ( v5 )
      v5 = (int)v4;
  }
  else
  {
    v5 = 0;
  }
  if ( ((unsigned int)dword_60C97984 & ~(1614453176 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C97984) )
  {
    dword_60C97980 = (int)&off_60BF4A9C;
    _cxa_guard_release(dword_60C97984);
  }
  v6 = (int)(a2 + 164);
  if ( !(*(int (__fastcall **)(_DWORD *, int *))(*a2 + 8))(a2, &dword_60C97980) )
    v6 = 656;
  v7 = *(_DWORD *)v6;
  if ( *(_DWORD *)v6 <= 0x13u )
  {
    v8 = v5 + 784 * v7;
    v9 = (float *)(v8 + 8568);
    v10 = (float *)(v8 + 8564);
LABEL_18:
    v12 = *v9;
    v11 = *v10;
    goto LABEL_19;
  }
  v11 = 0.0;
  v12 = 0.0;
  if ( (v7 & 0xFFFFFFFE) == 0x14 )
  {
    v13 = v5 + 792 * v7;
    v9 = (float *)(v13 - 8856);
    v10 = (float *)(v13 - 8860);
    goto LABEL_18;
  }
LABEL_19:
  position.x = v11;
  position.y = v12;
  v14 = Global_BasicSoundActor1;
  mapPositionToScreen(&out, &position);
  return sub_60813810(v14, (int)"SE_OBJ_CMN_TOUCH_HARD", (int)&out, 1, 0);
}
