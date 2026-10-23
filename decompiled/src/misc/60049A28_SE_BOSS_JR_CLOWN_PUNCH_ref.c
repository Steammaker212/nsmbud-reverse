/* SE_BOSS_JR_CLOWN_PUNCH_ref
 * address: 0x60049A28   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_PUNCH_ref(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  int v5; // r6
  _DWORD *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  _DWORD *v9; // r1
  unsigned int v10; // r0
  _DWORD *v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  float v14; // r1
  _DWORD *v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r2
  _DWORD *v18; // r3
  int v19; // r0
  float v20; // r1
  _BOOL4 v21; // r1
  StateBase *CurrentState; // r0
  int v23; // r5
  Vec3 v24[3]; // [sp+0h] [bp-28h] BYREF

  v3 = (_DWORD *)(a1 + 11492);
  result = FIELD_U32(a1, 11492);
  if ( result == 2 )
  {
    result = FIELD_U16(a1, 6278);
    if ( !FIELD_U16(a1, 6278) )
    {
      v21 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11452) + 724))(FIELD_U32(a1, 11452)) == 1;
      (*(void (__fastcall **)(int, _BOOL4))(*(_DWORD *)a1 + 780))(a1, v21);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(FIELD_U32(a1, 11452) + 6084));
      v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v23 != (*(int (**)(void))(dword_60C800E4 + 8))() )
        (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 11452) + 192))(
          FIELD_U32(a1, 11452),
          &dword_60C84148);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C802A8);
      result = FIELD_U32(a1, 11532) + 1;
      FIELD_U32(a1, 11532) = result;
    }
  }
  else if ( result == 1 )
  {
    v5 = a1 + 6304;
    v4 = *(_DWORD **)(a1 + 6304);
    v6 = (_DWORD *)v4[3];
    v7 = v4[2];
    v8 = v4[17];
    if ( v7 > v8 )
      v6 += v8;
    if ( sub_60418548(*v6 + 4) )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 1);
    v9 = *(_DWORD **)(*(_DWORD *)v5 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v10 )
      v9 += v10;
    if ( sub_60418548(*v9 + 4) )
      goto LABEL_13;
    v11 = *(_DWORD **)(*(_DWORD *)v5 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v12 )
      v11 += v12;
    if ( sub_60418548(*v11 + 4) )
    {
LABEL_13:
      sub_60813430(a1 + 7008, "SE_BOSS_JR_CLOWN_PUNCH", 0);
      v13 = sub_600D1798(a1);
      v14 = *(float *)v13;
      v24[0].y = FIELD_F32(v13, 4);
      v24[0].x = v14;
      v24[0].z = 4500.0;
      EffectData_create(1073, v24, a1 + 156, 0);
    }
    v15 = *(_DWORD **)(*(_DWORD *)v5 + 12);
    v16 = *(_DWORD *)(*(_DWORD *)v5 + 8);
    v17 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    v18 = v15;
    if ( v16 > v17 )
      v18 = &v15[v17];
    if ( (*(_BYTE *)(*v18 + 28) & 0x10) != 0 )
    {
      sub_60045DB4(a1, 2, 1, 0, 0.0, 1.0);
      FIELD_U16(a1, 6278) = 20;
      *v3 = 2;
      v15 = *(_DWORD **)(*(_DWORD *)v5 + 12);
      v16 = *(_DWORD *)(*(_DWORD *)v5 + 8);
      v17 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    }
    if ( v16 > v17 )
      v15 += v17;
    result = sub_60418548(*v15 + 4);
    if ( result == 1 )
    {
      v19 = sub_600D1798(a1);
      v20 = *(float *)v19;
      v24[0].y = FIELD_F32(v19, 4);
      v24[0].x = v20;
      v24[0].z = 4500.0;
      return EffectData_create(1072, v24, a1 + 156, 0);
    }
  }
  return result;
}
