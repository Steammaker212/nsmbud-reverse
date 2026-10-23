/* sub_608FA7D4
 * address: 0x608FA7D4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608FA7D4(int *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  dword_60CCEE94 = (int)a1;
  dword_60CCEE8C = 0;
  *(_QWORD *)&dword_60CCEF08 = qword_60CCFB50 / 100000;
  v2 = *a1;
  v3 = a1[1];
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "RootHeap";
  v4 = sub_608F6050(v2, v3, (int)v6, 0);
  if ( dword_60CCEEA4 < dword_60CCEEA8 )
    *(_DWORD *)(dword_60CCEEAC + 4 * dword_60CCEEA4++) = v4;
  sead__HeapMgr__sInstance = (int)&unk_60CCEE84;
  return &sead__HeapMgr__sInstance;
}
