/* BoomerangBro_vf186
 * address: 0x60262704   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall BoomerangBro_vf186(int a1)
{
  unsigned int v2; // r1
  int v3; // r4
  char v4; // r12
  double v5; // d0
  int v6; // s16
  int v7; // s2
  int v8; // s20
  float v9; // s18
  float v10; // s0
  int v11; // r0
  int v12; // r1

  v2 = FIELD_U32(a1, 6608);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60C87668 & ~(1613113164 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C87668) )
    {
      dword_60C87664 = (int)&off_60BD20C4;
      _cxa_guard_release(&dword_60C87668);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C87664) == 1 && !FIELD_U8(v3, 6476) )
    {
      v5 = ((double (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 708))(a1);
      v6 = LODWORD(v5);
      v8 = v7;
      v9 = *((float *)&v5 + 1);
      v10 = atan2f(FIELD_F32(a1, 6332) - FIELD_F32(a1, 6380), FIELD_F32(a1, 6316) - FIELD_F32(a1, 6364));
      v11 = FIELD_U32(v3, 160);
      v12 = FIELD_U32(v3, 164);
      FIELD_U32(v3, 108) = v6;
      FIELD_F32(v3, 112) = v9 + -4.0;
      FIELD_U32(v3, 116) = v8;
      FIELD_U32(v3, 156) = (int)v10 - 835132529;
      FIELD_U32(v3, 160) = v11;
      FIELD_U32(v3, 164) = v12;
    }
  }
}
