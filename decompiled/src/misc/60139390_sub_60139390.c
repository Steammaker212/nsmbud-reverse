/* sub_60139390
 * address: 0x60139390   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60139390(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // [sp+4h] [bp-14h] BYREF
  int v5; // [sp+8h] [bp-10h]
  int v6; // [sp+Ch] [bp-Ch]

  v2 = FIELD_U32(a1, 6660);
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_U32(a1, 6656);
  v5 = v2;
  v6 = v3;
  if ( sub_608332CC(a1 + 108, &v4, 0.5, 1.5, 0.25) < 1.0 )
  {
    FIELD_U32(a1, 108) = v4;
    FIELD_U32(a1, 112) = v5;
    FIELD_U32(a1, 116) = v6;
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C879EC);
  }
}
