/* CourseSelectCacheMgr_ErrorViewer_ref
 * address: 0x6016B024   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CourseSelectCacheMgr_ErrorViewer_ref(int a1, int a2)
{
  unsigned int v3; // r5
  _DWORD *v4; // r0
  int result; // r0
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v3 = sub_608F61B0(4) + a2;
  v4 = (_DWORD *)sub_6016AD7C((_DWORD *)a1, v3);
  FIELD_U8(a1, 1704) = 1;
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "CourseSelectCacheMgr__ErrorViewer";
  result = sead__ExpHeap__create(v3, (int)v6, v4, 4, 1, 0);
  FIELD_U32(a1, 1724) = result;
  return result;
}
