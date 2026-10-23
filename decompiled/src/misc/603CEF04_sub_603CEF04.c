/* sub_603CEF04
 * address: 0x603CEF04   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CEF04(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1

  v4 = FIELD_U16(a1, 6102);
  v2 = (_WORD *)(a1 + 6102);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(LevelInfo_instance, 20) != FIELD_U8(a1, 532) )
    StageActor__delete((StateActor *)a1, 1);
  return 1;
}
