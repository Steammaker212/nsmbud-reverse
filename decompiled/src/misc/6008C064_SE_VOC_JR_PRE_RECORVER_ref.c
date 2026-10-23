/* SE_VOC_JR_PRE_RECORVER_ref
 * address: 0x6008C064   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_JR_PRE_RECORVER_ref(int a1)
{
  int v2; // r8
  int v3; // r0
  int *v4; // r4
  int v5; // r0
  float v6; // s16
  int v7; // r6
  char v8; // r12
  int v9; // r0
  int v10; // r0
  _DWORD v12[10]; // [sp+0h] [bp-28h] BYREF

  v2 = 0;
  v4 = (int *)(a1 + 7696);
  v3 = FIELD_U32(a1, 7696);
  if ( v3 >= 1 )
  {
    v5 = v3 - 1;
    *v4 = v5;
    v6 = *(float *)(**(_DWORD **)(FIELD_U32(a1, 7612) + 12) + 8);
    if ( (float)v5 > v6 )
    {
      v7 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, FIELD_U32(ActorMgr__instance, 27172));
      if ( ((unsigned int)&dword_60C81738 & ~(1611186424 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
      {
        dword_60C81734 = (int)&off_60BC1FA8;
        _cxa_guard_release(&dword_60C81738);
      }
      if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C81734) == 1 && (FIELD_U8(v7, 7144) & 2) != 0 )
        *v4 = (int)v6;
    }
    v9 = *v4;
    if ( (float)*v4 < v6 && !FIELD_U8(a1, 7700) )
    {
      FIELD_U8(a1, 7700) = 1;
      sub_60813430(a1 + 6332, "SE_VOC_JR_PRE_RECORVER", 0);
      v9 = *v4;
    }
    if ( !v9 )
    {
      FIELD_U8(a1, 7700) = 0;
      v10 = FIELD_U32(a1, 7612);
      v12[0] = &sead__SafeStringBase__vtable;
      v12[1] = "lkp_shell_model_sign";
      sub_6040F4B8(v10, v12, 0);
      return 1;
    }
  }
  return v2;
}
