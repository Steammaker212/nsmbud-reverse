/* sub_604BB2D0
 * address: 0x604BB2D0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BB2D0(int a1)
{
  int *v2; // r1
  int *v3; // r0
  char v4; // r12
  int v5; // r5
  int result; // r0
  bool v7; // zf
  int v8; // r0
  _DWORD *v9; // r1
  int v10; // r12
  int v11; // r3
  int v12; // r5
  int v13; // r2

  FIELD_U32(a1, 3636) = 0;
  FIELD_U16(a1, 3632) = 257;
  FIELD_U8(a1, 3640) = 0;
  if ( !sub_6040E394(FIELD_U8(LevelInfo_instance, 16), FIELD_U8(LevelInfo_instance, 17)) )
  {
    result = FIELD_U8(dword_60CC6D78, 109032);
    if ( !FIELD_U8(dword_60CC6D78, 109032) )
      return result;
    v8 = FIELD_U32(a1, 24);
    v9 = *(_DWORD **)(a1 + 44);
    goto LABEL_15;
  }
  v2 = &dword_60AF2D88;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v2 = &dword_60AF2D8C;
  v3 = (int *)sub_60008598(ActorMgr__instance, *v2, FIELD_U32(ActorMgr__instance, 27172));
  if ( !v3 )
    goto LABEL_12;
  v5 = *v3;
  if ( ((unsigned int)&dword_60C99D80 & ~(1615573868 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D80) )
  {
    dword_60C99D7C = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C99D80);
  }
  if ( !v5 )
    goto LABEL_12;
  result = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C99D7C);
  v7 = result == 1;
  if ( result == 1 )
  {
    result = FIELD_U8(v5, 100);
    v7 = result == 3;
  }
  if ( !v7 )
  {
LABEL_12:
    v8 = FIELD_U32(a1, 24);
    v9 = *(_DWORD **)(a1 + 40);
LABEL_15:
    v10 = v9[12];
    v11 = v9[13];
    v12 = v9[7];
    v13 = v9[8];
    FIELD_U32(v8, 24) = v9[6];
    FIELD_U32(v8, 28) = v12;
    FIELD_U32(v8, 32) = v13;
    FIELD_U8(v8, 64) |= 0x10u;
    result = FIELD_U32(a1, 24);
    FIELD_U32(result, 48) = v10;
    FIELD_U32(result, 52) = v11;
    FIELD_U8(result, 64) |= 0x10u;
  }
  return result;
}
