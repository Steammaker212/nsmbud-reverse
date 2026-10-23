/* lkp_run_ref_2
 * address: 0x60087924   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_run_ref_2(int a1)
{
  int *v2; // r5
  int v3; // r0
  int v4; // r5
  char v5; // r12
  float v6; // r0
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (int *)(a1 + 7100);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v3 = *v2;
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lkp_run";
  sub_60421AE4(v3, v8, 1);
  v4 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611168180 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81734) == 1 )
  {
    v6 = FIELD_F32(v4, 108);
    FIELD_F32(a1, 7660) = v6;
    FIELD_U32(a1, 7664) = FIELD_U32(v4, 112);
    FIELD_U32(a1, 7668) = FIELD_U32(v4, 116);
    FIELD_F32(a1, 7660) = v6 + 144.0;
    FIELD_U32(a1, 80) = (float)(v6 + 144.0) < FIELD_F32(a1, 108);
  }
  FIELD_U32(a1, 104) = 1031127695;
  FIELD_U32(a1, 132) = 1075838976;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  return -1103101952;
}
