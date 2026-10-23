/* sub_600CB874
 * address: 0x600CB874   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CB874(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  _DWORD **v4; // r8
  _DWORD *v5; // t1

  v3 = (_DWORD *)(a1 + 6304);
  v2 = *(_DWORD **)(a1 + 6304);
  if ( v2 )
    sub_600628E8(v2, (_DWORD *)(a1 + 108));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( *v3 )
  {
    v5 = *(_DWORD **)(a1 + 6300);
    v4 = (_DWORD **)(a1 + 6300);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v5 + 60))(*v5);
    (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v4 + 68))(**v4, v4 - 1539);
    sub_604218E0(*v4);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 52))(**v4);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v4 + 56))(**v4);
  }
  return 1;
}
