/* sub_604C9218
 * address: 0x604C9218   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C9218(int a1)
{
  int v2; // r7
  int v3; // r5
  int a5; // [sp+0h] [bp-20h] BYREF
  int v6; // [sp+4h] [bp-1Ch]

  v2 = 0;
  FIELD_U8(a1, 4854) = 0;
  v6 = 0;
  a5 = 0;
  v3 = a1 + 3800;
  sub_60502B04(a1 + 3800, &a5, 1);
  v6 = 1;
  a5 = 1;
  sub_60502B04(v3, &a5, 1);
  v6 = 2;
  a5 = 2;
  sub_60502B04(v3, &a5, 1);
  v6 = 3;
  a5 = 3;
  sub_60502B04(v3, &a5, 1);
  FIELD_U32(a1, 4828) = 256;
  sub_60502548(v3);
  FIELD_U16(a1, 4852) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3840));
  if ( FIELD_U32(a1, 615700) < 0xAu )
    v2 = FIELD_U32(a1, 615700);
  return StateMgr__changeState((StateMgr *)(a1 + 52644 * v2 + 89268), &stru_60CA3DF8);
}
