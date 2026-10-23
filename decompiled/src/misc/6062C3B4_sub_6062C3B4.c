/* sub_6062C3B4
 * address: 0x6062C3B4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062C3B4(int a1)
{
  int v2; // r0

  if ( FIELD_U8(dword_60CC6D8C, 17) && Actor__getProfileId((Actor *)a1) == 742
    || (StageActor__cullCheck((StageActor *)a1, 0), !v2) )
  {
    StateMgr__execute((StateMgr *)(a1 + 6104));
    sub_6062C244(a1);
  }
  return 1;
}
