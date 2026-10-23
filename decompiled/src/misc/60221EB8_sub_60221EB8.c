/* sub_60221EB8
 * address: 0x60221EB8   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60221EB8(int a1, _DWORD *a2)
{
  signed int v3; // r5
  void *v5; // r7
  const void *v6; // r10
  int v7; // r0
  bool v8; // cc
  signed int v9; // r0

  v3 = 0;
  *(_DWORD *)a1 = &off_60BD92FC;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 36) = 0;
  sub_608DEB0C((_DWORD *)(a1 + 28), 64, a1 + 40);
  FIELD_U32(a1, 296) = 0;
  FIELD_U32(a1, 300) = 0;
  FIELD_U32(a1, 304) = 0;
  sub_608DEB0C((_DWORD *)(a1 + 296), 64, a1 + 308);
  FIELD_U32(a1, 564) = 0;
  FIELD_U32(a1, 568) = 0;
  FIELD_U32(a1, 572) = 0;
  sub_608DEB0C((_DWORD *)(a1 + 564), 16, a1 + 576);
  FIELD_U32(a1, 640) = 0;
  FIELD_U32(a1, 644) = 0;
  FIELD_U32(a1, 648) = 0;
  sub_608DEB0C((_DWORD *)(a1 + 640), 2, a1 + 652);
  FIELD_U32(a1, 660) = 0;
  FIELD_U32(a1, 664) = 0;
  FIELD_U32(a1, 668) = 0;
  sub_608DEB0C((_DWORD *)(a1 + 660), 6, a1 + 672);
  FIELD_U32(a1, 696) = 0;
  FIELD_U32(a1, 700) = 0;
  FIELD_U32(a1, 704) = 0;
  sub_608DEB0C((_DWORD *)(a1 + 696), 16, a1 + 708);
  EffectWrapper_ctor((EffectWrapper *)(a1 + 788));
  FIELD_U32(a1, 788) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 892));
  FIELD_U32(a1, 892) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 996));
  FIELD_U32(a1, 996) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 1100));
  FIELD_U32(a1, 1100) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 1204));
  FIELD_U32(a1, 1204) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 1308));
  FIELD_U32(a1, 1308) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 1412));
  FIELD_U32(a1, 1412) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 1516));
  FIELD_U32(a1, 1516) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 1660));
  FIELD_U32(a1, 1660) = off_60BC1450;
  FIELD_U32(a1, 1764) = -1;
  FIELD_U32(a1, 1768) = -1;
  FIELD_U32(a1, 1784) = 0;
  FIELD_U32(a1, 1780) = 0;
  FIELD_U32(a1, 1776) = 0;
  FIELD_U32(a1, 1772) = 0;
  FIELD_U8(a1, 1788) = 1;
  FIELD_U32(a1, 1796) = a1 + 1804;
  FIELD_U32(a1, 1792) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 1800) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 1792);
  FIELD_U32(a1, 1792) = &off_60BD4C38;
  v5 = *(void **)(a1 + 1796);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v6 = (const void *)a2[1];
  if ( v5 != v6 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v7 = a2[1];
    while ( *(_BYTE *)(v7 + v3) )
    {
      if ( !*(_BYTE *)(v7 + v3 + 1) )
      {
        ++v3;
        break;
      }
      if ( !*(_BYTE *)(v7 + v3 + 2) )
      {
        v3 += 2;
        break;
      }
      v8 = v3 + 2 < 0x80000;
      v3 += 3;
      if ( !v8 )
      {
        v3 = 0;
        break;
      }
    }
    v9 = FIELD_U32(a1, 1800);
    if ( v3 >= v9 )
      v3 = v9 - 1;
    qmemcpy(v5, v6, v3);
    *((_BYTE *)v5 + v3) = 0;
  }
  FIELD_U32(a1, 1792) = &off_60BD4C20;
  FIELD_U32(a1, 1836) = 0;
  FIELD_U32(a1, 1840) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 296) = 0;
  FIELD_U32(a1, 564) = 0;
  FIELD_U32(a1, 640) = 0;
  FIELD_U32(a1, 660) = 0;
  FIELD_U32(a1, 696) = 0;
  FIELD_U32(a1, 1784) = 0;
  FIELD_U32(a1, 1620) = -1;
  FIELD_U32(a1, 1624) = -1;
  FIELD_U32(a1, 784) = -1;
  FIELD_U32(a1, 780) = -1;
  FIELD_U32(a1, 776) = -1;
  FIELD_U32(a1, 772) = -1;
  FIELD_U32(a1, 1652) = 0;
  FIELD_U32(a1, 1656) = 0;
  return a1;
}
