/* sub_60088678
 * address: 0x60088678   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60088678(int a1, float *a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6
  float v9; // s16
  float v10; // s18
  int (__fastcall *v11)(int); // r1

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C81D6C + 8))()
    || (v7 = StateMgr__getCurrentState(v4),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v8 == (*(int (**)(void))(dword_60C81D8C + 8))()) )
  {
    v9 = FIELD_F32(a1, 108);
    v10 = *a2;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81D6C);
    (*(void (__fastcall **)(int, bool))(*(_DWORD *)a1 + 1036))(a1, v10 > v9);
    FIELD_F32(a1, 120) = *(float *)&dword_60AFE3F8[v10 > v9] * 0.5;
    FIELD_U32(a1, 124) = 1080033280;
    FIELD_U32(a1, 128) = 0;
  }
  if ( FIELD_U8(a1, 7248) )
    v11 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 996);
  else
    v11 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 1044);
  return v11(a1);
}
