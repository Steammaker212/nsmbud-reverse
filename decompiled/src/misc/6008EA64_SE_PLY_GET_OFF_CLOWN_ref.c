/* SE_PLY_GET_OFF_CLOWN_ref
 * address: 0x6008EA64   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_GET_OFF_CLOWN_ref(int a1)
{
  int v2; // r8
  float v3; // s0
  int v4; // r5
  char v5; // r12
  unsigned int v6; // r0
  int *v7; // r7
  _DWORD *v8; // r5
  int v9; // r6
  int v10; // r0
  int v11; // r1

  v2 = 0;
  v3 = FIELD_F32(a1, 108);
  if ( v3 >= (float)(FIELD_F32(dword_60CC6484, 112) + 80.0) )
  {
    v2 = 1;
    if ( v3 <= (float)(FIELD_F32(dword_60CC6484, 120) + -80.0) )
    {
      v4 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, *(_DWORD *)(ActorMgr__instance + 27172));
      if ( ((unsigned int)&dword_60C81738 & ~(1611197164 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
      {
        dword_60C81734 = (int)&off_60BC1FA8;
        _cxa_guard_release(&dword_60C81738);
      }
      if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81734) == 1 )
      {
        if ( FIELD_F32(v4, 108) <= FIELD_F32(a1, 108) )
          v2 = 0;
      }
      else
      {
        v2 = 0;
      }
    }
  }
  v7 = (int *)(a1 + 15240);
  v6 = FIELD_U32(a1, 15240);
  if ( v6 <= 3 )
  {
    v8 = *(_DWORD **)(PlayerMgr_instance + 4 * v6 + 32);
    if ( v8 )
    {
      v8[20] = v2;
      v9 = 0;
      (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, float, float))(*v8 + 748))(
        v8,
        1,
        0,
        0,
        4.0,
        (float)byte_60AFE3F4[v2] * 4.0);
      v8[2393] = 60;
      if ( (unsigned int)*v7 < 4 )
        v9 = *v7;
      *(_DWORD *)(a1 + 4 * v9 + 15276) = 60;
    }
  }
  sub_60813430(a1 + 9476, "SE_PLY_GET_OFF_CLOWN", 0);
  FIELD_U32(a1, 80) = v2 ^ 1;
  v10 = 1056964608;
  FIELD_U32(a1, 120) = 1056964608;
  FIELD_U32(a1, 124) = 1083179008;
  FIELD_U32(a1, 128) = 0;
  if ( !v2 )
    v10 = -1090519040;
  LOWORD(v11) = -30584;
  if ( !v2 )
    FIELD_U32(a1, 120) = v10;
  FIELD_U32(a1, 132) = v10;
  HIWORD(v11) = 2184;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 164) = 11930464;
  FIELD_U32(a1, 15272) = v11;
  return 15272;
}
