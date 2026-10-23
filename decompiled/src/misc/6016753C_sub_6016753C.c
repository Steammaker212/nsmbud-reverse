/* sub_6016753C
 * address: 0x6016753C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6016753C(_DWORD *a1)
{
  int v2; // r7
  _DWORD *v3; // r0

  *a1 = off_60BD4A7C;
  if ( (_DWORD *)dword_60C88A6C == a1 )
  {
    dword_60C88A6C = 0;
    v2 = dword_60C88A70;
    ShapedCollider_dtor((ColliderBase *)(dword_60C88A70 + 1136));
    ShapedCollider_dtor((ColliderBase *)(v2 + 552));
    SolidOnTopCollider_dtor((ColliderBase *)(v2 + 104));
    dword_60C88A70 = 0;
  }
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}
