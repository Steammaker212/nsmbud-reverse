/* sub_6060FAA0
 * address: 0x6060FAA0   size: 1220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6060FAA0(int a1)
{
  int v2; // r5
  char v3; // r12
  char v4; // r12
  int v5; // r0
  float v6; // r0
  int (__fastcall ***v7)(_DWORD, int *); // r6
  char v8; // r12
  int v9; // r5
  char v10; // r12
  int v11; // r0
  float v12; // s0
  float v13; // s2
  float v14; // s0
  float v15; // s2
  float v16; // s0
  float v17; // r0
  void (__fastcall *v18)(int, _DWORD *); // r2
  _DWORD v19[6]; // [sp+0h] [bp-18h] BYREF

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)a1);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616968412 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
  {
    v5 = FIELD_U8(v2, 533);
    if ( (unsigned int)(v5 - 1) < 2 )
    {
      v7 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *(_DWORD *)a1);
      if ( ((unsigned int)&dword_60C7B364 & ~(1616968744 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v7 )
      {
        v9 = (**v7)(v7, &StageActor_RTTI);
        if ( v9 )
          v9 = (int)v7;
      }
      else
      {
        v9 = 0;
      }
      if ( ((unsigned int)&dword_60C7B37C & ~(1616969036 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C7B378) == 1 )
      {
        v11 = FIELD_U32(a1, 32);
        if ( v11 < 1 )
        {
          v17 = FIELD_F32(v9, 108);
          FIELD_F32(a1, 8) = v17;
          v12 = v17;
          v13 = FIELD_F32(a1, 16);
        }
        else
        {
          FIELD_U32(a1, 32) = v11 - 1;
          v12 = *(float *)&dword_60AF1FC8[FIELD_U32(a1, 28)] + FIELD_F32(a1, 8);
          v13 = 0.0;
          FIELD_F32(a1, 8) = v12;
          FIELD_U32(a1, 16) = 0;
        }
        FIELD_F32(a1, 12) = v13 + FIELD_F32(a1, 12);
        sub_60774C10(v9, v12);
      }
    }
    else
    {
      if ( (unsigned int)(v5 - 3) >= 2 )
      {
        if ( FIELD_U8(v2, 533) )
          return;
        if ( ((unsigned int)&dword_60C88A60 & ~(1616968876 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A60) )
        {
          dword_60C88A5C = (int)&off_60BD48F8;
          _cxa_guard_release(&dword_60C88A60);
        }
        if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C88A5C) == 1 )
        {
          FIELD_U32(a1, 8) = FIELD_U32(v2, 108);
          if ( (*(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 80))(v2) + 2224) & 0x10400) == 0x400 )
          {
            v6 = FIELD_F32(a1, 12);
            goto LABEL_53;
          }
        }
        else
        {
          if ( !FIELD_U8(a1, 24) )
            return;
          if ( ((unsigned int)&dword_60C7B394 & ~(1616969272 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B394) )
          {
            CollisionActor_RTTI = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B394);
          }
          if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &CollisionActor_RTTI) != 1 )
            return;
          FIELD_U32(a1, 8) = FIELD_U32(v2, 108);
          if ( (*(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 80))(v2) + 2224) & 0x10400) == 0x400 )
          {
            v6 = FIELD_F32(a1, 12);
            goto LABEL_53;
          }
        }
        v14 = FIELD_F32(a1, 12);
        v15 = FIELD_F32(a1, 16);
        goto LABEL_51;
      }
      if ( ((unsigned int)&dword_60C7B394 & ~(1616968556 << v4) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C7B394) )
        {
          CollisionActor_RTTI = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B394);
        }
      }
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &CollisionActor_RTTI) == 1 )
      {
        FIELD_U32(a1, 8) = FIELD_U32(v2, 108);
        if ( (*(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 80))(v2) + 2224) & 0x10400) == 0x400 )
        {
          v6 = FIELD_F32(a1, 12);
LABEL_53:
          v18 = *(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 172);
          v19[0] = FIELD_U32(a1, 8);
          *(float *)&v19[1] = v6;
          v18(v2, v19);
          (*(void (__fastcall **)(int, float))(*(_DWORD *)v2 + 176))(v2, 0.0);
          return;
        }
        if ( Actor__getProfileId((Actor *)v2) == 694 )
        {
          v6 = FIELD_F32(v2, 112);
          FIELD_F32(a1, 12) = v6;
          goto LABEL_53;
        }
        v14 = FIELD_F32(a1, 16);
        if ( (FIELD_U8(v2, 569) & 0x80) == 0 )
        {
          v16 = v14 + FIELD_F32(a1, 12);
LABEL_52:
          v6 = v16;
          FIELD_F32(a1, 12) = v16;
          goto LABEL_53;
        }
        v15 = FIELD_F32(v2, 112);
LABEL_51:
        v16 = v15 + v14;
        goto LABEL_52;
      }
    }
  }
}
