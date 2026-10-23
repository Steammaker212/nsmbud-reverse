/* sub_60908808
 * address: 0x60908808   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60908808(nn__os *a1, void *a2)
{
  nn__os *CurrentThread; // r6
  int v5; // r0
  int ThreadId; // r7
  sead_IDisposer *v7; // r4
  int v8; // r4
  int v9; // r1

  CurrentThread = (nn__os *)nn__os__GetCurrentThread(a1);
  v5 = nn__os__GetCurrentThread(CurrentThread);
  nn__os__ChangeThreadPriority(v5, 16);
  ThreadId = nn__os__GetThreadId(CurrentThread);
  v7 = (sead_IDisposer *)operator_new_8DE25C(0x90u, a2, 4);
  sead_MainThread_ref(v7, (int)a2, (int)CurrentThread, ThreadId);
  FIELD_U32(v7, 0x0) = (int)off_60C5CE38;
  v7[1].field_8 = (int)&off_60C5CE8C;
  *((_DWORD *)a1 + 17) = v7;
  nn__os__SetTlsValue(*((_DWORD *)a1 + 18), v7);
  v8 = dword_60CCFC58;
  v9 = nn__os__GetCurrentCoreNumber((nn__os *)&dword_60CCFC58) + 1;
  return nn__os__SetTlsValue(v8, v9);
}
