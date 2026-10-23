/* sub_60210220
 * address: 0x60210220   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60210220(int a1)
{
  StateMethodExecuter *result; // r0
  int a5; // [sp+0h] [bp-18h] BYREF
  signed int v4; // [sp+4h] [bp-14h] BYREF

  v4 = 0x20000000;
  a5 = 83886080;
  sub_608322C0((int *)(a1 + 180), (int *)(a1 + 384), &v4, &a5);
  result = *(StateMethodExecuter **)(a1 + 180);
  if ( result == *(StateMethodExecuter **)(a1 + 384) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CF34);
  }
  return result;
}
