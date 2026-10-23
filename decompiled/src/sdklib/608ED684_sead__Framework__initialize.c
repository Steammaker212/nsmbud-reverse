/* sead__Framework__initialize
 * address: 0x608ED684   size: 204   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sead__Framework__initialize(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r5
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  if ( a1[1] )
    sub_608FA7D4();
  else
    sub_608FA6AC(*a1);
  v1 = 0;
  if ( dword_60CCEEA4 )
    v1 = *(_DWORD **)dword_60CCEEAC;
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "sead__ThreadMgr";
  v2 = sead__ExpHeap__create(0, (int)v4, v1, 4, 1, 0);
  sead__ThreadMgr__createInstance(v2);
  sead__ThreadMgr__initialize(sead__ThreadMgr__sInstance, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 20))(v2);
  return sead__GlobalRandom__createInstance((int)v1);
}
