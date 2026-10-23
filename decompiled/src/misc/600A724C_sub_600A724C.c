/* sub_600A724C
 * address: 0x600A724C   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A724C(int a1, ActorBuildInfo *a2)
{
  int v3; // r10
  int v4; // r5
  _DWORD *v5; // r11
  int v6; // r9
  int v7; // r0
  int v8; // r5
  _DWORD *v9; // r6
  int v10; // r4
  int v11; // r0
  int v12; // r1
  int *v14; // [sp+0h] [bp-28h]

  KoopalingBase__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BC860C;
  memset((void *)(a1 + 8120), 0, 132);
  FIELD_U32(a1, 8252) = 1065353216;
  FIELD_U32(a1, 8308) = 0;
  FIELD_U32(a1, 8312) = -1;
  EffectData_ctor((EffectData *)(a1 + 8256));
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8320));
  FIELD_U32(a1, 8320) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8424));
  FIELD_U32(a1, 8424) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 8528));
  FIELD_U32(a1, 8528) = off_60BC1450;
  FIELD_U32(a1, 8636) = 0;
  FIELD_U32(a1, 8632) = 0;
  FIELD_U32(a1, 8648) = 0;
  FIELD_U32(a1, 8644) = 0;
  FIELD_U32(a1, 8640) = 0;
  FIELD_U32(a1, 8652) = 4;
  FIELD_U32(a1, 8688) = 0;
  FIELD_U32(a1, 8676) = 0;
  FIELD_U32(a1, 8672) = 0;
  FIELD_U32(a1, 8668) = 0;
  FIELD_U32(a1, 8664) = 0;
  FIELD_U32(a1, 8684) = a1 + 8680;
  FIELD_U32(a1, 8680) = a1 + 8680;
  FIELD_U32(a1, 8692) = a1 + 8704;
  FIELD_U32(a1, 8704) = a1 + 9376;
  FIELD_U32(a1, 9376) = a1 + 10048;
  FIELD_U32(a1, 10048) = a1 + 10720;
  FIELD_U32(a1, 10720) = a1 + 11392;
  FIELD_U32(a1, 11392) = a1 + 12064;
  FIELD_U32(a1, 12064) = a1 + 12736;
  FIELD_U32(a1, 12736) = a1 + 13408;
  FIELD_U32(a1, 13408) = a1 + 14080;
  FIELD_U32(a1, 14080) = a1 + 14752;
  FIELD_U32(a1, 14752) = a1 + 15424;
  FIELD_U32(a1, 15424) = a1 + 16096;
  FIELD_U32(a1, 16096) = a1 + 16768;
  FIELD_U32(a1, 16768) = a1 + 17440;
  FIELD_U32(a1, 17440) = a1 + 18112;
  FIELD_U32(a1, 18112) = a1 + 18784;
  FIELD_U32(a1, 18784) = 0;
  FIELD_U32(a1, 8696) = a1 + 8704;
  FIELD_U32(a1, 8700) = 16;
  FIELD_U32(a1, 19456) = 0;
  FIELD_U32(a1, 19460) = 0;
  FIELD_U32(a1, 19604) = 0;
  v3 = a1 + 19596;
  FIELD_U32(a1, 19600) = a1 + 19596;
  FIELD_U32(a1, 19596) = a1 + 19596;
  FIELD_U32(a1, 19608) = a1 + 19620;
  FIELD_U32(a1, 19620) = a1 + 19632;
  FIELD_U32(a1, 19632) = a1 + 19644;
  FIELD_U32(a1, 19644) = a1 + 19656;
  FIELD_U32(a1, 19656) = a1 + 19668;
  FIELD_U32(a1, 19668) = a1 + 19680;
  FIELD_U32(a1, 19680) = a1 + 19692;
  FIELD_U32(a1, 19692) = a1 + 19704;
  FIELD_U32(a1, 19704) = a1 + 19716;
  FIELD_U32(a1, 19716) = a1 + 19728;
  FIELD_U32(a1, 19728) = a1 + 19740;
  FIELD_U32(a1, 19740) = a1 + 19752;
  FIELD_U32(a1, 19752) = a1 + 19764;
  FIELD_U32(a1, 19764) = a1 + 19776;
  FIELD_U32(a1, 19776) = a1 + 19788;
  FIELD_U32(a1, 19788) = a1 + 19800;
  FIELD_U32(a1, 19800) = 0;
  FIELD_U32(a1, 19612) = a1 + 19620;
  FIELD_U32(a1, 19616) = 16;
  FIELD_U32(a1, 19812) = 0;
  FIELD_U32(a1, 19816) = 0;
  FIELD_U32(a1, 19820) = 0;
  FIELD_U32(a1, 19824) = 1067030938;
  FIELD_U32(a1, 19828) = 1065353216;
  FIELD_U8(a1, 19832) = 0;
  FIELD_U32(a1, 8640) = 0;
  FIELD_U32(a1, 8644) = 0;
  FIELD_U32(a1, 8648) = 0;
  memset((void *)(a1 + 8120), 0, 128);
  memset((void *)(a1 + 19464), 0, 128);
  v14 = (int *)(a1 + 19600);
  v4 = FIELD_U32(a1, 8684);
  if ( v4 != a1 + 8680 )
  {
    v5 = (_DWORD *)(a1 + 8692);
    do
    {
      v6 = FIELD_U32(v4, 4);
      sead__ListNode__erase(v4);
      --FIELD_U32(a1, 8688);
      *(_DWORD *)(v4 - 664) = *v5;
      v7 = v4 - 664;
      v4 = v6;
      *v5 = v7;
    }
    while ( v6 != a1 + 8680 );
  }
  v8 = *v14;
  if ( *v14 != v3 )
  {
    v9 = (_DWORD *)(a1 + 19608);
    do
    {
      v10 = FIELD_U32(v8, 4);
      sead__ListNode__erase(v8);
      --FIELD_U32(a1, 19604);
      *(_DWORD *)(v8 - 4) = *v9;
      v11 = v8 - 4;
      v8 = v10;
      *v9 = v11;
    }
    while ( v10 != v3 );
  }
  v12 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 8656) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 8660) = v12;
  return a1;
}
