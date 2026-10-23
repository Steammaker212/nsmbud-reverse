/* sub_604A72EC
 * address: 0x604A72EC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604A72EC(int a1)
{
  int v1; // r0
  bool v2; // zf

  if ( !dword_60C99E24 )
    return 0;
  v1 = sub_603FF0A8(dword_60C99E24, a1);
  v2 = v1 == 0;
  if ( v1 )
    v2 = FIELD_U8(v1, 40096) == 0;
  return !v2 && FIELD_U8(v1, 40114) != 0;
}
