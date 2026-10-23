/* throw_wait_ref
 * address: 0x60304C74   size: 1668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall throw_wait_ref(int a1)
{
  int result; // r0
  int *v3; // r6
  int *v4; // r5
  char v5; // r12
  unsigned int v6; // r1
  unsigned int *v7; // r7
  int v8; // r5
  int (__fastcall ***v9)(_DWORD, int *); // r5
  char v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r1
  int v14; // r4
  int v15; // t1
  int v16; // r5
  int v17; // r0
  int v18; // r5
  int (__fastcall ***v19)(_DWORD, int *); // r8
  char v20; // r12
  int v21; // r0
  int v22; // r4
  int v23; // r0
  int v24; // r0
  int (__fastcall ***v25)(_DWORD, int *); // r1
  char v26; // r12
  int (**v27)(); // [sp+0h] [bp-28h] BYREF
  const char *v28; // [sp+4h] [bp-24h]
  int (**v29)(); // [sp+8h] [bp-20h] BYREF
  const char *v30; // [sp+Ch] [bp-1Ch]

  if ( Actor__getProfileId((Actor *)a1) == 625 )
    return throw_wait_ref_2(a1);
  v3 = (int *)(a1 + 7000);
  result = FIELD_U32(a1, 7000);
  switch ( result )
  {
    case 3:
      if ( !sub_60418548(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 4)
        || FIELD_U8(a1, 7008)
        || (FIELD_U8(a1, 7008) = 1, v7 = (unsigned int *)(a1 + 6988), (v6 = FIELD_U32(a1, 6988)) == 0) )
      {
LABEL_62:
        result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 28);
        if ( (result & 0x20) != 0 )
        {
          if ( !FIELD_U32(a1, 6992) )
            FIELD_U32(a1, 7012) = 60 * (FIELD_U32(a1, 20) >> 28);
          return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92E70);
        }
        return result;
      }
      if ( FIELD_U32(a1, 6992) == 1 )
      {
        if ( FIELD_U8(a1, 7032) )
        {
          v8 = FIELD_U32(a1, 56);
          if ( ((unsigned int)&dword_60C92F04 & ~(1613778376 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
          {
            dword_60C92F00 = (int)&off_60BC04AC;
            _cxa_guard_release(&dword_60C92F04);
          }
          if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C92F00) == 1 )
            FIELD_U8(v8, 6604) = 1;
          v9 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *v7);
          if ( ((unsigned int)&dword_60C7B418 & ~(1613778532 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
          {
            dword_60C7B414 = (int)&off_60BC00C8;
            _cxa_guard_release(&dword_60C7B418);
          }
          if ( !v9 || (**v9)(v9, &dword_60C7B414) != 1 )
            goto LABEL_61;
          v11 = 1698;
        }
        else
        {
          v9 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
          if ( ((unsigned int)&dword_60C92F0C & ~(1613779464 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F0C) )
          {
            dword_60C92F08 = (int)&off_60BD48EC;
            _cxa_guard_release(&dword_60C92F0C);
          }
          if ( !v9 || (**v9)(v9, &dword_60C92F08) != 1 )
            goto LABEL_61;
          v11 = 1898;
        }
        LOBYTE(v9[v11]) = 0;
        v24 = a1;
        v25 = v9;
      }
      else
      {
        v18 = FIELD_U32(a1, 7028);
        v19 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v6);
        if ( v18 == 3 )
        {
          if ( ((unsigned int)&dword_60C92F24 & ~(1613778940 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F24) )
          {
            dword_60C92F20 = (int)&off_60BC04AC;
            _cxa_guard_release(&dword_60C92F24);
          }
          if ( !v19 || (**v19)(v19, &dword_60C92F20) != 1 )
            goto LABEL_61;
          v21 = 6309;
        }
        else
        {
          if ( ((unsigned int)&dword_60C92F14 & ~(1613779296 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F14) )
          {
            dword_60C92F10 = (int)&off_60BE91C8;
            _cxa_guard_release(&dword_60C92F14);
          }
          if ( !v19 || (**v19)(v19, &dword_60C92F10) != 1 )
            goto LABEL_61;
          v21 = 6864;
        }
        *((_BYTE *)v19 + v21) = 0;
        v24 = a1;
        v25 = v19;
      }
      ((void (__fastcall *)(int, int (__fastcall ***)(_DWORD, int *)))loc_603058D4)(v24, v25);
LABEL_61:
      *v7 = 0;
      goto LABEL_62;
    case 2:
      result = a1 + 7016;
      v12 = FIELD_U32(a1, 7016);
      if ( !v12 || (v13 = v12 - 1, (*(_DWORD *)result = v13) == 0) )
      {
        FIELD_U8(a1, 7008) = 0;
        v15 = FIELD_U32(a1, 6952);
        v14 = a1 + 6952;
        v16 = **(_DWORD **)(v15 + 12);
        v29 = &sead__SafeStringBase__vtable;
        v30 = "jugem";
        v17 = LoadResource(ResourceMgrRelated_instance, &v29);
        v27 = &sead__SafeStringBase__vtable;
        v28 = "throw";
        SkeletalAnim_play(v16, v17, (int)&v27);
        *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v14 + 12) + 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v14 + 12) + 4), 0);
        sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v14 + 12) + 4));
        result = 3;
LABEL_45:
        *v3 = result;
      }
      break;
    case 1:
      v4 = (int *)(a1 + 6952);
      if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 4) && !FIELD_U8(a1, 7008) )
      {
        if ( FIELD_U32(a1, 6992) == 1 )
        {
          if ( FIELD_U32(a1, 7020) >= FIELD_U32(a1, 7024) )
            sub_6030453C(a1);
          else
            sub_60304738(a1);
        }
        else if ( FIELD_U32(a1, 7028) == 3 )
        {
          sub_60304AB8(a1);
        }
        else
        {
          sub_603048F4(a1);
        }
        FIELD_U8(a1, 7008) = 1;
      }
      result = *v4;
      if ( (*(_BYTE *)(**(_DWORD **)(*v4 + 12) + 28) & 0x20) != 0 )
      {
        FIELD_U32(a1, 7016) = 15;
        v22 = **(_DWORD **)(result + 12);
        v29 = &sead__SafeStringBase__vtable;
        v30 = "jugem";
        v23 = LoadResource(ResourceMgrRelated_instance, &v29);
        v27 = &sead__SafeStringBase__vtable;
        v28 = "throw_wait";
        SkeletalAnim_play(v22, v23, (int)&v27);
        *(_DWORD *)(**(_DWORD **)(*v4 + 12) + 24) = 1065353216;
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v4 + 12) + 4), 1);
        sub_6041838C((ModelAnimation *)(**(_DWORD **)(*v4 + 12) + 4));
        result = 2;
        goto LABEL_45;
      }
      break;
  }
  return result;
}
