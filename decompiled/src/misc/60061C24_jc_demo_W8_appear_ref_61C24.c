/* jc_demo_W8_appear_ref_61C24
 * address: 0x60061C24   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W8_appear_ref_61C24(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int result; // r0
  _BYTE *v8; // r5
  char v9; // r12
  ActorBuildInfo v10; // [sp+0h] [bp-48h] BYREF

  v3 = a1 + 6304;
  v2 = FIELD_U32(a1, 6304);
  v10.settings1 = (int)&sead__SafeStringBase__vtable;
  v10.settings2 = (int)"jc_demo_W8_appear";
  sub_60421AE4(v2, &v10, 0);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 780))(a1, 0);
  v4 = dword_60CC6484;
  FIELD_F32(a1, 108) = FIELD_F32(dword_60CC6484, 116) + 80.0;
  FIELD_F32(a1, 112) = FIELD_F32(v4, 128) + 48.0;
  if ( !FIELD_U32(a1, 7760) )
  {
    memset(&v10, 0, sizeof(v10));
    v10.profile = Profile__get(0x2D2u);
    v8 = ActorMgr__create((void *)ActorMgr__instance, &v10, 0);
    if ( ((unsigned int)&dword_60C81080 & ~(1611013468 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C81080) )
    {
      dword_60C8107C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C81080);
    }
    if ( v8 && (**(int (__fastcall ***)(_BYTE *, int *))v8)(v8, &dword_60C8107C) == 1 )
    {
      *((_DWORD *)v8 + 1576) = a1;
      FIELD_U32(a1, 7760) = *((_DWORD *)v8 + 2);
    }
  }
  FIELD_U32(a1, 80) = 1;
  FIELD_U32(a1, 160) = -536870912;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v6 )
    v5 += 4 * v6;
  result = (int)*(float *)(*(_DWORD *)v5 + 8) + 15;
  FIELD_U16(a1, 6276) = result;
  return result;
}
