/* sub_607CF824
 * address: 0x607CF824   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF824(int a1)
{
  int v2; // r6
  _DWORD *v3; // r5
  int v4; // r0

  v2 = a1 + 11368;
  *(_DWORD *)(FIELD_U32(a1, 11368) + 208) &= ~0x80u;
  (*(void (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 11368) + 92))(FIELD_U32(a1, 11368), 0.0);
  v3 = (_DWORD *)(v2 - 12);
  if ( !FIELD_U8(v2, 92) && *v3 )
    sub_607D001C(a1, 0);
  if ( !*v3 )
  {
    v4 = sub_607CBC00(a1);
    if ( v4 )
      FIELD_U32(v4, 324) = 0;
  }
  FIELD_U32(a1, 11420) = -1;
  return 11420;
}
