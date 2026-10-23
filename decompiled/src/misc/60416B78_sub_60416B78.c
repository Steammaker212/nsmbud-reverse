/* sub_60416B78
 * address: 0x60416B78   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60416B78(int a1, int a2)
{
  int CurrentHeap_const; // r4
  int v4; // r5
  int v5; // r0
  _BYTE v7[40]; // [sp+4h] [bp-C4h] BYREF
  _BYTE v8[84]; // [sp+2Ch] [bp-9Ch] BYREF
  _DWORD v9[18]; // [sp+80h] [bp-48h] BYREF

  CurrentHeap_const = a2;
  if ( !a2 )
    CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v4 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)CurrentHeap_const + 24))(CurrentHeap_const, 1024, 64);
  memset(&v9[1], 0, 44);
  v9[0] = &off_60BF9CF0;
  sub_608E86B8(dword_60CCEBD0, v9, a1, 0, 0);
  if ( v9[1] )
  {
    sub_60904E6C(v8, v9, 1);
    v5 = sub_609049FC(v7, v8, v4, 1024);
    sub_60416904(v5, CurrentHeap_const);
    sub_60904A80(v7);
    sub_608E7A54(v9);
    sub_60904F0C(v8);
  }
  v9[0] = &off_60BF9CF0;
  if ( v9[2] )
    sub_608E6738(v9[2]);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)CurrentHeap_const + 28))(CurrentHeap_const, v4);
}
