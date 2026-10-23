/* aglenv_ref
 * address: 0x6092427C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall aglenv_ref(sead_IDisposer *a1)
{
  _DWORD v3[6]; // [sp+0h] [bp-18h] BYREF

  sub_60923B90(a1);
  sub_60940BC4(&a1[1].field_C);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "aglenv";
  ((void (__fastcall *)(int *, _DWORD *, _DWORD))param_root_ref)(&a1[5].field_8, v3, 0);
  FIELD_U32(a1, 0x0) = (int)off_60C5D920;
  a1[1].field_C = (int)off_60C5D954;
  a1[5].field_8 = (int)off_60C5D97C;
  a1[30].containingHeap = 0;
  a1[30].field_8 = 0;
  a1[30].field_C = 0;
  a1[31].vtable = 0;
  a1[31].containingHeap = 0;
  a1[31].field_8 = 0;
  a1[31].field_C = 1065353216;
  sead__CriticalSection__ctor(a1 + 32);
  Icon_CIRCLE_GREEN_ref(&a1[34].containingHeap);
  a1[48].vtable = 2;
  a1[48].containingHeap = 0;
  a1[48].field_8 = 0;
  a1[48].field_C = 0;
  a1[49].vtable = 0;
  a1[49].containingHeap = 0;
  a1[49].field_8 = 0;
  a1[49].field_C = 0;
  return a1;
}
