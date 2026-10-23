/* sub_60377D94
 * address: 0x60377D94   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60377D94(int a1, unsigned int *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r0
  int result; // r0

  v2 = FIELD_U8(LevelInfo_instance, 16);
  v3 = FIELD_U8(LevelInfo_instance, 17);
  if ( v2 == 45 )
  {
    if ( v3 <= 6 )
    {
      v3 += 16;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( v2 == 46 )
  {
    if ( v3 <= 6 )
    {
LABEL_8:
      *a2 = v3;
      return 1;
    }
    if ( v3 <= 0xD )
    {
      v3 += 9;
      goto LABEL_8;
    }
    goto LABEL_13;
  }
  if ( v2 > 6 )
  {
LABEL_13:
    *a2 = -1;
    return 0;
  }
  result = 1;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v2 += 16;
  *a2 = v2;
  return result;
}
