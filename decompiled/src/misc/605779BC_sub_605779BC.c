/* sub_605779BC
 * address: 0x605779BC   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605779BC(int a1)
{
  int v2; // r5
  char v3; // r12
  float v4; // r0
  float v5; // s2
  float *v6; // r3
  int v7; // r0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C9D3DC & ~(1616345572 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
  {
    dword_60C9D3D8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C9D3DC);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C9D3D8) == 1 )
  {
    v4 = FIELD_F32(v2, 7800);
    FIELD_F32(a1, 108) = v4;
    v5 = FIELD_F32(v2, 7804);
    FIELD_F32(a1, 112) = v5;
    FIELD_U32(a1, 116) = FIELD_U32(v2, 7808);
    v6 = (float *)&unk_60B04CE0;
    FIELD_F32(a1, 112) = v5 + 6.0;
    if ( !FIELD_U8(a1, 7481) )
      v6 = (float *)&unk_60B04CDC;
    FIELD_F32(a1, 108) = v4 + *v6;
    v7 = FIELD_U32(v2, 8176);
    FIELD_U32(a1, 144) = v7;
    FIELD_U32(a1, 148) = v7;
    FIELD_U32(a1, 152) = v7;
  }
  FIELD_U32(a1, 6364) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  sub_605B2D70(a1);
  return 1;
}
