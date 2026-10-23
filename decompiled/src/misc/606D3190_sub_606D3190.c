/* sub_606D3190
 * address: 0x606D3190   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D3190(int a1)
{
  int v2; // r0

  sub_6069E178(a1 + 6152, (_DWORD *)a1);
  v2 = FIELD_U32(a1, 164);
  FIELD_U32(a1, 6856) = v2;
  FIELD_U32(a1, 6436) = v2;
  return ShapedCollider_execute((ColliderBase *)(a1 + 6192));
}
