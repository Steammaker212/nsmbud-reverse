/* sub_6086A3F0
 * address: 0x6086A3F0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086A3F0(int result, int a2, int a3)
{
  float (__fastcall *v3)(float, float, float); // r1

  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 12) = 0;
  FIELD_F32(result, 16) = (float)a2;
  FIELD_U32(result, 20) = 1065353216;
  v3 = (float (__fastcall *)(float, float, float))dword_6086A208;
  if ( a3 )
    v3 = sub_6086A224;
  FIELD_U32(result, 24) = v3;
  FIELD_U32(result, 28) = 0;
  return result;
}
