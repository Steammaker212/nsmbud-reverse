/* sub_60134914
 * address: 0x60134914   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60134914(int a1)
{
  char v2; // r0
  _DWORD v4[3]; // [sp+0h] [bp-28h] BYREF
  int v5; // [sp+Ch] [bp-1Ch] BYREF
  int v6; // [sp+10h] [bp-18h] BYREF
  _BYTE v7[20]; // [sp+14h] [bp-14h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 6440));
  if ( !FIELD_U8(a1, 6100) )
  {
    ((void (__fastcall *)(int *, _BYTE *, int, _DWORD))checkLiquidCollisions)(
      &v6,
      v7,
      a1 + 108,
      FIELD_U8(a1, 86));
    if ( v6 == 1
      || (((void (__fastcall *)(int *, _BYTE *, int, _DWORD))checkLiquidCollisions)(
            &v5,
            v7,
            a1 + 108,
            FIELD_U8(a1, 86)),
          v2 = 0,
          v5 == 2) )
    {
      v4[0] = FIELD_U32(a1, 108);
      v4[1] = 0;
      v4[2] = 1170939904;
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 108))(a1, v4);
      v2 = 1;
    }
    FIELD_U8(a1, 6100) = v2;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 312))(a1);
  return 1;
}
