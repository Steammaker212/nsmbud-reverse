/* sub_602077DC
 * address: 0x602077DC   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602077DC(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r4
  char *v5; // r6
  int *v6; // r7
  int *v7; // r5
  int *v8; // r7
  char *v9; // r9
  char *v10; // t1
  signed int v11; // r5
  int v12; // r0
  bool v13; // cc
  _DWORD *v14; // r0
  int v15; // r1
  int *v16; // r6
  char v17; // r12
  int *v18; // r4
  int v19; // r7
  int v20; // r0
  bool v21; // zf
  int v22; // r5
  int v23; // r1
  int v24; // r2
  _DWORD *v25; // r0
  int v26; // r1
  _DWORD *v27; // r0
  int v28; // r1
  unsigned int v29; // r2
  unsigned int v30; // r0
  int (**v31)(); // [sp+14h] [bp-44h] BYREF
  const char *v32; // [sp+18h] [bp-40h]
  int v33; // [sp+1Ch] [bp-3Ch]
  int v34; // [sp+20h] [bp-38h] BYREF

  v2 = FIELD_U32(a1, 356);
  if ( v2 )
  {
    result = v2 - 1;
    FIELD_U32(a1, 356) = result;
    if ( !result )
    {
      v4 = FIELD_U32(a1, 360);
      if ( v4 > 1 )
      {
        v16 = (int *)sub_601693A0(860);
        v18 = *(int **)(ActorMgr__instance + 27180);
        while ( 1 )
        {
          v19 = *v16;
          if ( ((unsigned int)&dword_60C8B0EC & ~(1612741072 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C8B0EC) )
          {
            dword_60C8B0E8 = (int)&off_60BD4E08;
            _cxa_guard_release(&dword_60C8B0EC);
          }
          if ( v19 )
          {
            v20 = (**(int (__fastcall ***)(int, int *))v19)(v19, &dword_60C8B0E8);
            v21 = v20 == 1;
            if ( v20 == 1 )
              v21 = FIELD_U32(v19, 240) == 0;
            if ( v21 )
              break;
          }
          if ( v16 != v18 )
          {
            v16 = (int *)sub_601693C0(860, (int)(v16 + 1));
            if ( v16 != v18 )
              continue;
          }
          v22 = a1 + 328;
          goto LABEL_32;
        }
        v23 = FIELD_U32(v19, 276);
        v24 = FIELD_U32(v19, 280);
        FIELD_U32(a1, 328) = FIELD_U32(v19, 272);
        v22 = a1 + 328;
        FIELD_U32(a1, 332) = v23;
        FIELD_U32(a1, 336) = v24;
      }
      else
      {
        v32 = (const char *)&v34;
        v31 = &BufferedSafeStringBase_char_vtable_probably;
        v33 = 8;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v31);
        v31 = &off_60BD58EC;
        v5 = (char *)v32;
        v6 = &dword_60C8C7C0[2 * v4];
        v7 = v6 + 3;
        (*(void (__fastcall **)(int *))(v6[3] + 12))(v6 + 3);
        v10 = (char *)v6[4];
        v8 = v6 + 4;
        v9 = v10;
        if ( v5 != v10 )
        {
          (*(void (__fastcall **)(int *))(*v7 + 12))(v7);
          v11 = 0;
          v12 = *v8;
          while ( *(_BYTE *)(v12 + v11) )
          {
            if ( !*(_BYTE *)(v12 + v11 + 1) )
            {
              ++v11;
              break;
            }
            if ( !*(_BYTE *)(v12 + v11 + 2) )
            {
              v11 += 2;
              break;
            }
            v13 = v11 + 2 < 0x80000;
            v11 += 3;
            if ( !v13 )
            {
              v11 = 0;
              break;
            }
          }
          if ( v11 >= v33 )
            v11 = v33 - 1;
          qmemcpy(v5, v9, v11);
          v5[v11] = 0;
        }
        v22 = a1 + 328;
        v31 = &off_60BD4B8C;
        sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 328), 0, 0, (int)&v31);
      }
LABEL_32:
      v25 = *(_DWORD **)(a1 + 268);
      v26 = FIELD_U32(a1, 272);
      v31 = &sead__SafeStringBase__vtable;
      v32 = "jumpA";
      sub_60421938(v25, v26, (int)&v31);
      v27 = *(_DWORD **)(a1 + 268);
      v28 = v27[3];
      v29 = v27[2];
      v30 = v27[17];
      if ( v29 > v30 )
        v28 += 4 * v30;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v28 + 4), 0);
      return ((int (__fastcall *)(int, int, _DWORD, int, float, float, float, int, int *))loc_60185F9C)(
               a1,
               v22,
               0,
               40,
               15.0,
               FIELD_F32(a1, 344),
               FIELD_F32(a1, 344),
               40,
               &dword_60B3B974);
    }
  }
  else
  {
    result = sub_601860F8(a1);
    if ( result == 1 )
    {
      v14 = *(_DWORD **)(a1 + 268);
      v15 = FIELD_U32(a1, 272);
      v31 = &sead__SafeStringBase__vtable;
      v32 = "wait";
      sub_60421938(v14, v15, (int)&v31);
      result = FIELD_U32(a1, 360);
      FIELD_U32(a1, 356) = 15;
      FIELD_U32(a1, 360) = result + 1;
      if ( result >= 2 )
        return (int)StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&unk_60C8C750);
    }
  }
  return result;
}
