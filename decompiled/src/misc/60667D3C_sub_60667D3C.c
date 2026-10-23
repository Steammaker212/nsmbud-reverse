/* sub_60667D3C
 * address: 0x60667D3C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60667D3C(int a1)
{
  int v1; // r2
  void (__fastcall *v2)(_DWORD); // r1
  _DWORD *v3; // r0

  v1 = FIELD_U32(a1, 8060);
  v2 = *(void (__fastcall **)(_DWORD))(a1 + 8056);
  v3 = (_DWORD *)(a1 + (v1 >> 1));
  if ( (v1 & 1) != 0 )
    v2 = *(void (__fastcall **)(_DWORD))((char *)v2 + *v3);
  v2(v3);
  return 1;
}
