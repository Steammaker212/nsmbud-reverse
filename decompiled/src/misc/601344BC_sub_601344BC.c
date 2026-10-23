/* sub_601344BC
 * address: 0x601344BC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601344BC(_DWORD *a1, int a2)
{
  int v4; // r0

  *(_DWORD *)(a1[9] + 80) = FIELD_U32(a2, 80);
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[9] + 68))(a1[9], FIELD_S8(a2, 84));
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 44))(a1, a2);
  sub_60158F04((ActiveCollider *)(a1[9] + 188), 6);
  *(_DWORD *)(a1[9] + 328) = 19;
  sub_60158FA8((ActiveCollider *)(a1[9] + 188), 32783);
  *(_DWORD *)(a1[9] + 336) = 0;
  *(_DWORD *)(a1[9] + 344) = sub_60134594;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)a1[9] + 76))(a1[9]);
  v4 = a1[9];
  FIELD_U32(v4, 108) = FIELD_U32(v4, 108);
  FIELD_U32(v4, 116) = 1167355904;
  StateMgr__changeState((StateMgr *)(a1[9] + 6084), &stru_60C876FC);
  return 1;
}
