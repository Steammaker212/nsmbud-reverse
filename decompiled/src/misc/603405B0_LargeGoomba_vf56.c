/* LargeGoomba_vf56
 * address: 0x603405B0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf56(int a1)
{
  void (__fastcall *v2)(_DWORD); // r1
  int v3; // r2
  _DWORD *v4; // r0

  v2 = *(void (__fastcall **)(_DWORD))(a1 + 6400);
  v3 = FIELD_U32(a1, 6404);
  v4 = (_DWORD *)(a1 + (v3 >> 1));
  if ( (v3 & 1) != 0 )
    v2 = *(void (__fastcall **)(_DWORD))((char *)v2 + *v4);
  v2(v4);
  sub_60340170(a1);
  return sub_603405F4(a1);
}
