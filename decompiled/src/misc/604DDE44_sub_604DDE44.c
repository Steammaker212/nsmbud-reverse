/* sub_604DDE44
 * address: 0x604DDE44   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604DDE44(int a1, _DWORD *a2)
{
  int v4; // r2
  void (__fastcall *v5)(_DWORD); // r1
  int v6; // r2
  _DWORD *v7; // r0

  v4 = FIELD_U32(a1, 12);
  v5 = *(void (__fastcall **)(_DWORD))(v4 + 24);
  v6 = FIELD_U32(v4, 28);
  v7 = (_DWORD *)(FIELD_U32(a1, 8) + (v6 >> 1));
  if ( (v6 & 1) != 0 )
    v5 = *(void (__fastcall **)(_DWORD))((char *)v5 + *v7);
  v5(v7);
  FIELD_U32(a1, 12) = 0;
  *a2 = 0;
  return 0;
}
