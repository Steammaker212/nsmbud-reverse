/* boss_cannon_gun_ref
 * address: 0x600BF87C   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall boss_cannon_gun_ref(int a1, int a2)
{
  int v3; // r5
  char v4; // r12
  char v5; // r12
  int v6; // r6
  int v7; // r8
  StateBase *CurrentState; // r0
  int v9; // r7
  int v10; // r0
  int (__fastcall *v11)(int, _DWORD *); // r2
  int v12; // r0
  int *v13; // r0
  int *v14; // r0
  int v15; // r1
  float v16[3]; // [sp+4h] [bp-54h] BYREF
  _DWORD v17[18]; // [sp+10h] [bp-48h] BYREF

  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( FIELD_U8(v3, 533) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1611397312 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v3 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) == 1 )
      {
        v6 = FIELD_S8(v3, 84);
        if ( v6 <= 4 && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v6)) != 0 )
        {
          v7 = FIELD_U32(a1, 144);
          if ( ((unsigned int)dword_60C83928 & ~(1611397480 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C83928) )
          {
            dword_60C83924 = (int)&off_60BC00E0;
            _cxa_guard_release(dword_60C83928);
          }
          if ( v7 )
          {
            if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C83924) == 1 )
            {
              CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
              v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
              if ( v9 == (*(int (**)(void))(dword_60C83844 + 8))()
                && sub_60786744(v3 + 688) == 1
                && FIELD_F32(v3, 112) >= (float)((float)((float)(FIELD_F32(v7, 112) + 68.0) + -40.0) + -8.0) )
              {
                v10 = **(_DWORD **)(v7 + 6100);
                v11 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v10 + 84);
                v17[0] = &sead__SafeStringBase__vtable;
                v17[1] = "boss_cannon_gun";
                v12 = v11(v10, v17);
                (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(v7 + 6100) + 108))(
                  **(_DWORD **)(v7 + 6100),
                  v12,
                  v17);
                v16[2] = *(float *)&v17[11];
                v16[1] = *(float *)&v17[7] + 32.0;
                v16[0] = (float)(*(float *)&v17[3] + -10.0) + 10.0;
                if ( sub_607A5470(v3, v16, 2) == 1 )
                {
                  v13 = (int *)(v7 + 7448);
                  if ( FIELD_U32(v7, 7448) == -1
                    || (v13 = (int *)(v7 + 7452), FIELD_U32(v7, 7452) == -1)
                    || (v13 = (int *)(v7 + 7456), FIELD_U32(v7, 7456) == -1)
                    || (v13 = (int *)(v7 + 7460), FIELD_U32(v7, 7460) == -1) )
                  {
                    *v13 = v6;
                    ++FIELD_U32(v7, 7440);
                  }
                  if ( sub_600BFF2C(v7) == 1 )
                  {
                    FIELD_U32(v7, 7416) = 50;
                  }
                  else
                  {
                    v14 = (int *)(v7 + 7416);
                    v15 = 240;
                    if ( FIELD_U32(v7, 7440) != 1 )
                      v15 = *v14 + 50;
                    *v14 = v15;
                  }
                  FIELD_U32(a1, 148) = v3;
                }
              }
            }
          }
        }
      }
    }
  }
}
