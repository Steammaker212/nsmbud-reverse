/* SE_OBJ_SNAKE_BLOCK_ref_2_helper
 * address: 0x60812FD8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_OBJ_SNAKE_BLOCK_ref_2_helper(int a1, int a2, int *a3, char a4, int a5)
{
  int v6; // r0
  int v7; // r2
  _BOOL4 result; // r0

  FIELD_U32(a1, 468) = 0;
  FIELD_U32(a1, 472) = 0;
  FIELD_U8(a1, 496) = a4;
  if ( a3 )
  {
    FIELD_U8(a1, 488) = *((_BYTE *)a3 + 8);
    v6 = *a3;
    v7 = a3[1];
    FIELD_U32(a1, 480) = v6;
    FIELD_U32(a1, 484) = v7;
  }
  else
  {
    FIELD_U32(a1, 480) = 0;
    FIELD_U32(a1, 484) = 0;
  }
  FIELD_U32(a1, 492) = a2;
  FIELD_U32(a1, 476) = a5;
  result = (sub_60808FD4(SoundSystem_instance, a2) & 1) == 0;
  FIELD_U8(a1, 497) = result;
  return result;
}
