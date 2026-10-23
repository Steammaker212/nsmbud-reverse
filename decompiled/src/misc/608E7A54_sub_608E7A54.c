/* sub_608E7A54
 * address: 0x608E7A54   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E7A54(int a1)
{
  int v2; // r4
  _BYTE *v3; // r6
  bool v4; // zf

  v2 = 0;
  v3 = *(_BYTE **)(a1 + 8);
  v4 = v3 == 0;
  if ( v3 )
    v4 = v3[76] == 0;
  if ( !v4
    && (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 32))(v3, a1) == 1
    && (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 52))(v3, a1) == 1 )
  {
    v2 = 1;
    FIELD_U32(a1, 4) = 0;
    FIELD_U32(a1, 8) = 0;
  }
  return v2;
}
