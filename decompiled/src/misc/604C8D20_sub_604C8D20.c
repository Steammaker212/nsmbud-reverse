/* sub_604C8D20
 * address: 0x604C8D20   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C8D20(int a1)
{
  int v2; // r7
  int a5; // [sp+0h] [bp-20h] BYREF
  int v5; // [sp+4h] [bp-1Ch]

  v2 = 0;
  FIELD_U8(a1, 4843) = 0;
  FIELD_U8(a1, 4840) = 1;
  FIELD_U8(a1, 4844) = 1;
  FIELD_U8(a1, 4854) = 1;
  sub_604D3944(a1);
  sub_604D3C50(a1);
  v5 = 0;
  a5 = 0;
  sub_60502C84(a1 + 3800, &a5, 0);
  v5 = 1;
  a5 = 1;
  sub_60502C84(a1 + 3800, &a5, 0);
  v5 = 2;
  a5 = 2;
  sub_60502C84(a1 + 3800, &a5, 0);
  v5 = 3;
  a5 = 3;
  sub_60502C84(a1 + 3800, &a5, 0);
  if ( FIELD_U32(a1, 615700) < 0xAu )
    v2 = FIELD_U32(a1, 615700);
  return StateMgr__changeState((StateMgr *)(a1 + 52644 * v2 + 89268), &stru_60CA3DD8);
}
