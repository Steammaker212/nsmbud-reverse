/* sub_60819C38
 * address: 0x60819C38   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60819C38(int a1, int a2)
{
  FIELD_U8(a1, 33) = 1;
  return CourseSelectCacheMgr_ErrorViewer_ref(dword_60C88AC0, a2);
}
