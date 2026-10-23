/* sub_60130024
 * address: 0x60130024   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60130024(_DWORD *a1)
{
  _DWORD *v2; // r5
  int *v3; // r0
  int result; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 1526;
  j_ModelWrapper_updateAnims(a1[1526]);
  v3 = (int *)&unk_60C87570;
  if ( *(v2 - 1506) )
    v3 = &dword_60C87574;
  target = *v3;
  v7 = dword_60C87578;
  result = moveValueTo(v2 - 1486, &target, &v7);
  if ( result == 1 )
  {
    v5 = *(_DWORD *)(*v2 + 12);
    v6 = *(_DWORD *)(*v2 + 68);
    if ( *(_DWORD *)(*v2 + 8) > v6 )
      v5 += 4 * v6;
    result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
    if ( (result & 0x20) != 0 )
      return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C87510);
  }
  return result;
}
