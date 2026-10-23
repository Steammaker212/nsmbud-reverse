/* sub_607745DC
 * address: 0x607745DC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607745DC(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = -805306368;
  if ( !FIELD_U32(a1, 80) )
    v2 = 805306368;
  FIELD_U32(a1, 160) = v2;
  result = FIELD_U8(a1, 1204);
  if ( (result & 0x10) == 0 )
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
    StateMgr__changeState((StateMgr *)(a1 + 9916), &stru_60CBF81C);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
  }
  return result;
}
