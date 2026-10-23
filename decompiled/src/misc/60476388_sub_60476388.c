/* sub_60476388
 * address: 0x60476388   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60476388(_DWORD *a1, int a2, _DWORD *a3)
{
  int (__fastcall ***v4)(_DWORD); // r0
  int (__fastcall **v5)(_DWORD); // r0

  v4 = sub_60474D94(a2, a3);
  a1[4] = v4;
  if ( v4[14] )
  {
    sub_60989E30(v4[14]);
    v4 = (int (__fastcall ***)(_DWORD))a1[4];
  }
  v5 = v4[16];
  if ( v5 )
    (*((void (__fastcall **)(int (__fastcall **)(_DWORD), float))*v5 + 22))(v5, 1.0);
  *(_DWORD *)(a1[6] + 184) = dword_60CD0C84 + 40;
  sub_6098F300(a1[6], a1[4] + 20);
  sub_6098B5A8(FIELD_U32(dword_60CD0C84, 864), a1[6]);
  return (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[4] + 52))(a1[4], a1[879]);
}
