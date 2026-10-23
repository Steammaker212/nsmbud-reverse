/* SE_PLY_CHANGE_SMALL_ref
 * address: 0x607A7C0C   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CHANGE_SMALL_ref(int a1)
{
  int result; // r0
  int *v3; // r6
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12
  int v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int *v10; // r0
  int (__fastcall ***v11)(_DWORD, int *); // r5
  char v12; // r12
  int v13; // r2
  int v14; // r0
  int v15; // r1

  v3 = (int *)(a1 + 9704);
  result = FIELD_U32(a1, 9704);
  switch ( result )
  {
    case 0:
    case 1:
    case 3:
      v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                  ActorMgr__instance + 27168,
                                                  FIELD_U32(a1, 9720));
      if ( ((unsigned int)&dword_60C7B364 & ~(1618640004 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( !v4 || (result = (**v4)(v4, &StageActor_RTTI)) == 0 )
      {
        result = FIELD_U32(a1, 1204);
        if ( (result & 0x400000) == 0 )
        {
          if ( (result & 0x200000) != 0 )
          {
            if ( *v3 != 4 )
              STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_78A964(PlayerMgr_instance, FIELD_S8(a1, 84));
            v6 = 30;
            *v3 = 4;
            result = 9712;
          }
          else
          {
            sub_607A8240(a1);
            result = 9572;
            v6 = 127;
          }
          *(_DWORD *)(a1 + result) = v6;
        }
      }
      return result;
    case 2:
      result = FIELD_U32(a1, 9712);
      if ( result )
        return result;
      FIELD_U32(a1, 1204) |= 0x200000u;
      if ( !FIELD_U8(a1, 12013) )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) )
        {
LABEL_46:
          result = 3;
          goto LABEL_47;
        }
        if ( !sub_6075EDF8(a1) )
          sub_607A2894((_DWORD *)a1, (_DWORD *)(FIELD_U32(a1, 1320) != 1));
        if ( !sub_6075EDF8(a1) )
          sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_CHANGE_SMALL", 0, 0);
        v14 = a1;
        v15 = 0;
        v13 = 0;
LABEL_45:
        ((void (__fastcall *)(int, int, int))loc_607602AC)(v14, v15, v13);
        goto LABEL_46;
      }
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1384))(a1);
      v7 = FIELD_U32(a1, 1204);
      if ( (v7 & 0x8000) != 0 )
        goto LABEL_20;
      FIELD_U32(a1, 1204) = v7 | 0x4000;
      v8 = dword_60C99DD4;
      v9 = FIELD_U32(dword_60C99DD4, 764);
      if ( v9 == 2 || (FIELD_U8(a1, 1228) & 4) != 0 )
        goto LABEL_19;
      if ( v9 != 1 )
        goto LABEL_18;
      if ( !sub_60766858() )
      {
        v8 = dword_60C99DD4;
LABEL_18:
        sub_603FB9A0(v8, FIELD_S8(a1, 84));
      }
LABEL_19:
      FIELD_U32(a1, 9712) = 30;
LABEL_20:
      if ( (FIELD_U8(a1, 1227) & 0x20) == 0 )
      {
        v10 = sub_60002B90(FIELD_S8(a1, 84), unk_60C263EC);
        sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_DOWN", 0, (int)v10);
      }
      v11 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(
                                                   ActorMgr__instance + 27168,
                                                   FIELD_U32(a1, 9720));
      if ( ((unsigned int)&dword_60C7B364 & ~(1618640440 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v11 )
      {
        v13 = (**v11)(v11, &StageActor_RTTI);
        if ( v13 )
          v13 = (int)v11;
      }
      else
      {
        v13 = 0;
      }
      v14 = a1;
      v15 = 1;
      goto LABEL_45;
    case 4:
      result = FIELD_U32(a1, 9712);
      if ( !result )
      {
        FIELD_U32(a1, 1204) |= 0x400000u;
        sub_607A6720(a1);
        if ( FIELD_U8(a1, 12012) )
          sub_60777FB4(dword_60CBFA90, (int *)a1, 5);
        result = 5;
LABEL_47:
        *v3 = result;
      }
      return result;
    default:
      return result;
  }
}
