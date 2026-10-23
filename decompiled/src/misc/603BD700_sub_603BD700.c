/* sub_603BD700
 * address: 0x603BD700   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BD700(int a1)
{
  int v1; // r1
  void *v2; // r1
  void *v3; // r0

  v1 = FIELD_U32(a1, 6352);
  if ( v1 == 2 )
  {
    v2 = *(void **)(a1 + 6832);
    v3 = DrawMgr_instance;
  }
  else
  {
    if ( v1 )
      v2 = **(void ***)(a1 + 6824);
    else
      v2 = *(void **)(a1 + 6828);
    v3 = DrawMgr_instance;
  }
  DrawMgr_drawModel(v3, v2);
  return 1;
}
