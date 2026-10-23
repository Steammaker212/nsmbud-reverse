/* sub_601FEA2C
 * address: 0x601FEA2C   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FEA2C(int a1, int a2)
{
  char v2; // r12
  int *v4; // r0
  int v5; // r5
  int v6; // r1
  int *v7; // r0
  char v8; // r12
  int *v9; // r0
  int v10; // r4
  int v11; // r1

  FIELD_U8(a1, 3228) = 1;
  v4 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 7u )
    v4 += 7;
  v5 = *v4;
  if ( ((unsigned int)&dword_60C81740 & ~(1612704364 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v5 )
  {
    v6 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 8))(v5, &dword_60C8173C);
    if ( v6 )
      v6 = v5;
  }
  else
  {
    v6 = 0;
  }
  sub_604431BC(DrawMgr_instance, v6, 1);
  sub_600089B0(ActorMgr__instance, a2);
  sub_60443298(DrawMgr_instance);
  v7 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 7u )
    v7 += 7;
  sub_601A0204(dword_60C89E00, *v7);
  v9 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 9u )
    v9 += 9;
  v10 = *v9;
  if ( ((unsigned int)&dword_60C81740 & ~(1612704612 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v10 )
  {
    v11 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v10 + 8))(v10, &dword_60C8173C);
    if ( v11 )
      v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  sub_604431BC(DrawMgr_instance, v11, 1);
  sub_601A2DF4(dword_60C89E18);
  sub_60499988(dword_60CA059C);
  return sub_60443298(DrawMgr_instance);
}
