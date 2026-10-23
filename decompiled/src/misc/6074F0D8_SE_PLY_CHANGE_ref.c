/* SE_PLY_CHANGE_ref
 * address: 0x6074F0D8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char *__fastcall SE_PLY_CHANGE_ref(int a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r0
  unsigned int v4; // r0

  v1 = FIELD_U32(a1, 36);
  if ( v1 > 7 )
    return "SE_PLY_CHANGE_SMALL";
  if ( ((1 << v1) & 0x16) == 0 )
  {
    if ( ((1 << v1) & 0x28) != 0 )
      return "SE_PLY_CHANGE_MAME";
    if ( ((1 << v1) & 0xC0) != 0 )
    {
      v2 = FIELD_U32(a1, 4) - 2;
      if ( v2 >= 8 )
        return "SE_PLY_CHANGE_SMALL";
      else
        return off_60C23C10[v2];
    }
    return "SE_PLY_CHANGE_SMALL";
  }
  v4 = FIELD_U32(a1, 4) - 4;
  if ( v4 >= 6 )
    return "SE_PLY_CHANGE_BIG";
  else
    return off_60C23BF0[v4];
}
