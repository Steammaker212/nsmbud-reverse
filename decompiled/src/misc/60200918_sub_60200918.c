/* sub_60200918
 * address: 0x60200918   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60200918(int a1)
{
  unsigned int v2; // r0

  sub_601861EC((Actor *)a1);
  StateMgr__execute((StateMgr *)(a1 + 300));
  v2 = FIELD_U32(a1, 340);
  if ( v2 >= 3 )
    v2 = 0;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 4 * v2 + 268));
  sub_60200954(a1);
  return 1;
}
