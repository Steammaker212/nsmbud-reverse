/* sub_60451DD8
 * address: 0x60451DD8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60451DD8(int a1)
{
  int v2; // r0
  bool v3; // zf
  bool v4; // zf
  int v5; // r5
  int result; // r0
  int v7; // r5

  v2 = FIELD_U32(a1, 116);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U32(a1, 228) == 0;
  if ( v3 )
  {
    result = FIELD_U32(a1, 224);
    v4 = result == 0;
    if ( result )
    {
      result = FIELD_U32(a1, 228);
      v4 = result == 0;
    }
    if ( !v4 )
    {
      v7 = FIELD_U32(a1, 124);
      *(float *)v7 = (*(float (__fastcall **)(_DWORD, float, float, float))(v7 + 16))(
                       FIELD_U32(v7, 20),
                       FIELD_F32(a1, 20),
                       FIELD_F32(v7, 4),
                       FIELD_F32(v7, 8));
      return sub_6086B894(a1 + 120);
    }
  }
  else
  {
    v5 = FIELD_U32(a1, 36);
    *(float *)v5 = (*(float (__fastcall **)(_DWORD, float, float, float))(v5 + 16))(
                     FIELD_U32(v5, 20),
                     FIELD_F32(a1, 20),
                     FIELD_F32(v5, 4),
                     FIELD_F32(v5, 8));
    return sub_6086AA2C(a1 + 32);
  }
  return result;
}
