/* sub_604C9E84
 * address: 0x604C9E84   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C9E84(int a1)
{
  int v2; // r7
  int v3; // r0
  int a5; // [sp+0h] [bp-20h] BYREF
  int v6; // [sp+4h] [bp-1Ch]

  v2 = 0;
  a5 = (int)&sead__SafeStringBase__vtable;
  v6 = sub_604DABE0(3);
  sub_60473DE4((_DWORD *)(a1 + 40), 4u, &a5, 0);
  v3 = sub_604DABE0(10);
  a5 = (int)&sead__SafeStringBase__vtable;
  v6 = v3;
  sub_604741D8((_DWORD *)(a1 + 40), 6u, &a5, 0);
  if ( FIELD_U32(a1, 615700) < 0xAu )
    v2 = FIELD_U32(a1, 615700);
  return StateMgr__changeState((StateMgr *)(a1 + 52644 * v2 + 89268), &stru_60CA3EF8);
}
