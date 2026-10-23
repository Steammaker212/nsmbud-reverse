/* sub_609728A4
 * address: 0x609728A4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609728A4(int result, int a2, int a3)
{
  const char *v3; // r1
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(result, 12) = a2;
  FIELD_U32(result, 16) = a3;
  switch ( a2 )
  {
    case 0:
      v4[0] = &sead__SafeStringBase__vtable;
      v3 = "Layer(Draw)";
      goto LABEL_7;
    case 1:
      v4[0] = &sead__SafeStringBase__vtable;
      v3 = "Layer(SubDraw)";
      goto LABEL_7;
    case 2:
      v4[0] = &sead__SafeStringBase__vtable;
      v3 = "Layer(Begin)";
      goto LABEL_7;
    case 3:
      v4[0] = &sead__SafeStringBase__vtable;
      v3 = "Layer(End)";
      goto LABEL_7;
    case 4:
      v4[0] = &sead__SafeStringBase__vtable;
      v3 = "Layer(GPUCalc)";
LABEL_7:
      v4[1] = v3;
      result = sead__SafeStringBase__operator_assign(result + 4, (int)v4);
      break;
    default:
      return result;
  }
  return result;
}
