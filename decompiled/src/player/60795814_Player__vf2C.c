/* Player__vf2C
 * address: 0x60795814   size: 68   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60795814(int a1)
{
  signed int v1; // r1
  _BOOL4 result; // r0

  v1 = PlayerBase_vf11(a1);
  result = 0;
  if ( v1 == 1 )
    return !dword_60C99DD4 || FIELD_U32(dword_60C99DD4, 764) != 3;
  return result;
}
