/* sub_604833B0
 * address: 0x604833B0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604833B0(int a1, int a2)
{
  int v2; // r0
  int v3; // r2
  int (__fastcall *v4)(_DWORD); // r1
  int v5; // r2
  _DWORD *v6; // r0

  v2 = FIELD_U32(a2, 4);
  v3 = FIELD_U32(a2, 8);
  v4 = *(int (__fastcall **)(_DWORD))(v3 + 8);
  v5 = FIELD_U32(v3, 12);
  v6 = (_DWORD *)(v2 + (v5 >> 1));
  if ( (v5 & 1) != 0 )
    v4 = *(int (__fastcall **)(_DWORD))((char *)v4 + *v6);
  return v4(v6);
}
