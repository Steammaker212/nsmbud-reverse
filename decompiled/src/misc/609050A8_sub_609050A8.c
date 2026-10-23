/* sub_609050A8
 * address: 0x609050A8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609050A8(int a1, int a2)
{
  unsigned int v2; // lr
  unsigned int v3; // r12
  _DWORD *v4; // r0
  unsigned int v5; // t1

  if ( a2 >= 1 )
  {
    v2 = FIELD_U32(a1, 12);
    v3 = FIELD_U32(a1, 8);
    if ( v2 + a2 <= v3 )
    {
      v4 = (_DWORD *)(a1 + 12);
      goto LABEL_9;
    }
    a2 = v3 - v2;
  }
  v5 = FIELD_U32(a1, 12);
  v4 = (_DWORD *)(a1 + 12);
  v2 = v5;
  if ( a2 < 0 && v2 < -a2 )
    a2 = -v2;
LABEL_9:
  *v4 = v2 + a2;
  return a2;
}
