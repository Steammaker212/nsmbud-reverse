/* sub_600AA114
 * address: 0x600AA114   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600AA114(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r1
  int v5; // r2
  int v6; // r5
  char v7; // r12
  int v8; // r1
  int v9; // r2
  int v10; // r5
  char v11; // r12
  int v12; // r1
  int v13; // r2
  float v14; // [sp+0h] [bp-20h] BYREF
  int v15; // [sp+4h] [bp-1Ch]
  int v16; // [sp+8h] [bp-18h]

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8640));
  if ( ((unsigned int)dword_60C81F18 & ~(1611309396 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81F14) == 1 )
  {
    sub_600A8F84((_DWORD **)a1, &v14);
    v4 = v15;
    v5 = v16;
    FIELD_F32(v2, 108) = v14;
    FIELD_U32(v2, 112) = v4;
    FIELD_U32(v2, 116) = v5;
  }
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8644));
  if ( ((unsigned int)dword_60C81F18 & ~(1611309572 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C81F14) == 1 )
  {
    sub_600A8F84((_DWORD **)a1, &v14);
    v8 = v15;
    v9 = v16;
    FIELD_F32(v6, 108) = v14;
    FIELD_U32(v6, 112) = v8;
    FIELD_U32(v6, 116) = v9;
  }
  v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8648));
  if ( ((unsigned int)dword_60C81F18 & ~(1611309748 << v11) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v10 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C81F14) == 1 )
    {
      sub_600A8F84((_DWORD **)a1, &v14);
      v12 = v15;
      v13 = v16;
      FIELD_F32(v10, 108) = v14;
      FIELD_U32(v10, 112) = v12;
      FIELD_U32(v10, 116) = v13;
    }
  }
}
