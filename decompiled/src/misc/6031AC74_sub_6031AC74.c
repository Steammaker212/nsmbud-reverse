/* sub_6031AC74
 * address: 0x6031AC74   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6031AC74(int a1, int a2)
{
  int v2; // r8
  int v3; // r5
  unsigned int result; // r0
  unsigned int v5; // r1
  int (__fastcall ***v6)(_DWORD, int *); // r9
  char v7; // r12
  int v8; // r4
  float v9; // r1
  int v10; // r5
  unsigned int v11; // r1
  int (__fastcall ***v12)(_DWORD, int *); // r6
  char v13; // r12
  int v14; // r4
  Vec3 v15; // [sp+28h] [bp-30h] BYREF

  v2 = a1 + 6336;
  if ( a2 )
  {
    v3 = 0;
    result = 0x946D80u;
    do
    {
      v5 = *(_DWORD *)(v2 + 4 * v3);
      if ( v5 )
      {
        v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v5);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613868360 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v6 )
        {
          v8 = (**v6)(v6, &StageActor_RTTI);
          if ( v8 )
            v8 = (int)v6;
        }
        else
        {
          v8 = 0;
        }
        if ( ((unsigned int)dword_60C87964 & ~(1613868456 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
        {
          dword_60C87960 = (int)&off_60BC00E0;
          _cxa_guard_release(dword_60C87964);
        }
        if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C87960) == 1 && !FIELD_U8(v8, 6148) )
        {
          v9 = FIELD_F32(v8, 112);
          v15.x = FIELD_F32(v8, 108);
          v15.y = v9;
          v15.z = 4500.0;
          SE_OBJ_EMY_FIRE_DISAPP_ref_138104(v8, &v15);
        }
        result = 0;
        *(_DWORD *)(v2 + 4 * v3) = 0;
      }
      ++v3;
    }
    while ( v3 != 4 );
  }
  else
  {
    v10 = 0;
    result = 0x946BC4u;
    do
    {
      v11 = *(_DWORD *)(v2 + 4 * v10);
      if ( v11 )
      {
        v12 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v11);
        if ( ((unsigned int)&dword_60C7B364 & ~(1613868804 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v12 )
        {
          v14 = (**v12)(v12, &StageActor_RTTI);
          if ( v14 )
            v14 = (int)v12;
        }
        else
        {
          v14 = 0;
        }
        if ( ((unsigned int)dword_60C87964 & ~(1613868900 << v13) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
        {
          dword_60C87960 = (int)&off_60BC00E0;
          _cxa_guard_release(dword_60C87964);
        }
        if ( v14 && (**(int (__fastcall ***)(int, int *))v14)(v14, &dword_60C87960) == 1 && !FIELD_U8(v14, 6148) )
          FIELD_U8(v14, 19) = 1;
        result = 0;
        *(_DWORD *)(v2 + 4 * v10) = 0;
      }
      ++v10;
    }
    while ( v10 != 4 );
  }
  return result;
}
