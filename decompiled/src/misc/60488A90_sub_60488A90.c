/* sub_60488A90
 * address: 0x60488A90   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60488A90(int a1)
{
  StateMethodExecuter *result; // r0
  bool v3; // zf
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  StateBase *v9; // r1
  StateMethodExecuter *v10; // [sp+4h] [bp-1Ch]

  v10 = *(StateMethodExecuter **)(a1 + 47720);
  result = v10;
  if ( v10 == (StateMethodExecuter *)4 )
  {
    FIELD_U32(a1, 13820) = 3;
    v9 = (StateBase *)&unk_60C9F560;
    return StateMgr__changeState((StateMgr *)(a1 + 20), v9);
  }
  v3 = v10 == (StateMethodExecuter *)7;
  if ( v10 != (StateMethodExecuter *)7 )
    v3 = v10 == (StateMethodExecuter *)5;
  if ( v3 )
  {
    v4 = a1 + 5848;
    v5 = dword_60C9FDDC;
    if ( (unsigned int)dword_60C9FDDC >= 7 )
      v5 = 0;
    sub_60502C84(a1 + 3768, v4 + 4 * v5, 0);
    v6 = dword_60C9FDE0;
    if ( (unsigned int)dword_60C9FDE0 >= 7 )
      v6 = 0;
    sub_60502C84(a1 + 3768, v4 + 4 * v6, 0);
    v7 = dword_60C9FDE4;
    if ( (unsigned int)dword_60C9FDE4 >= 7 )
      v7 = 0;
    sub_60502C84(a1 + 3768, v4 + 4 * v7, 0);
    v8 = dword_60C9FDE8;
    if ( (unsigned int)dword_60C9FDE8 >= 7 )
      v8 = 0;
    sub_60502C84(a1 + 3768, v4 + 4 * v8, 0);
    sub_608169AC(dword_60CC6B68);
    v9 = (StateBase *)&unk_60C9F6C0;
    return StateMgr__changeState((StateMgr *)(a1 + 20), v9);
  }
  return result;
}
