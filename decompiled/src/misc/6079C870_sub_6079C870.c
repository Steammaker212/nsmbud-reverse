/* sub_6079C870
 * address: 0x6079C870   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079C870(int a1, int a2, float *a3, int a4)
{
  float v8; // s0
  int v9; // r1
  float v10; // s2
  int v11; // r0
  float v12; // s0
  float v13; // s0
  int (__fastcall ***v14)(_DWORD, int *); // r4
  char v15; // r12

  v8 = FIELD_F32(a2, 4);
  v9 = *(_DWORD *)a2;
  v10 = FIELD_F32(a1, 1244);
  v11 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 108) = v9;
  v12 = (float)(v8 + (float)(v10 * -0.5)) + -2.0;
  FIELD_F32(a1, 112) = v12;
  FIELD_U32(a1, 584) = v9;
  FIELD_F32(a1, 588) = v12;
  FIELD_U32(a1, 592) = v11;
  FIELD_U32(a1, 608) = v9;
  FIELD_F32(a1, 612) = v12;
  FIELD_U32(a1, 616) = v11;
  sub_607A5504(a1);
  v13 = *a3;
  FIELD_F32(a1, 88) = *a3;
  FIELD_F32(a1, 92) = v13;
  FIELD_F32(a1, 124) = a3[1];
  FIELD_U32(a1, 80) = v13 <= 0.0;
  v14 = (int (__fastcall ***)(_DWORD, int *))sub_6079DFCC(a1);
  if ( v14 )
  {
    if ( ((unsigned int)&dword_60C7B410 & ~(1618594088 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
    {
      dword_60C7B40C = (int)&off_60BC00D4;
      _cxa_guard_release(&dword_60C7B410);
    }
    if ( (**v14)(v14, &dword_60C7B40C) == 1 )
      sub_605DA0A8((int)v14, (int *)a2, a3, a4);
  }
  FIELD_U32(a1, 12232) = 0;
  Player_changeState(a1, (StateBase *)&dword_60CC4F0C, a4);
  return 1;
}
