/* sub_607DB684
 * address: 0x607DB684   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DB684(int a1)
{
  int v2; // r8
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // t1
  _DWORD *v6; // r7
  char *v7; // r0
  nn__hid__VibrationNode *v8; // r0
  unsigned __int64 v9; // r2
  __int64 v10; // kr20_8

  v2 = a1 + 16692;
  sead__CriticalSection__lock(a1 + 16692);
  v5 = FIELD_U32(a1, 16568);
  v3 = (_DWORD *)(a1 + 16568);
  v4 = v5;
  v6 = (_DWORD *)*(v3 - 2);
  if ( v6 != v3 - 3 )
  {
    v7 = (char *)v6 - v4;
    do
    {
      sub_607DD54C(v7);
      v6 = (_DWORD *)v6[1];
      v7 = (char *)v6 - v4;
    }
    while ( (char *)v6 - v4 != (char *)v3 - *v3 - 12 );
  }
  v8 = (nn__hid__VibrationNode *)sead__CriticalSection__unlock(v2);
  nn__hid__VibrationNode__Update(v8);
  if ( SoundSystem_instance )
    sub_60808994();
  v9 = 3813930959LL * (int)nn__hid__VibrationNode__DefaultVibrationSampleInterval[1]
     + ((3813930959u * (unsigned __int64)nn__hid__VibrationNode__DefaultVibrationSampleInterval[0]) >> 32);
  v10 = ((__int64)(549755813LL * (int)nn__hid__VibrationNode__DefaultVibrationSampleInterval[1]
                 + SHIDWORD(v9)
                 + ((549755813LL * nn__hid__VibrationNode__DefaultVibrationSampleInterval[0]
                   + (unsigned __int64)(unsigned int)v9) >> 32)) >> 7)
      + (nn__hid__VibrationNode__DefaultVibrationSampleInterval[1] >> 31);
  return sub_609085CC(
           v10 * qword_60CCFB50 / 1000000,
           (unsigned __int64)(v10 * qword_60CCFB50 / 1000000) >> 32,
           v10 * qword_60CCFB50 % 1000000,
           (unsigned __int64)(v10 * qword_60CCFB50 % 1000000) >> 32);
}
