/* sub_60387DD4
 * address: 0x60387DD4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60387DD4(int a1, void *a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  *v4 = &off_60BF39E4;
  FIELD_U32(a1, 4) = v4;
  if ( v4 )
    return (*(int (__fastcall **)(_DWORD *, void *))(*v4 + 12))(v4, a2);
  else
    return 0;
}
