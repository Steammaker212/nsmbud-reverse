/* sub_609547F8
 * address: 0x609547F8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609547F8(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  int v4; // r0

  *a1 = off_60C5E9B4;
  a1[4] = &off_60C5EA0C;
  sub_6095811C(a1[5], a1);
  v2 = a1[31];
  if ( v2 )
  {
    operator_delete_8DE3FC((void *)(v2 - 8));
    a1[30] = 0;
    a1[31] = 0;
  }
  v3 = (_DWORD *)a1[103];
  if ( v3 )
  {
    v4 = v3[222];
    if ( !v4 || (operator_delete_8DE3FC((void *)(v4 - 8)), v3[221] = 0, v3[222] = 0, (v3 = (_DWORD *)a1[103]) != 0) )
    {
      nullsub_113();
      nullsub_113();
      nullsub_113();
      nullsub_111();
      nullsub_111();
      operator_delete(v3);
    }
  }
  return sead__IDisposer__dtor(a1);
}
