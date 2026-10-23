/* HammerBros__vf2E8
 * address: 0x602CBE30   size: 248   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x6026758C
// 
// Overridden by: None
void __fastcall HammerBros__vf2E8(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  double v5; // d0
  int v6; // r0
  int v7; // r1
  int v8; // s2

  v2 = a1[1652];
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)dword_60C87D28 & ~(1613545076 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C87D28) )
    {
      dword_60C87D24 = (int)&off_60BD20C4;
      _cxa_guard_release(dword_60C87D28);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C87D24) == 1 && !FIELD_U8(v3, 11844) )
    {
      v5 = ((double (__fastcall *)(_DWORD *))*(_DWORD *)(*a1 + 708))(a1);
      v6 = FIELD_U32(v3, 160);
      v7 = FIELD_U32(v3, 164);
      FIELD_F64(v3, 108) = v5;
      FIELD_U32(v3, 116) = v8;
      FIELD_U32(v3, 160) = v6;
      FIELD_U32(v3, 164) = v7;
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 196))(v3);
    }
  }
}
