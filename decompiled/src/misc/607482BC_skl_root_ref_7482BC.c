/* skl_root_ref_7482BC
 * address: 0x607482BC   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_7482BC(int a1, float *a2)
{
  int v4; // r6
  int (__fastcall *v5)(int, float *); // r2
  void (__fastcall *v6)(int, int, _BYTE *); // r4
  int v7; // r0
  int (__fastcall *v8)(int, float *); // r2
  void (__fastcall *v9)(int, int, _BYTE *); // r4
  int v10; // r0
  int result; // r0
  StateBase *CurrentState; // r0
  int v13; // r6
  int v14; // r0
  int v15; // r0
  _BYTE v16[12]; // [sp+0h] [bp-80h] BYREF
  int v17; // [sp+Ch] [bp-74h]
  int v18; // [sp+1Ch] [bp-64h]
  int v19; // [sp+2Ch] [bp-54h]
  int v20; // [sp+30h] [bp-50h]
  int v21; // [sp+34h] [bp-4Ch]
  int v22; // [sp+38h] [bp-48h]
  int v23; // [sp+3Ch] [bp-44h]
  int v24; // [sp+40h] [bp-40h]
  int v25; // [sp+44h] [bp-3Ch]
  _BYTE v26[4]; // [sp+48h] [bp-38h] BYREF
  float v27; // [sp+4Ch] [bp-34h]
  float v28; // [sp+54h] [bp-2Ch] BYREF
  float v29; // [sp+58h] [bp-28h]

  if ( Actor__getProfileId((Actor *)a1) != 842 )
    return sub_6074908C(a1, a2);
  v4 = **(_DWORD **)(a1 + 728);
  v5 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v4 + 84);
  v6 = *(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v4 + 108);
  v28 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v29 = COERCE_FLOAT("skl_root");
  v7 = v5(v4, &v28);
  v6(v4, v7, v16);
  v23 = v17;
  v24 = v18;
  v25 = v19;
  v8 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v4 + 84);
  v9 = *(void (__fastcall **)(int, int, _BYTE *))(*(_DWORD *)v4 + 108);
  v28 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v29 = COERCE_FLOAT("head");
  v10 = v8(v4, &v28);
  v9(v4, v10, v16);
  v20 = v17;
  v21 = v18;
  v22 = v19;
  sub_6023349C(dword_60C8D904, (int)&v28);
  sub_6023349C(dword_60C8D904, (int)v26);
  result = 0;
  if ( (float)((float)((float)(v29 - a2[1]) * (float)(v29 - a2[1])) + (float)((float)(v28 - *a2) * (float)(v28 - *a2))) <= (float)((float)(v29 - v27) * (float)(v29 - v27)) )
  {
    sub_60749078(a1);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 712));
    v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v13 == (*(int (**)(void))(dword_60CBE650 + 8))() )
    {
      v14 = FIELD_U32(a1, 80);
      if ( (float)(FIELD_F32(a1, 120) * (float)byte_60B0A5B0[v14]) > 1.0 )
      {
        v15 = byte_60B0A5B0[v14 ^ 1];
        FIELD_U32(a1, 776) = dword_60CBE6A8;
        FIELD_F32(a1, 120) = (float)v15 * 3.0;
      }
    }
    SE_SYS_ref_2(SoundSystem_instance, a2, 3);
    return 1;
  }
  return result;
}
