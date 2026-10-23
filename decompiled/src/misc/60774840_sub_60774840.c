/* sub_60774840
 * address: 0x60774840   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774840(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  float v5; // s0

  v2 = 0;
  if ( !((int (*)(void))loc_60763E28)() )
  {
    v3 = *(_DWORD *)(FIELD_U32(a1, 648) + 4);
    if ( FIELD_U32(v3, 28) != 21 )
    {
      PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 21);
      v4 = FIELD_U32(a1, 648);
      sub_60793E10(FIELD_U32(v4, 4));
      sub_60793114(FIELD_U32(v4, 4));
      v3 = *(_DWORD *)(FIELD_U32(a1, 648) + 4);
    }
    if ( (FIELD_U8(a1, 6902) & 4) != 0 )
      v5 = -0.1;
    else
      v5 = -1.0;
    sub_60793088(v3, v5);
    v2 = 1;
    if ( (FIELD_U8(a1, 1204) & 0x10) == 0 )
    {
      sub_6040A1D8(dword_60C9A1F0);
      v2 = 1;
      FIELD_U8(a1, 1296) = 0;
      FIELD_U8(a1, 1314) = 0;
      FIELD_U32(a1, 9940) = 0;
      FIELD_U32(a1, 9944) = 0;
      FIELD_U32(a1, 9948) = 0;
      FIELD_U32(a1, 1228) &= 0xFFFFD3FF;
      FIELD_U32(a1, 1208) &= ~8u;
      FIELD_U32(a1, 1204) &= ~0x400u;
      FIELD_U32(a1, 9932) = 0;
      FIELD_U32(a1, 9936) = 1;
      StateMgr__changeState((StateMgr *)(a1 + 9916), &stru_60CBF81C);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
    }
  }
  return v2;
}
