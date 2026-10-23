/* sub_6065C038
 * address: 0x6065C038   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065C038(int a1)
{
  int v1; // r2
  void (__fastcall *v2)(_DWORD); // r1
  _DWORD *v3; // r0

  v1 = FIELD_U32(a1, 6108);
  v2 = *(void (__fastcall **)(_DWORD))(a1 + 6104);
  v3 = (_DWORD *)(a1 + (v1 >> 1));
  if ( (v1 & 1) != 0 )
    v2 = *(void (__fastcall **)(_DWORD))((char *)v2 + *v3);
  v2(v3);
  return 1;
}
