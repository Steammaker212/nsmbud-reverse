/* sub_608A9B50
 * address: 0x608A9B50   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9B50(int a1, int a2)
{
  _BYTE *v4; // r0
  bool v5; // zf
  _BYTE *v6; // r0
  int result; // r0

  v4 = *(_BYTE **)(a1 + 8);
  v5 = v4 == 0;
  if ( v4 )
    v5 = v4[4] == 0;
  if ( v5 )
    return sub_608B2B64(FIELD_U32(a1, 4), a2);
  if ( !(*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v4 + 12))(v4, a2) )
    return sub_608B2B64(FIELD_U32(a1, 4), a2);
  v6 = *(_BYTE **)(a1 + 8);
  if ( !v6[4] )
    return sub_608B2B64(FIELD_U32(a1, 4), a2);
  result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v6 + 20))(v6);
  if ( !result )
    return sub_608B2B64(FIELD_U32(a1, 4), a2);
  return result;
}
