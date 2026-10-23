/* sub_601A7F80
 * address: 0x601A7F80   size: 1036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A7F80(int a1)
{
  int v2; // r5
  char v3; // r12
  StateBase *v4; // r1
  int *v5; // r5
  const void *v6; // r8
  signed int v7; // r7
  bool v8; // cc
  _DWORD *v9; // r0
  char v10; // r12
  StateBase *CurrentState; // r0
  int v12; // r5
  int result; // r0
  int (**v14)(); // [sp+8h] [bp-30h] BYREF
  int *v15; // [sp+Ch] [bp-2Ch]
  int v16; // [sp+10h] [bp-28h]
  int v17; // [sp+14h] [bp-24h] BYREF
  int v18; // [sp+1Ch] [bp-1Ch]

  v2 = dword_60C8996C;
  v18 = sub_6019112C(dword_60C8996C);
  if ( !FIELD_U8(v2, 1384) )
    goto LABEL_27;
  switch ( v18 )
  {
    case 336:
      v4 = (StateBase *)&dword_60C8A294;
LABEL_26:
      StateMgr__changeState((StateMgr *)(a1 + 296), v4);
      break;
    case 334:
      FIELD_U32(a1, 128) = 1072064102;
      FIELD_U32(a1, 132) = 1072064102;
      FIELD_U32(a1, 136) = 1072064102;
      v15 = &v17;
      v14 = &BufferedSafeStringBase_char_vtable_probably;
      v16 = 8;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14);
      v14 = &off_60BD58EC;
      v5 = v15;
      (*(void (__fastcall **)(int *))(dword_60C8A39C + 12))(&dword_60C8A39C);
      v6 = (const void *)dword_60C8A3A0;
      if ( v5 != (int *)dword_60C8A3A0 )
      {
        (*(void (__fastcall **)(int *))(dword_60C8A39C + 12))(&dword_60C8A39C);
        v7 = 0;
        while ( *(_BYTE *)(dword_60C8A3A0 + v7) )
        {
          if ( !*(_BYTE *)(dword_60C8A3A0 + v7 + 1) )
          {
            ++v7;
            break;
          }
          if ( !*(_BYTE *)(dword_60C8A3A0 + v7 + 2) )
          {
            v7 += 2;
            break;
          }
          v8 = v7 + 2 < 0x80000;
          v7 += 3;
          if ( !v8 )
          {
            v7 = 0;
            break;
          }
        }
        if ( v7 >= v16 )
          v7 = v16 - 1;
        qmemcpy(v5, v6, v7);
        *((_BYTE *)v5 + v7) = 0;
      }
      v14 = &off_60BD4B8C;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v14);
      v9 = (_DWORD *)sub_601E0404(6, -1, v15);
      FIELD_U32(a1, 80) = v9[18];
      FIELD_U32(a1, 84) = v9[19];
      FIELD_U32(a1, 88) = v9[20];
      if ( ((unsigned int)&dword_60C8A350[1] & ~(1612349896 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8A350[1]) )
      {
        dword_60C8A360 = (int)&sead__SafeStringBase__vtable;
        dword_60C8A364 = (int)"Fk01";
        _cxa_guard_release(&dword_60C8A350[1]);
      }
      sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 452), 7, 0, (int)&dword_60C8A360);
      FIELD_U32(a1, 180) = sub_608332B0(a1 + 80, a1 + 452);
      v4 = (StateBase *)&unk_60C8A2DC;
      goto LABEL_26;
    case 315:
      if ( ((unsigned int)dword_60C8A350 & ~(1612349412 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C8A350) )
      {
        dword_60C8A358 = (int)&sead__SafeStringBase__vtable;
        dword_60C8A35C = (int)"W1T0";
        _cxa_guard_release(dword_60C8A350);
      }
      sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 452), 0, 0, (int)&dword_60C8A358);
      break;
  }
LABEL_27:
  switch ( v18 )
  {
    case 315:
      StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8A2B8);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 334:
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 296));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      result = (*(int (**)(void))(dword_60C8A300 + 8))();
      if ( v12 != result )
        return result;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 335:
      if ( FIELD_S32(a1, 500) >= 0 )
        sub_601E4F60(dword_60C8B13C);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 336:
      if ( FIELD_S32(a1, 500) >= 0 )
      {
        sub_601E4F60(dword_60C8B13C);
        FIELD_U32(a1, 500) = -1;
      }
      FIELD_U8(a1, 19) = 1;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    default:
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
}
