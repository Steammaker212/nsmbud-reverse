/* sub_6063E3F4
 * address: 0x6063E3F4   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063E3F4(int result)
{
  int *v1; // r1
  int v2; // r2
  int v3; // r2
  float v4; // s2
  float v5; // s2

  v1 = (int *)(result + 6164);
  v2 = FIELD_U32(result, 6164);
  if ( v2 )
  {
    v3 = v2 - 1;
    *v1 = v3;
  }
  else
  {
    v3 = 0;
  }
  v4 = FIELD_F32(result, 108);
  if ( (float)(FIELD_F32(dword_60CC6484, 40) + 16.0) > v4
    || v4 > (float)(FIELD_F32(dword_60CC6484, 48) + -16.0)
    || (v5 = FIELD_F32(result, 112), v5 > (float)(FIELD_F32(dword_60CC6484, 52) + -16.0))
    || (float)(FIELD_F32(dword_60CC6484, 44) + 16.0) > v5 )
  {
    result = 10 * (unsigned __int8)(FIELD_U32(result, 24) >> 20);
    *v1 = result;
  }
  else if ( !v3 )
  {
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)result + 192))(result, &unk_60CB5770);
  }
  return result;
}
