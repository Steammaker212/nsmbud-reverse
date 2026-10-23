/* sub_605BA9F0
 * address: 0x605BA9F0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BA9F0(int a1)
{
  __int16 v2; // r0
  int v4; // [sp+4h] [bp-54h] BYREF
  _BYTE v5[80]; // [sp+8h] [bp-50h] BYREF

  memset(v5, 0, 64);
  v4 = 0;
  v2 = sub_606BAB1C(v5, &v4, a1 + 7456);
  FIELD_U16(a1, 8170) = v2;
  if ( v2 )
  {
    sub_605BB7F0(a1 + 6100);
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 8112, a1 + 108);
    return ShapedCollider_execute((ColliderBase *)(a1 + 7456));
  }
  else
  {
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB06D8);
    return sub_605BB7F0(a1 + 6100);
  }
}
