/* skl_root_ref_36968C
 * address: 0x6036968C   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall skl_root_ref_36968C(int a1)
{
  signed int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r6
  char v5; // r6
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r5
  int v9; // r5
  int v10; // r6
  int (__fastcall *v11)(int, Vec3 *); // r2
  void (__fastcall *v12)(int, int, _BYTE *); // r7
  int v13; // r0
  Vec3 v14; // [sp+4h] [bp-54h] BYREF
  _BYTE v15[12]; // [sp+10h] [bp-48h] BYREF
  float v16; // [sp+1Ch] [bp-3Ch]
  float v17; // [sp+2Ch] [bp-2Ch]

  result = sub_602A588C(a1);
  if ( !result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*(int (**)(void))(dword_60C95D98 + 8))();
    if ( v4 != result )
    {
      v5 = FIELD_U8(a1, 6312);
      result = FIELD_U32(a1, 5956);
      v6 = BYTE1(result);
      if ( (v5 & 1) != 0 )
      {
        result = BYTE1(result) - 1;
        if ( (unsigned int)(v6 - 1) <= 1
          && (v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
              v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
              result = (*(int (**)(void))(dword_60C95D38 + 8))(),
              v8 == result) )
        {
          v9 = 882;
          if ( v6 == 1 )
            v9 = 863;
        }
        else
        {
          v9 = 864;
          if ( (v5 & 0x10) == 0 )
            return result;
        }
        v10 = **(_DWORD **)(a1 + 6300);
        v11 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v10 + 84);
        v12 = *(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v10 + 108);
        LODWORD(v14.x) = &sead__SafeStringBase__vtable;
        LODWORD(v14.y) = "skl_root";
        v13 = v11(v10, &v14);
        v12(v10, v13, v15);
        v14.x = v16;
        v14.y = v17;
        v14.z = sub_600024C4(a1);
        return EffectWrapper_update((EffectWrapper *)(a1 + 6424), v9, &v14, 0, 0);
      }
    }
  }
  return result;
}
