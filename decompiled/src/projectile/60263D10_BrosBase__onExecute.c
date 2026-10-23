/* BrosBase__onExecute
 * address: 0x60263D10   size: 308   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
int __fastcall BrosBase__onExecute(int a1)
{
  StateMgr *v2; // r5
  _DWORD **v3; // r5

  v2 = (StateMgr *)(a1 + 6084);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 820))(a1);
  StateMgr__execute(v2);
  sub_602A33AC((_BYTE *)a1);
  ((void (__fastcall *)(int, int))loc_602A3F7C)(a1 + 12432, 4);
  sub_60263E44(a1);
  v3 = (_DWORD **)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD, int, int))(***(_DWORD ***)(a1 + 6300) + 108))(**(_DWORD **)(a1 + 6300), 6, a1 + 6304);
  (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)**v3 + 108))(**v3, 4, a1 + 6352);
  (*(void (__fastcall **)(_DWORD, _DWORD, int))(*(_DWORD *)**v3 + 108))(**v3, 0, a1 + 6400);
  (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)**v3 + 108))(**v3, 14, a1 + 6448);
  (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)**v3 + 108))(**v3, 11, a1 + 6496);
  if ( FIELD_U8(a1, 6612) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1);
    FIELD_U8(a1, 6612) = 0;
  }
  sub_60263FA4(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
