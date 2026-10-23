/* sub_600FA6D8
 * address: 0x600FA6D8   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FA6D8(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  _DWORD *v5; // r1
  int v6; // r5
  int result; // r0
  int v8; // [sp+Ch] [bp-1Ch] BYREF
  int v9; // [sp+10h] [bp-18h]
  int v10; // [sp+14h] [bp-14h]

  v2 = sub_60788F8C(PlayerMgr_instance, 0);
  v3 = sub_60834614();
  v4 = sub_603FD0B4(v3);
  if ( v2 < 0 && v4 == 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v5 = *(_DWORD **)(PlayerMgr_instance + 32);
    if ( v5 )
    {
      v8 = v5[27];
      v9 = v5[28];
      v10 = v5[29];
    }
    sub_60787A24(1, &v8, 0, 0, 0, 0);
  }
  v6 = 0;
  result = sub_60788F8C(PlayerMgr_instance, 0);
  if ( result >= 0
    || (result = sub_60788F8C(PlayerMgr_instance, 1), result >= 0)
    || (result = sub_60788F8C(PlayerMgr_instance, 2), result >= 0)
    || (result = sub_60788F8C(PlayerMgr_instance, 3), result >= 0)
    || (result = sub_60788F8C(PlayerMgr_instance, 4), result >= 0)
    || (result = sub_60788F8C(PlayerMgr_instance, 5), result >= 0) )
  {
    FIELD_U32(a1, 6112) = result;
    if ( (unsigned int)result < 4 )
      v6 = result;
    return sub_607A30CC(*(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32));
  }
  return result;
}
