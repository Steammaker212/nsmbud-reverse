/* SE_AMB_KP_EARTHQUAKE_ref
 * address: 0x600625C4   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_AMB_KP_EARTHQUAKE_ref(int a1)
{
  int v2; // r0
  unsigned __int16 *v3; // r5
  int v4; // r1
  int v5; // r5
  char v6; // r12
  int v7; // r4
  char v8; // r12
  _DWORD v9[2]; // [sp+4h] [bp-1Ch] BYREF
  char v10; // [sp+Ch] [bp-14h]

  v3 = (unsigned __int16 *)(a1 + 6276);
  v2 = FIELD_U16(a1, 6276);
  if ( (unsigned int)v2 <= 0xB4 )
  {
    v9[0] = 15;
    v9[1] = unk_60C26458;
    v10 = 0;
    (*(void (__fastcall **)(int, const char *, _DWORD *))(*(_DWORD *)dword_60C7F538 + 44))(
      dword_60C7F538,
      "SE_AMB_KP_EARTHQUAKE",
      v9);
    v2 = *v3;
  }
  if ( v2 > 119 )
  {
    if ( v2 == 120 )
    {
      v4 = 3;
      goto LABEL_24;
    }
    if ( v2 == 180 )
    {
      v4 = 4;
      goto LABEL_24;
    }
  }
  else if ( v2 )
  {
    if ( v2 == 60 )
    {
      v4 = 2;
LABEL_24:
      AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, v4, 3, 0);
    }
  }
  else
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81054);
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
    if ( ((unsigned int)&dword_60C80FD8 & ~(1611015868 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C80FD8) )
    {
      dword_60C80FD4 = (int)&off_60BC2CB4;
      _cxa_guard_release(&dword_60C80FD8);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C80FD4) == 1 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C80FB4);
    v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7760));
    if ( ((unsigned int)&dword_60C81080 & ~(1611016044 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C81080) )
    {
      dword_60C8107C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C81080);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8107C) == 1 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C8401C);
    }
  }
}
