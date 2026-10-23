/* sub_60774984
 * address: 0x60774984   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774984(int a1)
{
  int v2; // r5

  v2 = 0;
  if ( sub_6078663C(a1 + 688) == 1 )
  {
    v2 = 1;
    if ( (FIELD_U8(a1, 1204) & 0x10) == 0 )
    {
      sub_6040A1D8(dword_60C9A1F0);
      FIELD_U8(a1, 1296) = 0;
      FIELD_U8(a1, 1314) = 0;
      FIELD_U32(a1, 9940) = 0;
      FIELD_U32(a1, 9944) = 0;
      FIELD_U32(a1, 9948) = 0;
      FIELD_U32(a1, 1228) &= 0xFFFFD3FF;
      FIELD_U32(a1, 1208) &= ~8u;
      FIELD_U32(a1, 1204) &= ~0x400u;
      FIELD_U32(a1, 9932) = 0;
      FIELD_U32(a1, 9936) = 0;
      StateMgr__changeState((StateMgr *)(a1 + 9916), &stru_60CBF8D0);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
    }
  }
  return v2;
}
