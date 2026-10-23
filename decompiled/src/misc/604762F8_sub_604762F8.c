/* sub_604762F8
 * address: 0x604762F8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604762F8(_DWORD *a1, int a2)
{
  int v3; // r0

  a1[4] = a2;
  if ( FIELD_U32(a2, 56) )
  {
    sub_60989E30();
    a2 = a1[4];
  }
  v3 = FIELD_U32(a2, 64);
  if ( v3 )
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v3 + 88))(v3, 1.0);
  *(_DWORD *)(a1[6] + 184) = dword_60CD0C84 + 40;
  sub_6098F300(a1[6], a1[4] + 20);
  sub_6098B5A8(FIELD_U32(dword_60CD0C84, 864), a1[6]);
  return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[4] + 52))(a1[4], a1[879]);
}
