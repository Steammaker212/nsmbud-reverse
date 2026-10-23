/* LargeGoomba_vf177
 * address: 0x60341A74   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf177(_DWORD **a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // r5

  v2 = a1 + 1524;
  v3 = (*(int (__fastcall **)(_DWORD *))(*a1[1524] + 8))(a1[1524]);
  if ( v3 != (*(int (**)(void))(dword_60C945D8 + 8))() )
  {
    v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    if ( v4 != (*(int (**)(void))(dword_60C9468C + 8))() )
      ((void (__fastcall *)(_DWORD **))(*a1)[160])(a1);
  }
  ((void (__fastcall *)(_DWORD **))(*a1)[159])(a1);
  a1[25] = (_DWORD *)-1103101952;
  a1[33] = 0;
  a1[34] = (_DWORD *)-1065353216;
  a1[35] = 0;
  return 0;
}
