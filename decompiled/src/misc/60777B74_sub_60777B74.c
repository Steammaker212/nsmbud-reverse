/* sub_60777B74
 * address: 0x60777B74   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60777B74(int a1)
{
  int v1; // r1
  int v2; // r1

  v1 = FIELD_U32(a1, 220);
  if ( v1 )
    FIELD_U32(a1, 220) = v1 + 1;
  v2 = FIELD_U32(a1, 56);
  if ( v2 )
    FIELD_U32(a1, 56) = v2 - 1;
  return StateMgr__execute((StateMgr *)(a1 + 36));
}
