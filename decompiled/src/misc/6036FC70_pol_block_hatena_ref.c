/* pol_block_hatena_ref
 * address: 0x6036FC70   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall pol_block_hatena_ref(int a1)
{
  _DWORD *v2; // r6
  int result; // r0
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r5
  int v7; // r8
  int ResArchiveById; // r0
  int v9; // r0
  _DWORD v10[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (_DWORD *)(a1 + 6300);
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6300) + 28));
  result = v2[10];
  if ( result != 1 )
  {
    result = FIELD_U8(a1, 6388);
    if ( !FIELD_U8(a1, 6388) )
    {
      v4 = **(_DWORD **)(*v2 + 28);
      if ( (FIELD_U8(v4, 28) & 0x20) == 0 )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        result = (*(int (**)(void))(dword_60C95F80 + 8))();
        if ( v6 != result )
          return result;
        v4 = **(_DWORD **)(*v2 + 28);
      }
      v7 = FIELD_U32(v4, 20);
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v10[0] = &sead__SafeStringBase__vtable;
      v10[1] = "pol_block_hatena";
      ShuAnim_play((_DWORD *)v4, ResArchiveById, (int)v10);
      v9 = **(_DWORD **)(*v2 + 28);
      FIELD_U32(v9, 20) = v7;
      FIELD_U32(v9, 28) |= 2u;
      FIELD_U8(a1, 6388) = 1;
      return 1;
    }
  }
  return result;
}
