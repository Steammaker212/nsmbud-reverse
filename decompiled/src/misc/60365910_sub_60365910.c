/* sub_60365910
 * address: 0x60365910   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60365910(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  int v4; // r1

  v3 = FIELD_U32(a1, 7524);
  v2 = (_DWORD *)(a1 + 7524);
  if ( v3 != 2 )
    return ShellEnemy__vfDC(a1);
  *v2 = 1;
  FIELD_U32(a1, 6096) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), a1 + 6092);
  v4 = FIELD_U32(a1, 6100);
  FIELD_U32(a1, 6100) = 0;
  FIELD_U32(a1, 6092) = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 16))(
                             FIELD_U32(a1, 6084),
                             v4);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return (*(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Walk);
}
