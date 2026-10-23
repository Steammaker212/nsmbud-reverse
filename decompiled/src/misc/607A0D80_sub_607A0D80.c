/* sub_607A0D80
 * address: 0x607A0D80   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A0D80(int a1, int a2, int a3, int a4, float a5, float a6, int a7)
{
  int v13; // r7

  v13 = 0;
  if ( sub_6076CC74(a1, a2) == 1
    && FIELD_U32(a1, 1320) == FIELD_U32(a1, 11388)
    && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1)
    && !sub_60766714(a1) )
  {
    v13 = 0;
    if ( (*(int (__fastcall **)(int, int, bool, int, int))(*(_DWORD *)a1 + 1420))(
           a1,
           a2,
           FIELD_U32(a1, 80) == a3,
           a4,
           a7) == 1 )
    {
      v13 = 1;
      FIELD_F32(a1, 124) = a6;
      FIELD_F32(a1, 88) = flt_60B0A898[a3] * a5;
      FIELD_F32(a1, 92) = a5;
    }
  }
  return v13;
}
