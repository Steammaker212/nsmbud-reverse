/* sub_60416D28
 * address: 0x60416D28   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60416D28(_DWORD *a1)
{
  int v2; // r7

  *a1 = off_60BF9D00;
  if ( (_DWORD *)dword_60C9BAA0 == a1 )
  {
    dword_60C9BAA0 = 0;
    v2 = dword_60C9BAA4;
    sub_609175E4(dword_60C9BAA4 + 3784);
    sub_60917AE4(v2 + 3704);
    sub_609175E4(v2 + 3424);
    sub_60932260(v2 + 16);
    dword_60C9BAA4 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
