/* sub_604E592C
 * address: 0x604E592C   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_604E592C(int a1)
{
  _DWORD *v2; // r7
  int *v3; // r6
  int *v4; // r1
  int *v5; // r0
  char v6; // r12
  int v7; // r5
  int v8; // r0
  int v9; // r0
  StateMgr *v10; // r0
  StateBase *v11; // r1
  int v12; // r0
  int *v13; // r3
  char v14; // r12
  int v15; // r5
  _BYTE *v16; // r0
  int *result; // r0
  _DWORD v18[8]; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 4568) = 0;
  v2 = (_DWORD *)(a1 + 4568);
  FIELD_U32(a1, 4564) = -1;
  v3 = (int *)(a1 + 4564);
  v4 = &dword_60AF2D88;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v4 = &dword_60AF2D8C;
  v5 = (int *)sub_60008598(ActorMgr__instance, *v4, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( v5 )
  {
    v7 = *v5;
    if ( ((unsigned int)&dword_60C99D80 & ~(1615747508 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D80) )
    {
      dword_60C99D7C = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C99D80);
    }
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C99D7C) == 1 )
    {
      *v3 = FIELD_U8(v7, 100);
      *v2 = FIELD_U32(v7, 8);
    }
  }
  v8 = sub_604E5CC0(a1);
  v9 = *(_DWORD *)(sub_60834614(v8) + 492);
  switch ( v9 )
  {
    case 0:
      ((void (__fastcall *)(int))loc_604E5DFC)(a1);
      v18[0] = &sead__SafeStringBase__vtable;
      v18[1] = dword_60CA5A68;
      if ( sub_6047467C(*(_DWORD **)(a1 + 4), 5u, v18, (int)&dword_60CA5C48, 1.0, 0) == 1 )
        FIELD_U8(a1, 4560) = 1;
      v12 = (int)&dword_60CC6D8C;
      if ( dword_60CC6D8C )
      {
        v12 = ActorMgr__instance;
        if ( ActorMgr__instance )
        {
          v13 = &dword_60AF2D88;
          if ( FIELD_U8(dword_60CC6D8C, 17) )
            v13 = &dword_60AF2D8C;
          v12 = sub_60008598(ActorMgr__instance, *v13, *(_DWORD *)(ActorMgr__instance + 27172));
          if ( v12 )
          {
            v15 = *(_DWORD *)v12;
            v12 = (unsigned int)&dword_60C99D80 & ~(1615747900 << v14);
            if ( (v12 & 1) == 0 )
            {
              v12 = _cxa_guard_acquire(&dword_60C99D80);
              if ( v12 )
              {
                dword_60C99D7C = (int)&off_60BC0098;
                _cxa_guard_release(&dword_60C99D80);
              }
            }
            if ( v15 )
            {
              v12 = (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C99D7C);
              if ( v12 == 1 )
              {
                *v2 = FIELD_U32(v15, 8);
                v12 = FIELD_U8(v15, 100);
                *v3 = v12;
              }
            }
          }
        }
      }
      v16 = (_BYTE *)sub_60834614(v12);
      FIELD_U32(a1, 62860) = sub_603FD0B4(v16);
      FIELD_U32(a1, 4552) = 0;
      v10 = (StateMgr *)(a1 + 4536);
      v11 = &stru_60CA59AC;
      goto LABEL_29;
    case 1:
      FIELD_U32(a1, 4552) = 0;
      v10 = (StateMgr *)(a1 + 4536);
      v11 = (StateBase *)&unk_60CA5A0C;
      goto LABEL_29;
    case 2:
      FIELD_U32(a1, 4552) = 0;
      v10 = (StateMgr *)(a1 + 4536);
      v11 = (StateBase *)&dword_60CA5A2C;
LABEL_29:
      StateMgr__changeState(v10, v11);
      break;
  }
  FIELD_U8(a1, 20) = 1;
  result = &LevelInfo_instance;
  if ( LevelInfo_instance )
  {
    result = (int *)sub_6040E394(FIELD_U8(LevelInfo_instance, 16), FIELD_U8(LevelInfo_instance, 17));
    if ( result == (int *)1 )
    {
      result = (int *)*v3;
      if ( (unsigned int)*v3 > 3 || result == (int *)1 )
      {
        FIELD_U8(a1, 20) = 0;
        return 0;
      }
    }
  }
  return result;
}
