/* sub_60231264
 * address: 0x60231264   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60231264(_DWORD *a1)
{
  int v2; // r6
  void *v3; // r0

  *a1 = off_60BD9494;
  if ( (_DWORD *)dword_60C8D900 == a1 )
  {
    dword_60C8D900 = 0;
    v2 = dword_60C8D904;
    sub_60954610(dword_60C8D904 + 4652);
    sub_60954610(v2 + 4584);
    sub_609175E4(v2 + 4368);
    sub_6092D260(v2 + 456);
    v3 = *(void **)(v2 + 352);
    if ( v3 )
    {
      operator_delete(v3);
      FIELD_U32(v2, 352) = 0;
    }
    nullsub_113(v2 + 168);
    nullsub_111(v2 + 80);
    dword_60C8D904 = 0;
  }
  return sead__IDisposer__dtor(a1);
}
