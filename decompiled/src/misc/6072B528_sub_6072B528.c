/* sub_6072B528
 * address: 0x6072B528   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072B528(int a1)
{
  _BYTE *v2; // r0
  char v3; // r1
  int v4; // t1

  v4 = FIELD_U8(a1, 6305);
  v2 = (_BYTE *)(a1 + 6305);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  if ( FIELD_U8(a1, 6307) )
    --FIELD_U8(a1, 6307);
  if ( FIELD_U8(a1, 6308) )
    --FIELD_U8(a1, 6308);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  hoto_rotate_ref(a1);
  return 1;
}
