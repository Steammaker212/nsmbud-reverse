/* sub_6098CA50
 * address: 0x6098CA50   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CA50(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r0

  sub_6099088C(a2, a3);
  HoverButtonAnim_ref(a2, a3, a1[7]);
  TapButtonAnim_ref(a2, a3, a1[7]);
  v8 = sub_604749C4(a2);
  if ( v8 )
    (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v8 + 188))(v8, a1 + 8, a3);
  return (*(int (__fastcall **)(_DWORD *, int, int))(*a1 + 248))(a1, a2, a4);
}
