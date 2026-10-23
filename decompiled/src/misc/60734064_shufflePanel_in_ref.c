/* shufflePanel_in_ref
 * address: 0x60734064   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall shufflePanel_in_ref(int a1)
{
  signed int result; // r0
  _BYTE *v3; // r6
  int v4; // r0
  signed int *v5; // r7
  char v6; // r1
  unsigned int *v7; // r4
  int v8; // t1
  int v9; // r5
  int ResArchiveById; // r0
  const char *v11[2]; // [sp+4h] [bp-24h] BYREF
  signed int v12; // [sp+Ch] [bp-1Ch] BYREF

  v3 = (_BYTE *)(a1 + 6780);
  result = FIELD_U8(a1, 6780);
  switch ( result )
  {
    case 0:
      v11[0] = (const char *)0x80000000;
      v12 = 71582788;
      result = sub_6083246C((int *)(a1 + 160), (int *)v11, &v12);
      if ( result == 1 )
      {
        ++*v3;
        *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 24) = 0;
        FIELD_U32(a1, 6764) = 60;
        result = 6764;
      }
      break;
    case 1:
      v5 = (signed int *)(a1 + 6764);
      v4 = FIELD_U32(a1, 6764);
      if ( v4 )
      {
        result = v4 - 1;
      }
      else
      {
        v8 = FIELD_U32(a1, 6100);
        v7 = (unsigned int *)(a1 + 6100);
        v9 = **(_DWORD **)(v8 + 12);
        ResArchiveById = Profile__getResArchiveById((Profile *)*(v7 - 1522), v7[1497]);
        v11[0] = (const char *)&sead__SafeStringBase__vtable;
        v11[1] = "shufflePanel_in";
        SkeletalAnim_play(v9, ResArchiveById, v11);
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v7 + 12) + 4), 0);
        *(_DWORD *)(**(_DWORD **)(*v7 + 12) + 24) = 1065353216;
        ++*v3;
        result = 3;
      }
      *v5 = result;
      break;
    case 2:
      result = *(unsigned __int8 *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 28);
      if ( (result & 0x20) != 0 )
      {
        v6 = 0;
        *v3 = 3;
        result = 6761;
        goto LABEL_9;
      }
      break;
    case 3:
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDD80);
      result = 6768;
      v6 = 1;
LABEL_9:
      *(_BYTE *)(a1 + result) = v6;
      break;
    default:
      return result;
  }
  return result;
}
