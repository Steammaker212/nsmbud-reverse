/* sub_606DA668
 * address: 0x606DA668   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DA668(int a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // t1

  if ( *(float *)(**(_DWORD **)(FIELD_U32(a1, 6108) + 12) + 20) > 4.0 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBB95C);
  result = FIELD_U32(a1, 6512);
  if ( result == 1 )
  {
    v4 = FIELD_U32(a1, 6540);
    v3 = (_DWORD *)(a1 + 6540);
    result = v4;
    if ( v4 )
      *v3 = --result;
  }
  return result;
}
