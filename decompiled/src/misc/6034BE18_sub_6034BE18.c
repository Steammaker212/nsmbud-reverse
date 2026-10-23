/* sub_6034BE18
 * address: 0x6034BE18   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034BE18(int a1)
{
  int v2; // r1
  void *v3; // r0
  void *v4; // r1

  v2 = FIELD_U32(a1, 6352);
  v3 = DrawMgr_instance;
  if ( !v2 )
  {
    v4 = *(void **)(a1 + 6828);
    goto LABEL_5;
  }
  DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 6824));
  if ( sub_6068C438(MaskMgr_instance) == 1 )
  {
    v4 = **(void ***)(a1 + 6832);
    v3 = DrawMgr_instance;
LABEL_5:
    DrawMgr_drawModel(v3, v4);
  }
  return 1;
}
