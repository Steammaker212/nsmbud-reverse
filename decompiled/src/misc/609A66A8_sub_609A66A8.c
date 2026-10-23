/* sub_609A66A8
 * address: 0x609A66A8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A66A8(int a1, void *a2)
{
  int v3; // r5
  _DWORD *v4; // r1

  if ( !a2 )
    a2 = *(void **)(a1 + 136);
  v3 = operator_new_8DE25C(0x8Cu, a2, 4);
  sub_609A59D0(v3);
  v4 = (_DWORD *)v3;
  if ( v3 )
    v4 = (_DWORD *)(v3 + 4);
  sub_608DEFB0(a1 + 4, v4);
  return v3;
}
