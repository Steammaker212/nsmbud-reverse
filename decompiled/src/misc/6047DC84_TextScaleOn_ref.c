/* TextScaleOn_ref
 * address: 0x6047DC84   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TextScaleOn_ref(int a1, int *a2)
{
  int v3; // r0
  int v4; // r0

  v3 = sub_6085982C(a1, "TextScaleOn");
  if ( !v3 )
  {
    v4 = 1060320051;
    goto LABEL_5;
  }
  if ( a2 )
  {
    v4 = *(_DWORD *)(v3 + FIELD_U32(v3, 4));
LABEL_5:
    *a2 = v4;
  }
  return 1;
}
