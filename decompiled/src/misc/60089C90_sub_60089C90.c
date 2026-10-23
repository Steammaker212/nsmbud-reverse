/* sub_60089C90
 * address: 0x60089C90   size: 1300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60089C90(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r5
  int v8; // r0
  int v9; // r4
  int v10; // r5
  bool v11; // zf
  int v12; // r1
  StateBase *CurrentState; // r0
  int v14; // r6
  char v15; // r12
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  int v19; // r1
  StateBase *v20; // r0
  int v21; // r6
  char v22; // r12
  StateBase *v23; // r0
  int v24; // r6
  _BOOL4 v25; // r1
  float v26; // s0
  void (__fastcall *v27)(int, int *); // r2
  int *v28; // r1
  _BOOL4 v29; // r1
  float v30; // s0
  unsigned int v31; // r0

  v7 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 7244);
  if ( ((unsigned int)&dword_60C81104 & ~(1611177144 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &dword_60C81100);
    if ( v8 )
      v8 = (int)v7;
    v9 = a3 + 64;
    v10 = FIELD_U32(a3, 64);
    v11 = v8 == 0;
    if ( v8 )
      v11 = v10 == 0;
    if ( !v11 )
    {
      v12 = FIELD_S8(v10, 84);
      if ( FIELD_U32(v8, 15240) == v12 )
        return;
      if ( (unsigned __int8)v12 >= 4u )
        v12 = 0;
      if ( *(int *)(v8 + 4 * v12 + 9460) > 0 )
        return;
      goto LABEL_17;
    }
  }
  else
  {
    v9 = a3 + 64;
    v10 = FIELD_U32(a3, 64);
  }
  if ( !v10 )
    return;
LABEL_17:
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v14 == (*(int (**)(void))(dword_60C81D6C + 8))() )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 88))(a1) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1611177436 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      v16 = (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C7B370);
      v17 = v16 == 1;
      if ( v16 == 1 )
        v17 = (FIELD_U8(v10, 1212) & 0x40) == 0;
      if ( v17 && (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 1432))(v10, a1, 1) == 1 )
      {
        FIELD_U32(a1, 7692) = FIELD_S8(v10, 84);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 68))(a1);
        v27 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
        v28 = &dword_60C81D4C;
        goto LABEL_46;
      }
    }
    v18 = *(_DWORD *)v9;
    if ( (*(_BYTE *)(*(_DWORD *)v9 + 1216) & 0x10) != 0 )
      goto LABEL_45;
    v19 = FIELD_U32(v18, 1208);
    if ( (v19 & 0x10000) != 0 )
    {
      if ( FIELD_U32(v18, 1320) == 3 || (v19 & 0x100000) != 0 )
        goto LABEL_45;
    }
    else if ( (v19 & 0x100000) != 0 )
    {
      goto LABEL_45;
    }
    if ( (FIELD_U8(v18, 1212) & 0x40) != 0 )
    {
LABEL_45:
      FIELD_U8(a1, 84) = FIELD_U8(v10, 84);
      v29 = FIELD_F32(v10, 108) > FIELD_F32(a1, 108);
      v30 = (float)byte_60AFE3F4[v29];
      FIELD_U32(a1, 80) = v29;
      FIELD_F32(a1, 120) = (float)(v30 * 3.5) * 1.5;
      FIELD_U32(a1, 124) = 1075838976;
      FIELD_U32(a1, 128) = 0;
      v27 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
      v28 = &dword_60C81D8C;
      goto LABEL_46;
    }
LABEL_37:
    FIELD_U8(a1, 84) = FIELD_U8(v10, 84);
    v25 = FIELD_F32(v10, 108) > FIELD_F32(a1, 108);
    v26 = (float)byte_60AFE3F4[v25];
    FIELD_U32(a1, 80) = v25;
    FIELD_F32(a1, 120) = v26 * 3.5;
    FIELD_U32(a1, 124) = 1075838976;
    FIELD_U32(a1, 128) = 0;
    v27 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v28 = &dword_60C81D8C;
LABEL_46:
    v27(a1, v28);
    return;
  }
  v20 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v20, 0x0) + 2))(v20);
  if ( v21 == (*(int (**)(void))(dword_60C81D4C + 8))() )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1611177644 << v22) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C7B370) == 1
      && FIELD_U32(v10, 11408) == FIELD_U32(a1, 8) )
    {
      sub_6008A214(a1, a2, a3);
    }
  }
  else
  {
    v23 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v24 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v23, 0x0) + 2))(v23);
    if ( v24 == (*(int (**)(void))(dword_60C81D8C + 8))() )
      goto LABEL_37;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 884))(a1) == 1 )
      goto LABEL_41;
    if ( sub_6008A214(a1, a2, a3) )
      return;
    if ( (*(_BYTE *)(*(_DWORD *)v9 + 1217) & 1) != 0 )
    {
      v31 = *(char *)(*(_DWORD *)v9 + 84);
      if ( v31 <= 3 )
        *(_WORD *)(a1 + 2 * v31 + 6140) = 32;
    }
    else
    {
LABEL_41:
      Enemy__collisionPlayer(a1, a2, a3);
    }
  }
}
