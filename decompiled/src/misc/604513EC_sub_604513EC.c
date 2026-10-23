/* sub_604513EC
 * address: 0x604513EC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604513EC(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r5

  result = FIELD_U32(a1, 136);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 140);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    v4 = FIELD_U32(a1, 36);
    *(float *)v4 = (*(float (__fastcall **)(_DWORD, float, float, float))(v4 + 16))(
                     FIELD_U32(v4, 20),
                     FIELD_F32(a1, 20),
                     FIELD_F32(v4, 4),
                     FIELD_F32(v4, 8));
    return sub_6086B894(a1 + 32);
  }
  return result;
}
