/* sub_601B1B5C
 * address: 0x601B1B5C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B1B5C(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r5
  _DWORD v6[3]; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v7[64]; // [sp+10h] [bp-40h] BYREF

  ((void (*)(void))loc_601B1C4C)();
  (*(void (__fastcall **)(int, _DWORD, int, float))(*(_DWORD *)a1 + 336))(a1, 0, -1, 0.0);
  v2 = FIELD_U32(a1, 180);
  v3 = FIELD_U32(a1, 184);
  v6[0] = FIELD_U32(a1, 176);
  v6[1] = v2;
  v6[2] = v3;
  sub_601B5850(v7, a1 + 128, v6, a1 + 80);
  ((void (__fastcall *)(_DWORD, _BYTE *))loc_60793FF0)(
    *(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1248) + 920) + 4),
    v7);
  FIELD_U32(a1, 212) = *(_DWORD *)sub_601C6BF0(a1);
  v4 = (*(int (**)(void))(dword_60C8A8E4 + 8))();
  if ( v4 != (*(int (**)(void))(dword_60C8A950 + 8))() )
    FIELD_U16(a1, 440) &= ~4u;
  StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)&dword_60C8A8E4);
  return 1;
}
