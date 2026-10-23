/* sub_60022DF8
 * address: 0x60022DF8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *(__fastcall *__fastcall sub_60022DF8(int a1, int a2))(int a1)
{
  int v4; // r1
  bool v5; // zf
  sead_IDisposer *(__fastcall *result)(int); // r0

  v4 = 0;
  if ( dword_60C9CF0C )
  {
    sub_60454C94(dword_60C9CF0C, 0);
    v4 = dword_60C9CF0C;
  }
  FIELD_U8(a1, 6) = 0;
  FIELD_U8(a1, 16) = 0;
  v5 = v4 == 0;
  FIELD_U32(a1, 8) = -1;
  FIELD_U32(a1, 12) = 0;
  if ( v4 )
    v5 = FIELD_U8(a1, 7) == 0;
  if ( !v5 && FIELD_U32(v4, 1316) == 2 )
  {
    FIELD_U32(a1, 8) = 1;
    FIELD_U32(a1, 12) = 1;
  }
  result = *(sead_IDisposer *(__fastcall **)(int))a2;
  if ( *(_DWORD *)a2 == 2 )
  {
    result = *(sead_IDisposer *(__fastcall **)(int))(a2 + 4);
    if ( result == AreaTask_create )
    {
      FIELD_U8(a1, 5) = 1;
      return (sead_IDisposer *(__fastcall *)(int))1;
    }
  }
  return result;
}
