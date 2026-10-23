/* skl_root_ref_373544
 * address: 0x60373544   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_373544(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int result; // r0
  int v7; // r5
  int (__fastcall *v8)(int, Vec3 *); // r2
  void (__fastcall *v9)(int, int, _BYTE *); // r6
  int v10; // r0
  Vec3 v11; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v12[12]; // [sp+10h] [bp-40h] BYREF
  float v13; // [sp+1Ch] [bp-34h]
  float v14; // [sp+2Ch] [bp-24h]
  float v15; // [sp+3Ch] [bp-14h]

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
  if ( v5 != result )
  {
    result = FIELD_U8(a1, 11800);
    if ( FIELD_U8(a1, 11800) )
    {
      if ( a2 == 1 )
      {
        result = FIELD_U32(a1, 11788);
        if ( result )
          return result;
      }
      else
      {
        result = FIELD_U8(a1, 6054);
        if ( FIELD_U8(a1, 6054) )
          return result;
      }
      v7 = **(_DWORD **)(a1 + 6300);
      v8 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v7 + 84);
      v9 = *(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v7 + 108);
      LODWORD(v11.x) = &sead__SafeStringBase__vtable;
      LODWORD(v11.y) = "skl_root";
      v10 = v8(v7, &v11);
      v9(v7, v10, v12);
      v11.x = v13;
      v11.y = v14;
      v11.z = v15;
      return EffectWrapper_update((EffectWrapper *)(a1 + 11852), 820, &v11, 0, 0);
    }
  }
  return result;
}
