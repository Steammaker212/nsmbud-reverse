/* sub_606754FC
 * address: 0x606754FC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606754FC(int a1)
{
  int v2; // r5
  _BYTE *v3; // r7
  int v4; // r6
  int result; // r0

  v3 = (_BYTE *)(a1 + 8384);
  v2 = FIELD_U8(a1, 8384);
  v4 = **(_DWORD **)(a1 + 6116);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 52))(v4);
  sub_60675744(a1, v4, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 56))(v4);
  *v3 = 1;
  ShapedCollider_execute((ColliderBase *)(a1 + 6392));
  if ( FIELD_U8(a1, 7704) )
    ShapedCollider_execute((ColliderBase *)(a1 + 7048));
  result = FIELD_U8(a1, 8368);
  if ( FIELD_U8(a1, 8368) )
    return ShapedCollider_execute((ColliderBase *)(a1 + 7712));
  return result;
}
