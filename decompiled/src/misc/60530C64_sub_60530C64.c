/* sub_60530C64
 * address: 0x60530C64   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60530C64(int a1)
{
  int result; // r0
  unsigned int i; // r5
  unsigned int v4; // r0
  int v5; // r6

  result = FIELD_U32(a1, 64);
  if ( result >= 1 )
  {
    for ( i = 0; (int)i < result; ++i )
    {
      v4 = 0;
      if ( i < 4 )
        v4 = i;
      v5 = a1 + 80 * v4;
      StateMgr__execute((StateMgr *)(v5 + 88));
      StateMgr__execute((StateMgr *)(v5 + 408));
      result = FIELD_U32(a1, 64);
    }
  }
  return result;
}
