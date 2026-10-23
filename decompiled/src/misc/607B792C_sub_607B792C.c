/* sub_607B792C
 * address: 0x607B792C   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B792C(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  int result; // r0
  int *v6; // r6
  _DWORD *v7; // r4
  int v8; // t1

  if ( (FIELD_U8(a1, 1217) & 0x10) == 0 )
    return Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
  if ( ((unsigned int)&dword_60C7B374 & ~(1618704760 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( !v2 || (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B370) != 1 || !sub_6079D270(v2, a1) )
    return Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
  v4 = FIELD_U32(a1, 1228);
  FIELD_U32(a1, 1228) = v4 & 0xFFDFFFFF;
  if ( (FIELD_U8(v2, 1217) & 0x20) != 0 )
    FIELD_U32(a1, 1228) = v4 | 0x200000;
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1088))(a1, FIELD_F32(v2, 116));
  result = sub_607B7C9C(a1);
  if ( !result )
  {
    if ( (FIELD_U8(a1, 6907) & 8) != 0 )
      FIELD_U8(a1, 87) = FIELD_U8(v2, 87);
    if ( (FIELD_U8(v2, 1217) & 0x20) != 0 || (result = sub_607B74E0(a1, -0.2 + 3.628, 0.0)) == 0 )
    {
      FIELD_U32(a1, 7104) = FIELD_U32(v2, 7104);
      v6 = (int *)(a1 + 9940);
      result = FIELD_U32(a1, 9940);
      switch ( result )
      {
        case 0:
          goto LABEL_20;
        case 1:
          if ( sub_60793CA8(FIELD_U32(a1, 11360)) == 1 )
            PlayerBase_dispatchVirtual3(a1 + 11356, 20, 0.0);
          result = FIELD_U8(v2, 1217);
          if ( (result & 0x40) == 0 )
          {
            sub_607B7FC0(a1, 10.0);
            result = FIELD_U32(a1, 1216) & 0xFBFFFFFF;
            FIELD_U32(a1, 1216) = result;
          }
          return result;
        case 2:
        case 4:
          if ( sub_60793CA8(FIELD_U32(a1, 11360)) == 1 )
            sub_607B7FC0(a1, 0.0);
LABEL_20:
          if ( sub_607AA954(a1) == 1 )
          {
            *(_DWORD *)(FIELD_U32(a1, 11360) + 208) |= 0x400u;
            sub_60794954(a1 + 11356, 143, 0.0, 0.0);
            sub_60793114(*(_DWORD **)(a1 + 11360), 0.0);
            FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
            FIELD_U32(a1, 12048) = FIELD_U32(a1, 80);
            result = 3;
LABEL_26:
            *v6 = result;
          }
          else
          {
            result = FIELD_U8(v2, 1217);
            if ( (result & 0x40) != 0 )
            {
              v8 = FIELD_U32(a1, 11360);
              v7 = (_DWORD *)(a1 + 11360);
              FIELD_U32(v8, 208) |= 0x400u;
              (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)*v7 + 84))(*v7, 21, 3.0, 0.0, 0.0);
              *v6 = 1;
              *(v7 - 2536) |= 0x4000000u;
              result = -10144;
            }
          }
          break;
        case 3:
          result = sub_60793DA0(FIELD_U32(a1, 11360), 4.0);
          if ( result != 1 )
            return result;
          SE_PLY_THROW_ICEBALL_ref(a1, 0);
          result = 4;
          goto LABEL_26;
        default:
          return result;
      }
    }
  }
  return result;
}
