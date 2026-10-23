/* sub_604CA814
 * address: 0x604CA814   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CA814(int a1)
{
  int v2; // r7
  int v3; // r0
  int v5; // [sp+8h] [bp-20h] BYREF
  int v6; // [sp+Ch] [bp-1Ch]

  v2 = 0;
  FIELD_U32(a1, 4828) = 1;
  FIELD_U8(a1, 4843) = 0;
  FIELD_U8(a1, 4840) = 1;
  FIELD_U8(a1, 4844) = 1;
  FIELD_U8(a1, 4854) = 1;
  FIELD_U32(a1, 615716) = -1;
  sub_604D3944(a1);
  sub_604D3C50(a1);
  v6 = 0;
  v5 = 0;
  sub_60502C84(a1 + 3800, &v5, 0);
  v6 = 1;
  v5 = 1;
  sub_60502C84(a1 + 3800, &v5, 0);
  v6 = 2;
  v5 = 2;
  sub_60502C84(a1 + 3800, &v5, 0);
  v6 = 3;
  v5 = 3;
  sub_60502C84(a1 + 3800, &v5, 0);
  if ( FIELD_U32(a1, 615700) < 0xAu )
    v2 = FIELD_U32(a1, 615700);
  v3 = a1 + 52644 * v2;
  FIELD_U32(v3, 94176) = 256;
  return StateMgr__changeState((StateMgr *)(v3 + 89268), &stru_60CA3E18);
}
