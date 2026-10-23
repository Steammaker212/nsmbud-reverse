/* SE_PLY_CH_YOSHI_BLLN_FLY_ref
 * address: 0x60599424   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_PLY_CH_YOSHI_BLLN_FLY_ref(int a1)
{
  int v2; // r5
  int v3; // r0
  bool v4; // zf
  int *v5; // r0
  int v6; // r1

  v2 = a1 + 8036;
  sub_6059B84C(a1 + 8036);
  v3 = sub_605DBDAC(a1);
  v4 = v3 == 0;
  if ( v3 )
    v4 = (FIELD_U8(v3, 1221) & 0x40) == 0;
  if ( !v4 )
  {
    v5 = sub_60002B90(FIELD_S8(a1, 6336), unk_60C263F4);
    sub_605D8938(a1, "SE_PLY_CH_YOSHI_BLLN_FLY", v5);
    sub_6059BDD4(v2);
    FIELD_U8(a1, 13888) = 1;
  }
  v6 = FIELD_U32(a1, 13472);
  if ( v6 )
    FIELD_U32(a1, 13472) = v6 - 1;
  return StateMgr__execute((StateMgr *)(a1 + 13452));
}
