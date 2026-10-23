/* sub_6034EA94
 * address: 0x6034EA94   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6034EA94(int a1)
{
  char v2; // r12
  float *v3; // r0
  float v4; // r1
  int (__fastcall ***v5)(_DWORD, int *); // r5
  char v6; // r12
  char v7; // r12
  int v8; // r0
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "split";
  sub_603407D0(a1, (int)v9, 1);
  if ( ((unsigned int)dword_60C94EE0 & ~(1614080740 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C94EE0) )
  {
    dword_60C94EE0[1] = 1061158912;
    dword_60C94EE0[2] = 1080033280;
    dword_60C94EE0[3] = -1086324736;
    dword_60C94EF0 = 1080033280;
    _cxa_guard_release(dword_60C94EE0);
  }
  v3 = (float *)((char *)dword_60C94EE0 + ((FIELD_U32(a1, 20) >> 21) & 0x78));
  v4 = v3[1];
  FIELD_F32(a1, 120) = v4;
  FIELD_F32(a1, 124) = v3[2];
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_F32(a1, 132) = v4;
  FIELD_U32(a1, 80) = v4 < 0.0;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v4 >= 0.0];
  sub_6015913C((ActiveCollider *)(a1 + 188), 32775);
  FIELD_U32(a1, 6956) = 1;
  FIELD_U32(a1, 6960) = 0;
  v5 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1614080968 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 && (**v5)(v5, &StageActor_RTTI) == 1 )
  {
    if ( ((unsigned int)&dword_60C94400 & ~(1614081084 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C94400) )
    {
      dword_60C943FC = (int)&off_60BED0A0;
      _cxa_guard_release(&dword_60C94400);
    }
    v8 = (**v5)(v5, &dword_60C943FC);
    if ( v8 )
      v8 = (int)v5;
    FIELD_U32(a1, 6964) = v8;
  }
}
