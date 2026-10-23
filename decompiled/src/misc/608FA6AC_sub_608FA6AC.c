/* sub_608FA6AC
 * address: 0x608FA6AC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608FA6AC()
{
  int v0; // r0
  int v1; // r1
  int v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  sead__CriticalSection__lock((int)&unk_60CCEEDC);
  dword_60CCEE94 = (int)&unk_60CCEE98;
  sub_609122E8((nn__os *)&unk_60CCEE98);
  dword_60CCEE8C = 0;
  *(_QWORD *)&dword_60CCEF08 = qword_60CCFB50 / 100000;
  v0 = *(_DWORD *)dword_60CCEE94;
  v1 = FIELD_U32(dword_60CCEE94, 4);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "RootHeap";
  v2 = sub_608F6050(v0, v1, (int)v4, 0);
  if ( dword_60CCEEA4 < dword_60CCEEA8 )
    *(_DWORD *)(dword_60CCEEAC + 4 * dword_60CCEEA4++) = v2;
  sead__HeapMgr__sInstance = (int)&unk_60CCEE84;
  return sead__CriticalSection__unlock((int)&unk_60CCEEDC);
}
