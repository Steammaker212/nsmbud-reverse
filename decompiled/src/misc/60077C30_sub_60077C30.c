/* sub_60077C30
 * address: 0x60077C30   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60077C30(int a1)
{
  unsigned int v2; // r1
  _BOOL4 v3; // r0
  int v4; // r1
  int v5; // r5
  char v6; // r12
  int v7; // r2

  v2 = FIELD_U32(a1, 25368);
  v3 = 0;
  if ( v2 <= 3 )
    v3 = **(float **)(dword_60CBF354 + 4 * v2 + 32) <= FIELD_F32(a1, 108);
  FIELD_U32(a1, 80) = v3;
  v4 = dword_60C81770;
  if ( v3 )
    v4 = -dword_60C81770;
  if ( FIELD_U32(a1, 160) == v4 )
    goto LABEL_17;
  v5 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81104 & ~(1611103452 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81100) == 1 && FIELD_U32(v5, 15240) <= 3u )
  {
    v7 = dword_60C81770;
    if ( FIELD_U32(a1, 80) == 1 )
      v7 = -dword_60C81770;
    if ( ((FIELD_S32(a1, 160) >> 31) | 1) == ((v7 >> 31) | 1) )
LABEL_17:
      JUMPOUT(0x60077DC8);
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C813CC);
}
