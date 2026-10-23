/* sub_607C72D0
 * address: 0x607C72D0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607C72D0(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r0
  void (__fastcall *v5)(int, float *, _DWORD *); // r3
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // s8
  _DWORD v10[2]; // [sp+0h] [bp-48h] BYREF
  float v11[3]; // [sp+8h] [bp-40h] BYREF
  float v12; // [sp+14h] [bp-34h]
  float v13; // [sp+18h] [bp-30h]
  float v14; // [sp+1Ch] [bp-2Ch]
  float v15; // [sp+20h] [bp-28h]
  float v16; // [sp+24h] [bp-24h]

  if ( (FIELD_U8(a1, 1218) & 8) != 0 )
  {
    v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
    if ( ((unsigned int)&dword_60C7B408 & ~(1618768668 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( v2 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B404) == 1 )
      {
        v4 = sub_6075EDC8(v2);
        v5 = *(void (__fastcall **)(int, float *, _DWORD *))(*(_DWORD *)v4 + 144);
        v10[0] = &sead__SafeStringBase__vtable;
        v10[1] = "spin";
        v5(v4, v11, v10);
        v12 = v12 + (float)((float)((float)(v11[0] * 0.0) - (float)(v11[1] * 5.0)) + (float)(v11[2] * 0.0));
        v6 = v13;
        v7 = v14;
        v8 = v15;
        v9 = v16;
        FIELD_U32(a1, 108) = FIELD_U32(v2, 108);
        FIELD_F32(a1, 112) = (float)(v9 + (float)((float)((float)(v6 * 0.0) - (float)(v7 * 5.0)) + (float)(v8 * 0.0)))
                             + -8.0;
        FIELD_U32(a1, 80) = FIELD_U32(v2, 80);
      }
    }
  }
}
