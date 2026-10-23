/* sub_6021828C
 * address: 0x6021828C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021828C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r0
  Vec3 v7; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v8[16]; // [sp+10h] [bp-40h] BYREF

  v2 = (StateMgr *)(a1 + 288);
  StateMgr__execute((StateMgr *)(a1 + 288));
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 304));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
  {
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 304) + 52))(**(_DWORD **)(a1 + 304));
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 304) + 56))(**(_DWORD **)(a1 + 304));
  }
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C8D320 + 8))() )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD *))(***(_DWORD ***)(a1 + 304) + 108))(
      **(_DWORD **)(a1 + 304),
      FIELD_U32(a1, 320),
      v8);
    LODWORD(v7.x) = v8[3];
    LODWORD(v7.y) = v8[7];
    LODWORD(v7.z) = v8[11];
    EffectWrapper_update((EffectWrapper *)(a1 + 324), 979, &v7, 0, 0);
  }
  v5 = FIELD_U32(a1, 248);
  v8[0] = 2;
  v8[1] = 0;
  v8[2] = v5;
  sub_6022D06C(dword_60C8D864, v8, FIELD_U8(a1, 533) != 0);
  return 1;
}
