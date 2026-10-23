/* skl_root_ref_3B5378
 * address: 0x603B5378   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_3B5378(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r5
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  Vec3 v8; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v9[16]; // [sp+10h] [bp-40h] BYREF

  result = FIELD_U8(a1, 11820);
  if ( result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 == (*(int (**)(void))(dword_60C98020 + 8))() )
    {
      result = FIELD_U32(a1, 6320);
      if ( result == 1 )
        return result;
    }
    else
    {
      result = FIELD_U8(a1, 6054);
      if ( FIELD_U8(a1, 6054) )
        return result;
    }
    if ( !FIELD_U8(a1, 11822)
      || (result = FIELD_U8(a1, 11821), !FIELD_U8(a1, 11821))
      && (result = FIELD_U32(a1, 11816), result >= 10) )
    {
      v5 = **(_DWORD **)(a1 + 6300);
      v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 84);
      v9[0] = &sead__SafeStringBase__vtable;
      v9[1] = "skl_root";
      v7 = v6(v5, v9);
      (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 108))(v5, v7, v9);
      LODWORD(v8.x) = v9[3];
      LODWORD(v8.y) = v9[7];
      LODWORD(v8.z) = v9[11];
      return EffectWrapper_update((EffectWrapper *)(a1 + 11824), 820, &v8, 0, 0);
    }
  }
  return result;
}
