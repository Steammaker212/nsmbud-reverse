/* throw_wait_ref_2
 * address: 0x603053A4   size: 1216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall throw_wait_ref_2(int a1)
{
  int result; // r0
  int *v3; // r6
  int *v4; // r5
  int v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r1
  int v9; // r4
  int v10; // t1
  int v11; // r5
  int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r1
  int (__fastcall ***v15)(_DWORD, int *); // r5
  char v16; // r12
  unsigned int v17; // r0
  int v18; // r0
  int (**v19)(); // [sp+0h] [bp-28h] BYREF
  const char *v20; // [sp+4h] [bp-24h]
  int (**v21)(); // [sp+8h] [bp-20h] BYREF
  const char *v22; // [sp+Ch] [bp-1Ch]

  v3 = (int *)(a1 + 7000);
  result = FIELD_U32(a1, 7000);
  switch ( result )
  {
    case 3:
      if ( !sub_60418548(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 4)
        || FIELD_U8(a1, 7008)
        || (FIELD_U8(a1, 7008) = 1, (v14 = FIELD_U32(a1, 6988)) == 0)
        || (v15 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v14)) == 0 )
      {
LABEL_10:
        result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 28);
        if ( (result & 0x20) != 0 )
        {
          FIELD_U32(a1, 7012) = 60 * (FIELD_U32(a1, 20) >> 28);
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92E70);
        }
        return result;
      }
      v17 = FIELD_U32(a1, 7028);
      if ( v17 < 2 )
      {
        if ( ((unsigned int)&dword_60C92F14 & ~(1613780848 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F14) )
        {
          dword_60C92F10 = (int)&off_60BE91C8;
          _cxa_guard_release(&dword_60C92F14);
        }
        if ( (**v15)(v15, &dword_60C92F10) != 1 )
          goto LABEL_44;
        v18 = 6864;
      }
      else if ( v17 == 2 )
      {
        if ( ((unsigned int)&dword_60C92F0C & ~(1613780964 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F0C) )
        {
          dword_60C92F08 = (int)&off_60BD48EC;
          _cxa_guard_release(&dword_60C92F0C);
        }
        if ( (**v15)(v15, &dword_60C92F08) != 1 )
          goto LABEL_44;
        v18 = 7592;
      }
      else
      {
        if ( v17 != 3 )
          goto LABEL_44;
        if ( ((unsigned int)&dword_60C92F24 & ~(1613780708 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F24) )
        {
          dword_60C92F20 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C92F24);
        }
        if ( (**v15)(v15, &dword_60C92F20) != 1 )
          goto LABEL_44;
        v18 = 6309;
      }
      *((_BYTE *)v15 + v18) = 0;
      ((void (__fastcall *)(int, int (__fastcall ***)(_DWORD, int *)))loc_603058D4)(a1, v15);
LABEL_44:
      FIELD_U32(a1, 6988) = 0;
      goto LABEL_10;
    case 2:
      result = a1 + 7016;
      v7 = FIELD_U32(a1, 7016);
      if ( !v7 || (v8 = v7 - 1, (*(_DWORD *)result = v8) == 0) )
      {
        FIELD_U8(a1, 7008) = 0;
        v10 = FIELD_U32(a1, 6952);
        v9 = a1 + 6952;
        v11 = **(_DWORD **)(v10 + 12);
        v21 = &sead__SafeStringBase__vtable;
        v22 = "jugem";
        v12 = LoadResource(ResourceMgrRelated_instance, &v21);
        v19 = &sead__SafeStringBase__vtable;
        v20 = "throw";
        SkeletalAnim_play(v11, v12, (int)&v19);
        *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v9 + 12) + 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v9 + 12) + 4), 0);
        sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v9 + 12) + 4));
        result = 3;
        goto LABEL_16;
      }
      break;
    case 1:
      v4 = (int *)(a1 + 6952);
      if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 4) && !FIELD_U8(a1, 7008) )
      {
        FIELD_U8(a1, 7008) = 1;
        v13 = FIELD_U32(a1, 7028);
        if ( v13 < 2 )
        {
          sub_603048F4(a1);
        }
        else if ( v13 == 2 )
        {
          sub_60304738(a1);
        }
        else if ( v13 == 3 )
        {
          sub_60304AB8(a1);
        }
      }
      result = *v4;
      if ( (*(_BYTE *)(**(_DWORD **)(*v4 + 12) + 28) & 0x20) != 0 )
      {
        FIELD_U32(a1, 7016) = 15;
        v5 = **(_DWORD **)(result + 12);
        v21 = &sead__SafeStringBase__vtable;
        v22 = "jugem";
        v6 = LoadResource(ResourceMgrRelated_instance, &v21);
        v19 = &sead__SafeStringBase__vtable;
        v20 = "throw_wait";
        SkeletalAnim_play(v5, v6, (int)&v19);
        *(_DWORD *)(**(_DWORD **)(*v4 + 12) + 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v4 + 12) + 4), 1);
        sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v4 + 12) + 4));
        result = 2;
LABEL_16:
        *v3 = result;
      }
      break;
  }
  return result;
}
