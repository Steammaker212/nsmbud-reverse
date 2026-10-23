/* sub_60357C38
 * address: 0x60357C38   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60357C38(int a1, int a2, int a3)
{
  char v5; // r12
  int v6; // r4
  char v7; // r12
  int v8; // r5
  float v9; // s0
  float v10; // s2
  _BOOL4 v11; // r8
  float v12; // s16
  float v13; // s18
  StateBase *CurrentState; // r0
  int v15; // r6
  int v16; // r7
  int v17; // r5
  StateBase *v18; // r0
  int v19; // r6
  StateBase *v20; // r0
  int v21; // r5

  if ( Actor__getProfileId(*(Actor **)(a3 + 64)) != 670
    && (!FIELD_U8(dword_60CC6D8C, 17)
     || Actor__getProfileId(*(Actor **)(a3 + 64)) != 508 && Actor__getProfileId(*(Actor **)(a3 + 64)) != 509) )
  {
    v6 = FIELD_U32(a2, 64);
    if ( ((unsigned int)dword_60C95248 & ~(1614118088 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C95248) )
    {
      dword_60C95244 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C95248);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C95244) == 1 )
    {
      FIELD_F32(v6, 108) = FIELD_F32(a2, 188) + FIELD_F32(v6, 108);
      v8 = FIELD_U32(a3, 64);
      if ( ((unsigned int)dword_60C7B430 & ~(1614118224 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
      {
        Enemy_RTTI = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C7B430);
      }
      if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &Enemy_RTTI) == 1 )
      {
        v9 = FIELD_F32(v6, 108);
        v10 = FIELD_F32(v8, 108);
        if ( v10 >= v9 || (v11 = 1, FIELD_U32(v6, 80) != 1) )
        {
          v11 = 0;
          if ( v10 > v9 )
            v11 = FIELD_U32(v6, 80) == 0;
        }
        v12 = FIELD_F32(v6, 120);
        v13 = FIELD_F32(v8, 120);
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
        v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        v16 = 0;
        v17 = !v11 || (float)(v13 * v12) > 0.0;
        if ( v15 == (*(int (__fastcall **)(int *))(dword_60C95138 + 8))(&dword_60C95138) && !v17 )
          FIELD_U8(v6, 6416) = 1;
        v18 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
        v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v18, 0x0) + 2))(v18);
        if ( v19 != (*(int (**)(void))(dword_60C95098 + 8))() )
          v16 = 1;
        if ( v16 | v17 )
        {
          v20 = StateMgr__getCurrentState((StateMgr *)(v6 + 6084));
          v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v20, 0x0) + 2))(v20);
          if ( v21 == (*(int (**)(void))(dword_60C95058 + 8))() )
            FIELD_U32(v6, 6420) = 30;
        }
        else
        {
          FIELD_U8(v6, 6417) = 1;
        }
      }
    }
  }
}
