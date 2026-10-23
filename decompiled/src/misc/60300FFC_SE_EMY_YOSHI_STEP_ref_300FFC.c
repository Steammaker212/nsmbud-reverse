/* SE_EMY_YOSHI_STEP_ref_300FFC
 * address: 0x60300FFC   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_YOSHI_STEP_ref_300FFC(float *a1, int a2, int a3)
{
  char v3; // r12
  int v4; // r5
  int v6; // r1
  unsigned int v7; // r0
  char *v8; // r0
  _WORD *v9; // r0
  int v10; // t1
  void (__fastcall *v11)(float *, int); // r6
  int v12; // r1
  float v13; // r1
  int v14; // r5
  Vec2 v16; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v4 = FIELD_U32(a3, 64);
  v6 = 0;
  v7 = FIELD_U8(v4, 84);
  if ( v7 < 4 )
    v6 = (char)v7;
  v8 = (char *)a1 + 2 * v6;
  v10 = *((unsigned __int16 *)v8 + 3070);
  v9 = v8 + 6140;
  if ( !v10 )
  {
    *v9 = 16;
    v11 = *(void (__fastcall **)(float *, int))(*(_DWORD *)a1 + 380);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613762640 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v4 )
    {
      v12 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378);
      if ( v12 )
        v12 = v4;
    }
    else
    {
      v12 = 0;
    }
    v11(a1, v12);
    v13 = a1[28];
    v14 = Global_BasicSoundActor1;
    position.x = a1[27];
    position.y = v13;
    mapPositionToScreen(&v16, &position);
    BasicSoundActor1_playSound(v14, "SE_EMY_YOSHI_STEP", (int)&v16, 0);
  }
  return 1;
}
